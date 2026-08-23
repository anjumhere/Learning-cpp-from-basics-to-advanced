/*
 * CONCEPT: Function Templates
 * A function template is a blueprint that lets one function work with many
 * types: the compiler generates a concrete version for each combination of
 * argument types it sees. T and U can be different types (e.g. int and
 * double), and the function returns whichever value is larger. Use a
 * template when the logic is identical for every type.
 * Note: the body uses the ternary operator — (a > b) ? a : b means
 * "if a > b, yield a, otherwise b".
 * Analogy: an ice-cube tray — one fixed shape, fill it with whatever you like.
 */
#include <iostream>

using std::cout;

template <typename T, typename U> auto max(T a, U b) { return (a > b) ? a : b; }

int main() {

  // ----------------------------------------------------
  // STEP 1: One template call, two different types (active — compile & run as-is)
  // ----------------------------------------------------
  cout << max(3, 2.345322) << '\n';

  // ----------------------------------------------------
  // STEP 2: The compiler stamps out an <int, int> version
  // >>> UNCOMMENT the block below, then compile and run.
  // >>> Observe: the same max() now handles two ints and prints 10 — a
  // >>> second instance was generated just for this call.
  // ----------------------------------------------------
  /*
  cout << max(10, 7) << '\n';
  */

  // ----------------------------------------------------
  // STEP 3: And an <double, double> version as well
  // >>> UNCOMMENT the block below, then compile and run.
  // >>> Observe: yet another instantiation handles two doubles (prints
  // >>> 1.25), showing the template is a whole family of functions.
  // ----------------------------------------------------
  /*
  cout << max(1.25, 0.5) << '\n';
  */

  return 0;
}
