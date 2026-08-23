/*
 * CONCEPT: Compile-Time Polymorphism (Overloading)
 * Poly = multiple, morph = forms: polymorphism lets one name take different
 * forms depending on context. There are two types of polymorphism:
 * 1. Compile time (constructor overloading and function overloading)
 * 2. Run time => see 02_runtime_overriding.cpp
 * Here the COMPILER itself picks which version runs, by matching argument
 * types before the program ever starts.
 * Analogy: the verb "withdraw" differs at an ATM vs a bank counter -- the
 * context (the arguments) selects the behaviour.
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

  // ----------------------------------------------------
  // STEP 1: Constructor overloading -- one class, many constructors (active — compile & run as-is)
  // ----------------------------------------------------
  Person p1(23);      // calls the constructor with age
  Person p2("Anjum"); // calls the constructor with name

  // ----------------------------------------------------
  // STEP 2: Third form -- no arguments at all
  // >>> UNCOMMENT the block below, then compile and run.
  // >>> Observe: an empty declaration selects the non-parameterized
  // >>> overload; "depends on context" simply means the compiler matches
  // >>> whatever argument list YOU pass -- all decided at compile time.
  // ----------------------------------------------------
  /*
  Person p3; // calls the non-parameterized constructor.
  */

  // ----------------------------------------------------
  // STEP 3: Function overloading -- one name, two bodies
  // >>> UNCOMMENT the block below, then compile and run.
  // >>> Observe: identical call syntax; the char vs int argument picks the
  // >>> matching show(). Punchline: EVERY choice in this file was made
  // >>> before running -- next lesson shows a case where that same
  // >>> compile-time rule silently picks a version you did not want.
  // ----------------------------------------------------
  /*
  p1.show('H');
  p1.show(12);
  */

  return 0;
}
