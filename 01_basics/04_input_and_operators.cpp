/*
 * CONCEPT: Reading Input & Operators
 * cin >> reads typed keyboard input into variables. Operators act on
 * values: arithmetic (+ - * / %), compound assignment (+=, -=),
 * comparisons (== != < > <= >=, which produce a bool), and logic
 * (&& and, || or, ! not). Watch out: int / int truncates the decimals,
 * and % is remainder-only.
 * Why: every interactive program from here on reads input and combines
 * values with these operators.
 * Builds on: variables from 02_variables_and_data_types.cpp.
 */

#include <iostream>

using std::cin;
using std::cout;

int main() {

  // ----------------------------------------------------
  // STEP 1: Read two integers and add them (active — compile & run as-is)
  // ----------------------------------------------------
  int a;
  int b;

  cout << "Enter first number : ";
  cin >> a;
  cout << "Enter second number: ";
  cin >> b;

  cout << a << " + " << b << " = " << a + b << '\n';

  // ----------------------------------------------------
  // STEP 2: Integer division truncates; % gives the remainder
  // >>> UNCOMMENT the block below, then compile and run.
  // >>> Observe: 7 / 2 prints 3 (NOT 3.5 — the .5 is thrown away
  // >>> because both operands are ints) while 7 % 2 prints the
  // >>> remainder 1. Try 10 and 5 too.
  // ----------------------------------------------------
  /*
  cout << a << " / " << b << " = " << a / b << "  <- truncated!\n";
  cout << a << " % " << b << " = " << a % b << "  <- remainder\n";
  */

  // ----------------------------------------------------
  // STEP 3: Compound assignment updates in place
  // >>> UNCOMMENT the block below, then compile and run.
  // >>> Observe: x += 5 is shorthand for x = x + 5; same idea for
  // >>> -=, *=, /=.
  // ----------------------------------------------------
  /*
  int x = a;
  x += 5;
  cout << a << " += 5 -> " << x << '\n';
  x *= 2;
  cout << "...then *= 2 -> " << x << '\n';
  */

  // ----------------------------------------------------
  // STEP 4: Comparisons produce bools; logic operators combine them
  // >>> UNCOMMENT the block below, then compile and run.
  // >>> Observe: each comparison prints 1 (true) or 0 (false); && is
  // >>> true only if BOTH sides are true, || if EITHER is, and !
  // >>> flips the answer. These are the raw ingredients of if/else.
  // ----------------------------------------------------
  /*
  cout << a << " > " << b << "  ? " << (a > b) << '\n';
  cout << a << " == " << b << " ? " << (a == b) << '\n';

  bool inRange = (a >= 1) && (a <= 100);
  cout << a << " between 1 and 100? " << inRange << '\n';
  cout << "NOT that: " << !inRange << '\n';
  */

  return 0;
}
