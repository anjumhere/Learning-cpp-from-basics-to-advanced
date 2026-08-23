/*
 * CONCEPT: Pythagorean Theorem & Output Formatting
 * In a right triangle the hypotenuse satisfies c^2 = a^2 + b^2, so
 * <cmath>'s sqrt(pow(a, 2) + pow(b, 2)) computes it from the two legs.
 * Stream manipulators from <iomanip> (fixed, setprecision) control how
 * many decimal places cout shows. Analogy: choosing how finely to read
 * marks on a ruler.
 */

#include <cmath>
#include <iomanip>
#include <iostream>

using std::cin;
using std::cout;
using std::fixed;
using std::setprecision;

int main() {

  // ----------------------------------------------------
  // STEP 1: Read the two triangle sides from the user (active — compile & run as-is)
  // ----------------------------------------------------
  double a;
  double b;

  cout << "Enter size of A :";
  cin >> a;
  cout << "Enter size of B :";
  cin >> b;

  // ----------------------------------------------------
  // STEP 2: Apply the Pythagorean theorem and show the result
  // >>> UNCOMMENT the block below (keep Step 1), then compile and run.
  // >>> Observe: sqrt(pow(a, 2) + pow(b, 2)) turns sides 3 and 4 into hypotenuse 5; cout's default shows ~6 significant digits.
  // ----------------------------------------------------
  /*
  double c;

  c = std::sqrt(pow(a, 2) + pow(b, 2));

  cout << "The hypotenuse of right triangle is : " << c << '\n';
  */

  // ----------------------------------------------------
  // STEP 3: Control the decimals with fixed and setprecision
  // >>> UNCOMMENT the block below (Steps 1-2 must stay uncommented), then compile and run.
  // >>> Observe: fixed << setprecision(10) makes cout print exactly 10 digits after the decimal point.
  // ----------------------------------------------------
  /*
  cout << fixed << setprecision(10);
  cout << "The hypotenuse of right triangle is : " << c << '\n';
  */

  return 0;
}
