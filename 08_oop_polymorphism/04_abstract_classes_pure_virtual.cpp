/*
 * ----- Abstraction -----
 *  Hiding all unnecessary details and only show the imporant stuff
 *  ----- Ways to implement Abstraction
 *  1. Access Modifiers are only of the ways to implement abstraction.
 *  2.  --- Using abstract classes ----
 *  -> abstract class provide base class from which other classes are derived
 *  -> They can not be instantiated and are meant to be inherited
 *  -> abstract classes are used to defined a interface for derived classes
 *
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
    /*
        Shape s1.draw(); // if you try to do this , you will get an error: shape is an abstract class.
        -> It is only meant to provide interface for derived class

     */
    Circle c1;
    c1.draw();

    Square s1;
    s1.draw();

    return 0;
}
