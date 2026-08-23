/*
 * ------- Static Keyword -------
 *  Variables created as static in a function are created and initialized once for the lifetime of the function
 *  Static variables are created and initialized once. They are shared accross all the other classes and objects
 *  throughout the program
 */
#include <iostream>
using std::cout;

class Checker {
  public:
    Checker() { cout << "constructor\n"; }

    ~Checker() { cout << "destructor\n"; }
};

void fn();
int main() {

    fn(); // starts by 0 so prints zero and becomes 1
    fn(); // value becomes 1
    fn(); // value becomes 2
    fn(); // value becomes 3

    // Static keyword with classes
    if (true) {
        static Checker obj; // when you run this code you will get see
        // constructor
        // End of main fnc
        // Destructor

        // Without static
        // constructor
        // destructor
        // End of main fnc

        // Conclusion
        // The static variable created in classes shared acrsoss all other classes and objects
        // and it remains its memory until the main function is executed
    }

    cout << "End of main fnc\n";
    return 0;
}
void fn() {

    static int val = 0;             // static keyword preserves the variable in memory even function terminates
    cout << "Val :" << val << '\n'; // print 0
    val++;                          // increase by 1
}
