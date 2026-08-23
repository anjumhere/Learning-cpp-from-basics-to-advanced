/*
       Multiple Inheritance

       Parent Class -------- Parent Class
                  ||        ||
                  ||        ||
                  ||        ||
                  Child Class


*/

#include <iostream>
#include <string>
using std::cout;
using std::string;

class ParentOne {
public:
  string name;
  ParentOne(string name) { this->name = name; };
  ~ParentOne() { cout << "This is the destructor of the parent one \n"; }
};

class ParentTwo {
public:
  int age;

  ParentTwo(int age) { this->age = age; };
  ~ParentTwo() { cout << "Child class destructor" << '\n'; }
};

class ChildClass : public ParentOne, ParentTwo {
public:
  string location;
  int student_code;

  ChildClass(string name, int age, string location, int student_code)
      : ParentOne(name), ParentTwo(age) {
    this->location = location;
    this->student_code = student_code;
  }

  void showInfo() {
    cout << "Name :" << name << '\n';
    cout << "age :" << age << '\n';
    cout << "location :" << location << '\n';
    cout << "student code :" << student_code << '\n';
  }
};
int main() {

  ChildClass c1("Anjum", 21, "Gilgit Baltistan", 1023455);
  c1.showInfo();
  return 0;
}
