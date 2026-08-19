#include <iostream>
#include <string>

using std::cout;
using std::string;

/*
 * ================================================================
 *                       ACCESS MODIFIERS
 * ================================================================
 *  1. Private   : Data (attributes/properties) and methods (member
 *                 functions) accessible only inside the class.
 *                 Classes are private by default.
 *
 *  2. Public    : Data and methods accessible to everyone.
 *
 *  3. Protected : Data and methods accessible to the class and its
 *                 derived classes.
 * ================================================================
 */

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
    t1.name = "Anjum";
    t1.dept = "Computer Science";
    t1.subject = "C++";
    t1.subject = "Javscript";
    t1.changeDept("Psycology");
    t1.setSalary(50000.50);

    cout << t1.name << '\n';
    cout << t1.dept << '\n';
    cout << t1.subject << '\n';
    cout << t1.getSalary() << '\n';

    return 0;
}
