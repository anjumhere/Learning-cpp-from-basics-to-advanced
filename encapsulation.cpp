/*
 * ================================================================
 *                        ENCAPSULATION
 * ================================================================
 * Encapsulation is the wrapping up of data members and member
 * functions under a single unit called a class.
 * ================================================================
 */

#include <iostream>
#include <string>

using std::cout;
using std::string;

/*
 * ----------------------------------------------------------------
 * Class: Student
 * ----------------------------------------------------------------
 * Here we group data (properties/attributes) and a member function
 * under a single unit called a class — this is encapsulation.
 *
 * Encapsulation is also used to hide sensitive data, like
 * student_code below. We hide sensitive data by making it private.
 * ----------------------------------------------------------------
 */
class Student {
private:
  double student_code;

public:
  string name;
  int age;
  string section;
  double marks;

  void changeSection(string newSection);
};

int main() {

  Student s1;
  s1.name = "Anjum";
  s1.age = 20;
  s1.section = "12-D";
  s1.marks = 998;

  s1.changeSection("11-C");

  return 0;
}
