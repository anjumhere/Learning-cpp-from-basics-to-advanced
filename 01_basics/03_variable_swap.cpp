/*
 * CONCEPT: Variables & Swapping Two Values
 * A variable is a named slot of memory that holds a value of a given
 * type. Swapping two variables means exchanging their values, which
 * needs a third "temporary" variable to remember one value mid-move.
 * Analogy: swapping water between two glasses requires a spare glass.
 */

#include <iostream>

using std::cout;
using std::string;

int main() {

  // ----------------------------------------------------
  // STEP 1: Create two variables and print them (active — compile & run as-is)
  // ----------------------------------------------------
  string x = "one";
  string y = "two";

  cout << "Value of x : " << x << '\n';
  cout << "Value of y : " << y << '\n';

  // ----------------------------------------------------
  // STEP 2: Remember x's value in a temporary variable
  // >>> UNCOMMENT the block below (keep Step 1), then compile and run.
  // >>> Observe: the output does not change yet — temp quietly holds a copy of x so it is not lost.
  // ----------------------------------------------------
  /*
  // A spare variable to hold a value during the swap.
  string temp;
  temp = x; // temp holds the value of x
  */

  // ----------------------------------------------------
  // STEP 3: Complete the swap and print the results
  // >>> UNCOMMENT the block below (keep Steps 1 and 2), then compile and run.
  // >>> Observe: x now holds "two" and y holds "one" — the values traded places thanks to temp.
  // ----------------------------------------------------
  /*
  x = y;    // now x has the value of y
  y = temp; // now y has the value of x, which was stored in temp

  cout << "Value of x : " << x << '\n';
  cout << "Value of y : " << y << '\n';
  */

  return 0;
}
