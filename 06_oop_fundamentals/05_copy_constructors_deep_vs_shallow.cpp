/*
 * CONCEPT: Copy Constructor — Deep vs Shallow
 * A copy constructor creates a new object from an existing one.
 *   Shallow copy -> copies member VALUES, including pointer values,
 *                   so both objects end up sharing the same heap memory.
 *   Deep copy    -> also allocates new heap memory and copies what
 *                   the pointers POINT TO, so each object owns its data.
 * The compiler-generated copy constructor is shallow — dangerous when
 * a class manages heap memory (two destructors would free it twice).
 * Analogy: shallow = photocopying a house key (both keys open the SAME
 * door); deep = building an identical second house with its own key.
 */

#include <iostream>
#include <string>

using std::cout;
using std::string;

class Student {

  public:
    string name;
    double *cgpaptr;

    Student(string name, double cgpa) {

        this->name = std::move(name);
        cgpaptr = new double;
        *cgpaptr = cgpa;
    }
    // its a shallow copy , if you change something here , it gets changed in the
    // original obj. Student(Student &origObj) {
    //   cout << "This is a copy constructor\n";
    //   this->name = origObj.name;
    //   this->cgpaptr = origObj.cgpaptr;
    // }

    // This is a deep copy.

    Student(Student &origObj) {
        this->name = std::move(origObj.name);
        // origObj.name is a string (not a pointer) — direct copy, no dereferencing
        // needed. Correct, as you said.

        cgpaptr = new double;
        // allocates a NEW double on the heap
        // cgpaptr (this object's own pointer) now points to this new, separate
        // memory right now, that memory holds garbage (uninitialized)

        *cgpaptr = *origObj.cgpaptr;
        // LEFT side: *cgpaptr → "the double VALUE stored at the address cgpaptr
        // points to" (our new memory) RIGHT side: *origObj.cgpaptr → "the double
        // VALUE stored at the address origObj.cgpaptr points to" (the original's
        // memory) So: take the ACTUAL NUMBER from the original's heap memory, and
        // copy that number into our new heap memory
    }

    /*  ------------------- Destructor--------------------
     * Unlike Constructor which is used to allocate memory , destructor is used to
     * de-allocate memory.
     */
    ~Student() {

        // We use ~ sign to creaate a destructor ,to delete dynamically allocated
        // memories we have to the word delete;
        cout << "I am a destructor\n";
        delete cgpaptr;
    }
    void getDetails() {

        cout << "Name :" << name << '\n';
        cout << "CGPA :" << *cgpaptr << '\n';
    }
};

int main() {

    // ----------------------------------------------------
    // STEP 1: Create the original object on the heap-backed class
    // >>> Compile and run as-is. s1 owns its own heap double
    // >>> holding 3.8. At shutdown, ONE destructor runs for s1.
    // ----------------------------------------------------
    Student s1("Anjum", 3.8);
    s1.getDetails();

    // ----------------------------------------------------
    // STEP 2: Deep-copy s1, then change ONLY the copy
    // >>> UNCOMMENT the block below, then compile and run.
    // >>> Observe: s2's CGPA becomes 5.5 while s1 still shows 3.8 —
    // >>> the deep copy gave s2 its OWN heap double. Also watch TWO
    // >>> destructors fire at shutdown, each freeing separate memory.
    // ----------------------------------------------------
    /*
    Student s2(s1);

    *(s2.cgpaptr) = 5.5;
    s1.getDetails();
    s2.name = "Neha";
    s2.getDetails();
    */

    // ----------------------------------------------------
    // STEP 3: EXPERIMENT — swap deep copy for shallow copy
    // >>> In the class above: comment out the deep copy constructor,
    // >>> un-comment the shallow one, then re-enable STEP 2 and run.
    // >>> EXPECTED: changing s2's CGPA now ALSO corrupts s1 (they share
    // >>> one heap double), and at shutdown both destructors `delete`
    // >>> the same address — undefined behavior/crash. This is exactly
    // >>> the bug deep copies exist to prevent. Restore the deep copy
    // >>> afterwards so the file behaves again.
    // ----------------------------------------------------

    return 0;
}
