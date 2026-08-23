/*
 * CONCEPT: Access Modifiers
 * Access modifiers control WHO can touch a class's members:
 *   private   -> only inside the class (classes are private by default)
 *   public    -> accessible from anywhere
 *   protected -> the class plus classes that inherit from it
 * Why: hiding data behind a controlled public interface prevents
 * outside code from putting an object into an invalid state.
 * Analogy: a vending machine — snacks (private data) are only handed
 * out through buttons and a coin slot (public methods).
 */

#include <iostream>
#include <string>

using std::cout;
using std::string;

// ----------------------------------------------------
// STEP 1: Read the class — one member hidden, the rest exposed
// ----------------------------------------------------
class Teacher {
    // A private member restricts us from using the data outside the
    // class; protected is used for inheritance.
  private:
    double salary;

  public:
    // Now that this section is public, we can access these members
    // outside the class too.
    string name;
    string dept;
    string subject;

    void changeDept(string newDept) { dept = std::move(newDept); }

    // setter -> used to set the value of a private data member
    void setSalary(double s) { salary = s; }

    // getter -> used to get the value of a private data member
    double getSalary() { return salary; }
};

int main() {

    /*
     * We can access and assign new values to the data members using
     * the dot (.) operator.
     */
    Teacher t1;

    // ----------------------------------------------------
    // STEP 2: Work with the PUBLIC members directly
    // >>> Compile and run as-is. The dot operator reaches any
    // >>> public member for both writing and reading.
    // ----------------------------------------------------
    t1.name = "Anjum";
    t1.dept = "Computer Science";
    t1.subject = "C++";
    t1.subject = "Javscript";
    cout << t1.name << '\n';
    cout << t1.dept << '\n';
    cout << t1.subject << '\n';

    // ----------------------------------------------------
    // STEP 3: Reach the PRIVATE salary through its setter/getter
    // >>> UNCOMMENT the block below, then compile and run.
    // >>> Observe: you never touch `salary` itself — the setter
    // >>> writes it and the getter reads it on your behalf.
    // ----------------------------------------------------
    /*
    t1.changeDept("Psycology");
    t1.setSalary(50000.50);
    cout << t1.getSalary() << '\n';
    */

    // ----------------------------------------------------
    // STEP 4: Try to bypass the interface (experiment)
    // >>> UNCOMMENT the line below, compile, read the error, then
    // >>> re-comment it so the file builds again.
    // >>> EXPECTED: a "salary is private" compiler error — this is
    // >>> the whole point of access modifiers.
    // ----------------------------------------------------
    // t1.salary = 99999.0;

    return 0;
}
