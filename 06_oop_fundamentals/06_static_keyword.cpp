/*
 * CONCEPT: static
 * A `static` local variable is created and initialized ONCE and keeps
 * its value for the whole program lifetime — even though it is only
 * visible inside its function/scope. A `static` object is likewise
 * constructed once and destroyed only when main() ends.
 * Why: shared counters, caches, or long-lived objects without globals.
 * Analogy: a hotel room key card tied to your whole stay (static) vs
 * a day pass thrown away every night (automatic).
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

    // ----------------------------------------------------
    // STEP 1: Call fn() once — the static counter starts at 0
    // >>> Compile and run as-is. Prints "Val :0".
    // ----------------------------------------------------
    fn();

    // ----------------------------------------------------
    // STEP 2: Call it three more times — the value persists
    // >>> UNCOMMENT the block below, then compile and run.
    // >>> Observe: Val prints 1, 2, 3 — `val` was initialized once
    // >>> and survives between calls; each call just increments it.
    // >>> (A normal local int would restart at 0 on EVERY call.)
    // ----------------------------------------------------
    /*
    fn(); // value becomes 1
    fn(); // value becomes 2
    fn(); // value becomes 3
    */

    // ----------------------------------------------------
    // STEP 3: Static object lifetime — outlives its scope
    // >>> UNCOMMENT the block below, then compile and run.
    // >>> Observe the ORDER of messages:
    // >>>   constructor   -> when the if-block is entered
    // >>>   End of main fnc
    // >>>   destructor    -> only at program end, AFTER main's last
    // >>>                    line, because `static` extended obj's
    // >>>                    lifetime to the whole program.
    // ----------------------------------------------------
    /*
    if (true) {
        static Checker obj;
    }
    */

    cout << "End of main fnc\n";
    return 0;
}

// ----------------------------------------------------
// STEP 4: EXPERIMENT — drop the keyword
// >>> Remove `static` from the Checker object in STEP 3 and run again.
// >>> EXPECTED order: constructor, destructor, End of main fnc —
// >>> an automatic object dies the moment its scope closes.
// >>> Conclusion: static members/objects are created once, are shared
// >>> across the program, and stay alive until main() finishes.
// ----------------------------------------------------

void fn() {

    static int val = 0;             // static keyword preserves the variable in memory even after the function terminates
    cout << "Val :" << val << '\n'; // print 0
    val++;                          // increase by 1
}
