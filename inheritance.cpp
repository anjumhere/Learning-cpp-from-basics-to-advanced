/*
 *                Inheritance
 * When properties and member functions of a base class are passed on to a
 * derived class. Passing on properites and member functions from parent class
 * to child class.
 */

#include <iostream>
#include <string>

using std::cout;
using std::string;

class Person {
public:
  string name;
  int age;

  Person() { cout << "Parent constructior\n"; }
};

class Student : public Person {

public:
  int roll_number;
  Student() { cout << "This is child constructor\n"; }

  void getValues() {
    cout << "Name :" << name << '\n';
    cout << "age  :" << age << '\n';
    cout << "Roll Number :" << roll_number << '\n';
  }
};

int main() {

  Student s1;
  s1.name = "Anjum";
  s1.age = 21;
  s1.roll_number = 105325;

  s1.getValues();

  return 0;
}
