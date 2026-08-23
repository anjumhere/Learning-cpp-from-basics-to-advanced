/*
 * |------------ Polymorphism ---------------------------|
 *
 * Poly  = Multiple
 * Morph = Forms
 *
 * Polymorphism is the ability of an object to take different forms or
 * behave in different ways, depending upon the context in which they
 * are used.
 */

/*
 * There are two types of polymorphism:
 * 1. Compile time polymorphism (constructor overloading and function
 *    overloading are examples of compile time polymorphism)
 * 2. Run time polymorphism => See in oop_polymorphism_02.cpp
 */

#include <iostream>
#include <string>

using std::cout;
using std::string;

// Example of polymorphism using constructor overloading
class Person {
public:
  string name;
  int age;

  Person(string name) {
    this->name = name;
    cout << "Parameterized Constructor: name\n";
  }

  Person(int age) {
    this->age = age;
    cout << "Parameterized Constructor: age\n";
  }

  Person() { cout << "Non-parameterized constructor\n"; }

  // Function overloading
  void show(int digit) { cout << "The value of val is: " << digit << '\n'; }
  void show(char value) { cout << "The value of val is: " << value << '\n'; }
};

int main() {
  // Compile time Polymorphism
  // 1. Constructor overloading
  // Person p1("name"); // depends on context; if left empty, calls the
  // non-parameterized constructor.
  // Person p1; // calls the non-parameterized constructor.

  Person p1(23);      // calls the constructor with age
  Person p2("Anjum"); // calls the constructor with name

  // 2. Function overloading
  // Multiple functions with the same name but different parameters
  p1.show('H');
  // p1.show(12);

  return 0;
}
