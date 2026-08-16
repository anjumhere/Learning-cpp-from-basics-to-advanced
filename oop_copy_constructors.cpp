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
  Student(string name, double cgpa) {

    this->name = name;
    this->cgpa = cgpa;
  }

  Student(Student &origObj) {
    cout << "This is a copy constructor\n";
    this->name = origObj.name;
    this->cgpa = origObj.cgpa;
  }

  string name;
  double cgpa;

  void getDetails() {

    cout << "Name :" << name << '\n';
    cout << "CGPA :" << cgpa << '\n';
  }
};
int main() {

  Student s1("Anjum", 3.8);
  // s1.getDetails();

  // copy constructor
  Student s2(s1);
  s2.getDetails();

  return 0;
}
