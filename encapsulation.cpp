/*
 * =====================================================================================
 * Encapsulation => Encapsulation is the wrqapping up of data members and data
 * functions under a single unit called class.
 * =====================================================================================
 */

#include <iostream>
#include <string>
using std::cout;
using std::string;

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

// Here we have grouped data (properties and attributes) + member function under
// a single unit called class. This is known as encapsulation. Encapsulation is
// also used to hide sensitive data like student code in the above example; We
// can hide sensitive data by making the data private;

int main() {

  Student s1;
  s1.name = "Anjum";
  s1.age = 20;
  s1.section = "12-D";
  s1.marks = 998;

  s1.changeSection("11-C");

  return 0;
}
