#include <iostream>
#include <string>

using std::cout;
using std::string;

/*
 * ------------Access Modifiers -------------------
 *  1. Private : Data (attributes/properties) and methods (member functions)
 * accessible inside a class; Classes are private by default;
 *
 *  2. Public : Data (attributes/properties) and methods (member functions)
 * accessible to everyone;
 *
 *  3. Protected : Data (attributes/properties) and methods (member functions)
 * accessible  class and its derived classes;
 */

class Teacher {
public: // private class restrict us from using the data outside the class and
        // protected class will be used in inheritance.
  // Now that class is public , we can access it outside this class too.
  string name;
  string dept;
  string subject;
  double salary;

  void changeDept(string newDept) { dept = newDept; }
};

int main() {

  Teacher t1; // We can access  and assign new values to the
              // data/properties/attributes using dot(.) operator;
  t1.name = "Anjum";
  t1.dept = "Computer Science";
  t1.subject = "C++";
  t1.salary = 50250.25;
  t1.changeDept("Psycology");

  cout << t1.name << '\n';
  cout << t1.dept << '\n';
  cout << t1.subject << '\n';
  cout << t1.salary << '\n';

  return 0;
}
