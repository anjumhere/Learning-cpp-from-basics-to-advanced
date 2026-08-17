/*
 * |------------ PolyMorphism---------------------------|
 *
 * Poly = Multiple
 * Morph = Forms
 *
 * Polymorphism is the ability of an object to take different forms or behave
 * in a different ways, depending upon the the context in which they are used.
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

    cout << "Parameterized Constructor: name \n";
  }

  Person(int age) {
    this->age = age;

    cout << "Parameterized Constructor : age\n";
  }
  Person() { cout << "Non-parameterized constructor\n"; }
};

int main() {

  // Person p1("name"); // it depends on the context , if we leave the paramter
  // empty , its going  to call Non-parameterized constructor.

  // Person p1; //  if you call this , it will run Non-parameterized
  // constructor;
  Person p1(23); // when you runn this , you will get the constructor with age;
  Person p2("Anjum"); // when you run this you will get the constructor with
                      // name on it;

  return 0;
}
