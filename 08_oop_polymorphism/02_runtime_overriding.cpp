/*
 * CONCEPT: Function Overriding (Run-Time Polymorphism, Part 1)
 * Parent and child class both contain the same function (same signature)
 * with different implementations; the parent class function is said to be
 * overridden. Careful though: without the virtual keyword the call is still
 * matched to the POINTER/REFERENCE type at compile time, so a base-class
 * pointer aimed at a Child calls the PARENT version -- the classic
 * "why doesn't it call my version?" problem explored in the steps below.
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

    // ----------------------------------------------------
    // STEP 1: Each object runs its own version (active — compile & run as-is)
    // ----------------------------------------------------
    Parent p_only("Anjum"); // parent object -> parent function
    p_only.hello();

    Child c1("anjum", "gilgit"); // child object -> overridden function runs
    c1.hello();

    // ----------------------------------------------------
    // STEP 2: The classic trap -- a Parent pointer holding a Child
    // >>> UNCOMMENT the block below, then compile and run.
    // >>> Observe: it prints "Parent function" EVEN THOUGH ptr holds a
    // >>> Child's address! Without virtual, the compiler binds the call to
    // >>> the POINTER's type at compile time -- the same compile-time rule
    // >>> as the previous lesson's overloading, now working against us.
    // ----------------------------------------------------
    /*
    Parent *ptr = &c1; // perfectly legal: a Child IS-A Parent
    ptr->hello();      // which version runs?
    */

    // ----------------------------------------------------
    // STEP 3: Same object, two answers
    // >>> UNCOMMENT the block below, then compile and run.
    // >>> Observe: identical object, opposite outputs -- nothing about c1
    // >>> changed, only HOW the call reached it. Hold that frustration:
    // >>> the next lesson (virtual functions) is the fix.
    // ----------------------------------------------------
    /*
    cout << "-- one object, two ways to call hello() --\n";
    c1.hello();   // through the Child itself
    ptr->hello(); // through the Parent pointer
    */

    return 0;
}
