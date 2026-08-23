/*
 * CONCEPT: Function Basics
 * A function is a named, reusable block of code: you define it once,
 * then CALL it by name from anywhere. A prototype (the declaration
 * line above main) tells the compiler the name, return type, and
 * parameter types up front; the definition below carries the body.
 * void means "hands nothing back"; any other return type must use
 * return to hand a value to the caller.
 * Why first-class here: every chapter that follows — arrays passed to
 * helper functions, OOP member functions, projects — assumes you can
 * read this pattern fluently.
 * Builds on: variables, operators, loops. Deeper function topics
 * (scope & lifetime, recursion, templates) live in 04_functions.
 */

#include <iostream>
#include <string>

using std::cout;
using std::string;

// ----------------------------------------------------
// STEP 1: Prototypes — promises the compiler checks against
// greet() takes nothing and returns nothing;
// add() takes two ints and returns their int sum.
// ----------------------------------------------------
void greet();
int add(int a, int b);

// A third promise, used in a later step:
string shout(string word);

int main() {

  // ----------------------------------------------------
  // STEP 2: Call a void function — it just does its job (active)
  // ----------------------------------------------------
  greet();

  // ----------------------------------------------------
  // STEP 3: Send values IN with parameters
  // >>> UNCOMMENT the block below, then compile and run.
  // >>> Observe: whatever you pass lands in the parameters a and b,
  // >>> and the returned value is printed right at the call site.
  // ----------------------------------------------------
  /*
  int sum = add(7, 5);
  cout << "add(7, 5) returned " << sum << '\n';
  */

  // ----------------------------------------------------
  // STEP 4: Get a value BACK with return
  // >>> UNCOMMENT the block below, then compile and run.
  // >>> Observe: shout() builds a NEW string ("CODE!!") and hands it
  // >>> back; the caller owns the result and prints it. Data flows in
  // >>> through parameters and out through return.
  // ----------------------------------------------------
  /*
  string loud = shout("code");
  cout << "shout says: " << loud << '\n';
  */

  // ----------------------------------------------------
  // STEP 5: Definitions live below main — order does not matter
  // >>> The three functions are defined AFTER main(), yet calling them
  // >>> above compiles fine because the prototypes at the top already
  // >>> made the promises. Delete a prototype and watch the compiler
  // >>> lose track (then put it back).
  // ----------------------------------------------------

  return 0;
}

void greet() { cout << "Hello from your first function!\n"; }

int add(int a, int b) { return a + b; }

string shout(string word) { return word + "!!"; }
