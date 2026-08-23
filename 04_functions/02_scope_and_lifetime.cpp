/*
 * CONCEPT: Scope and Lifetime
 * Scope is the region of code where a variable's name is visible; lifetime
 * is how long the variable actually exists in memory. A local variable is
 * created when execution enters its block and destroyed when the block
 * ends, which is why two functions can both use the name `life` without
 * interfering with each other.
 * Analogy: a hotel key card — it opens only your room and dies at checkout.
 */
#include <iostream>

using std::cout;
using std::string;

int lifeUp();

int main() {
  // ----------------------------------------------------
  // STEP 1: Two variables named `life`, totally independent (active — compile & run as-is)
  // ----------------------------------------------------
  int life = 0;

  do {
    life += lifeUp();
    cout << "life is :" << life << '\n';
  } while (life != 5);

  // ----------------------------------------------------
  // STEP 2: A block { } is its own private world
  // >>> UNCOMMENT the block below, then compile and run.
  // >>> Observe: `inner` works inside its braces. Then uncomment the marked
  // >>> line as well — the compiler rejects it because `inner` no longer
  // >>> exists outside its block (its scope ended at the closing brace).
  // ----------------------------------------------------
  /*
  {
    int inner = 99;
    cout << "inner is :" << inner << '\n';
  }
  // cout << "inner is :" << inner << '\n'; // <- uncomment for a compile ERROR: out of scope
  */

  // ----------------------------------------------------
  // STEP 3: Locals are re-created on every pass through their block
  // >>> UNCOMMENT the block below, then compile and run.
  // >>> Observe: it prints 1 three times — `fresh` is born and destroyed
  // >>> each iteration, so it never remembers the earlier ++.
  // ----------------------------------------------------
  /*
  for (int i = 0; i < 3; i++) {
    int fresh = 0;
    fresh++;
    cout << "fresh is :" << fresh << '\n';
  }
  */
}

int lifeUp() {
  int life = 0;
  return ++life;
}
