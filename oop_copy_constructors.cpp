/*
 * ----------------Copy Constructor--------------------
 *  A copy constructor is a special constructor , used to copy the properties of
 * one object into another.
 *
 *  -----------------Copy Constructor types ------------
 *  1. Shallow Copy:> A shallow copy of an object copies all the member values
 * from one object to another.
 *  2. Deep Copy:> A deep copy of an object not only copies the member values
 * from an object but also copies the dynamically allocated member that members
 * point to.
 *
 * The default copy constructor creates a shallow of an object.
 *
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

    this->name = name;
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
    this->name = origObj.name;
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

  Student s1("Anjum", 3.8);

  // copy constructor
  Student s2(s1);

  *(s2.cgpaptr) = 5.5;
  s1.getDetails();
  s2.name = "Neha";
  s2.getDetails();

  return 0;
}
