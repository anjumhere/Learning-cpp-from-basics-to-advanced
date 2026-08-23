/*
 * CONCEPT: Pass-by-Reference via Alias (References)
 * A reference parameter (int &b) is an alias for the caller's
 * variable: the function reads and writes the original directly,
 * with no pointer syntax and no copies. Prefer references over
 * pointers when the argument must exist and never needs to be
 * re-pointed.
 * Analogy: with a reference the helper is already IN your room
 * moving things; no key needs to be handed over first.
 */
#include <iostream>

using std::cin;
using std::cout;

/*
 * ----------------------------------------------------------------
 * alias
 * ----------------------------------------------------------------
 * Takes a reference to an int (an alias for the caller's variable)
 * and modifies it directly — no pointer syntax needed, unlike
 * passByreference.cpp.
 * ----------------------------------------------------------------
 */
void alias(int &b);

int main() {

  // ----------------------------------------------------
  // STEP 1: The function works directly on the caller's variable (active — compile & run as-is)
  // ----------------------------------------------------
  int a = 100;

  alias(a);
  cout << "The new value of a is :" << a << '\n';

  // ----------------------------------------------------
  // STEP 2: Alias another variable
  // >>> UNCOMMENT the block below, then compile and run.
  // >>> Observe: notice there is NO & at the call site — C++ wires the
  //     alias to c automatically. c changes, a does not.
  // ----------------------------------------------------
  /*
  int c = 200;

  alias(c);
  cout << "The new value of c is :" << c << '\n';
  */

  // ----------------------------------------------------
  // STEP 3: References are not pointers
  // >>> UNCOMMENT the block below, then compile and run.
  // >>> Observe: the COMPILER refuses — alias takes a reference (int &),
  //     so passing an address (&c) is a type mismatch. Compare this with
  //     07_pass_by_reference_pointer.cpp, where & was required. Re-comment
  //     afterwards.
  // ----------------------------------------------------
  /*
  alias(&c); // ERROR: alias takes a reference (int &) — never pass '&c'
  */

  return 0;
}

void alias(int &b) {
  cout << "Enter the new value to the alias of a :";
  cin >> b;
}
