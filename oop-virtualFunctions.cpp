/*
 * ----- Runtime Polymorphism -----
 *  -> Virtual functions
 *  A virtual is a member funtion that you would expect to  be redefined in derived class.
 */
#include <iostream>
#include <string>

using std::cout;
using std::string;

class Parent {
  public:
    virtual void hello() { cout << "Hello From parent class" << '\n'; }
};

class Child : public Parent {
  public:
    void hello() { cout << "Hello from child class" << '\n'; }
};

int main() {

    Child c1;
    c1.hello(); // when you run this , it will redefine the hello() function in derived class , its almost saae as
                // funtion
    // overriding

    return 0;
}
