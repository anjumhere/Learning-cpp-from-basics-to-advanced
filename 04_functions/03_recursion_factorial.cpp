/*
 * CONCEPT: Recursion
 * A recursive function solves a problem by calling itself on a smaller
 * version of that problem, stopping when it reaches a base case. It shines
 * when a task is naturally self-similar: walking N steps, factorials, tree
 * traversal. Every recursive call must move toward the base case, or the
 * calls never stop.
 * Analogy: Russian nesting dolls — keep opening, until the smallest solid
 * doll tells you to stop.
 */
#include <iostream>

using std::cout;

/*
 * ----------------------------------------------------------------
 * Function declarations
 * ----------------------------------------------------------------
 */
void walk(int num);
int iterative(int val);
int recursive(int val);

int main() {

  // Finding a factorial using both iterative and recursive methods

  // ----------------------------------------------------
  // STEP 1: Factorial with an ordinary loop (active — compile & run as-is)
  // ----------------------------------------------------
  cout << iterative(10) << '\n';

  // ----------------------------------------------------
  // STEP 2: Factorial with recursion — same answer, no loop keyword
  // >>> UNCOMMENT the block below, then compile and run.
  // >>> Observe: the output matches STEP 1 (3628800). recursive() dives to
  // >>> its base case (val == 0) and multiplies on the way back UP.
  // ----------------------------------------------------
  /*
  cout << recursive(10) << '\n';
  */

  // ----------------------------------------------------
  // STEP 3: Recursion as pure repetition
  // >>> UNCOMMENT the block below, then compile and run.
  // >>> Observe: walk() prints "You walked a step" 100 times; each call
  // >>> shrinks num by 1 until the base case (num > 0) fails.
  // ----------------------------------------------------
  /*
  walk(100);
  */

  // ----------------------------------------------------
  // STEP 4: The base case is what stops the fall
  // >>> UNCOMMENT the block below, then compile and run.
  // >>> Observe: recursive(0) hits the else branch immediately and returns
  // >>> 1 — correct, since 0! is defined as 1. No multiplications happen.
  // ----------------------------------------------------
  /*
  cout << recursive(0) << '\n';
  */

  return 0;
}

void walk(int num) {
  if (num > 0) {
    cout << "You walked a step\n";
    walk(num - 1);
  }
}

int iterative(int val) {
  int result = 1;

  for (int i = 1; i <= val; i++) {
    result *= i;
  }

  return result;
}

int recursive(int val) {
  if (val > 0) {
    val *= recursive(val - 1);
    return val;
  } else {
    return 1;
  }
}
