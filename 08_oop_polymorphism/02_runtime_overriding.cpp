/*
 *  Run Time Polymorphism
 *
 *  1. Function Overriding
 * Parent and child class both containing the same function with different
 * implementations The parent class function is said the be overridden.
 */
#include <iostream>
#include <string>

using std::cout;
using std::string;
class Parent {

  public:
    string name;

    Parent(string name) { this->name = name; }
    void hello() { cout << "Parent function\n"; }
};

class Child : public Parent {

  public:
    string address;
    Child(string name, string address) : Parent(name) { this->address = address; }

    void hello() { cout << "Function of Child class\n"; }
};

int main() {
    /*
      Parent c1("Anjum"); // When create an object with parent class , you will
      get the function of parent class; Child c1("Anjum","gilgit") // When you
      create an object with child class, the parent class functio will be
      overridden. c1.hello(); // When you
      */

    Child c1("anjum", "gilgit");
    c1.hello();
    return 0;
}
