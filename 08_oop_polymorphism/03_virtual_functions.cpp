/*
 * CONCEPT: Virtual Functions (Run-Time Polymorphism, Part 2)
 * A virtual function is a member function that you expect to be redefined
 * in derived classes. Marking the base version virtual tells the compiler
 * to decide WHICH override runs at run time, based on the real object a
 * pointer/reference points to -- exactly the fix for the previous lesson,
 * where Parent* ptr = &child; kept calling the Parent version.
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

    // ----------------------------------------------------
    // STEP 1: Ordinary overriding on a direct object (active — compile & run as-is)
    // ----------------------------------------------------
    Child c1;
    c1.hello(); // when you run this, it will redefine the hello() function in derived class

    // ----------------------------------------------------
    // STEP 2: Replay last lesson's failing experiment
    // >>> UNCOMMENT the block below, then compile and run.
    // >>> Observe: THIS time it prints "Hello from child class"! The setup
    // >>> is identical to 02_runtime_overriding.cpp, but Parent::hello now
    // >>> carries virtual (look above), so the choice moved from compile
    // >>> time (pointer type) to RUN TIME (actual object type).
    // ----------------------------------------------------
    /*
    Child c2;
    Parent *ptr = &c2; // same trap as the previous lesson...
    ptr->hello();      // ...but virtual changes the outcome!
    */

    // ----------------------------------------------------
    // STEP 3: One call site, many behaviours
    // >>> UNCOMMENT the block below, then compile and run.
    // >>> Observe: one loop, one identical call line, yet a real Parent and
    // >>> a Child answer differently -- the program chooses WHILE it runs.
    // >>> This dispatch machinery is what the next lesson stretches into
    // >>> abstract interfaces.
    // ----------------------------------------------------
    /*
    Parent base_only;
    Parent *group[2] = { &base_only, &c1 };
    for (int i = 0; i < 2; ++i) {
        group[i]->hello(); // identical code, different output per element
    }
    */

    return 0;
}
