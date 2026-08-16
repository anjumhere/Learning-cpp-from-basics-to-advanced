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

  Person(string name, int age) {

    this->name = name;
    this->age = age;

    cout << "Parent constructior\n";
  }
  ~Person() { cout << "This is parent destructor\n"; }
};

class Student : public Person {

public:
  int roll_number;
  Student(string name, int age, int roll_number) : Person(name, age) {
    this->roll_number = roll_number;
  };
  void getValues() {
    cout << "Name :" << name << '\n';
    cout << "age  :" << age << '\n';
    cout << "Roll Number :" << roll_number << '\n';
  }

  ~Student() { cout << "This is a child destructor\n"; }
};

int main() {

  Student s1("Anjum", 21, 104325);
  s1.getValues();

  /*
   * Construction order: parent -> child
   * Destruction order: child -> parent (reverse of construction)
   *
   * When you check the output, you will see that the parent constructor
   * runs first, followed by the child constructor. On the other hand,
   * the child destructor runs first, followed by the parent destructor.
   */
  return 0;
}
