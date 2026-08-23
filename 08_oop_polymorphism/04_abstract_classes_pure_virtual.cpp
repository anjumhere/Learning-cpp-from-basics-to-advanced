/*
 * CONCEPT: Abstract Classes & Pure Virtual Functions
 * Abstraction means hiding all unnecessary details and only showing the
 * important stuff. Access modifiers are one way to implement abstraction;
 * abstract classes are another: they provide a base class other classes are
 * derived from, cannot be instantiated, and only define an interface for
 * derived classes. Writing "= 0" turns last lesson's virtual function PURE:
 * no body at all in the base -- every derived class MUST override it.
 */
#include <iostream>
#include <string>

using std::cout;
using std::string;

class Shape {
  public:
    virtual void draw() = 0;
};

class Circle : public Shape {

  public:
    void draw() { cout << "Drawing a circle\n"; };
};

class Square : public Shape {

  public:
    void draw() { cout << "Drawing a square\n"; };
};

int main() {

    // ----------------------------------------------------
    // STEP 1: Derived classes fill in the required interface (active — compile & run as-is)
    // ----------------------------------------------------
    Circle c1;
    c1.draw();

    Square s1;
    s1.draw();

    // ----------------------------------------------------
    // STEP 2: Command any shape through the base interface
    // >>> UNCOMMENT the block below, then compile and run.
    // >>> Observe: the same run-time dispatch trick as the previous lesson
    // >>> (virtual functions), but now Shape has NO fallback body at all --
    // >>> through a Shape* you can command anything that fulfils the
    // >>> interface contract.
    // ----------------------------------------------------
    /*
    Shape *group[2] = { &c1, &s1 };
    for (int i = 0; i < 2; ++i) {
        group[i]->draw();
    }
    */

    // ----------------------------------------------------
    // STEP 3: Why you can never create a Shape itself
    // >>> UNCOMMENT the block below, then compile and run.
    // >>> Observe: the print lines run fine; then try uncommenting the
    // >>> marked line -- this will NOT compile -- read the error! It is
    // >>> only meant to provide an interface for derived classes.
    // ----------------------------------------------------
    /*
    cout << "Can we create a Shape object directly?\n";
    // Shape s2; // <- UNCOMMENT to read the compiler error yourself:
    //           //    "cannot declare variable 's2' to be of abstract type 'Shape'"
    // if you try to do this, you will get an error: shape is an abstract class
    cout << "No -- an abstract class exists purely to be inherited from.\n";
    */

    return 0;
}
