/*
 * CONCEPT: Input Validation with while + Choosing Actions with switch
 * A while loop repeats as long as its condition is true — perfect for
 * re-prompting until the user finally types a valid operator. A switch
 * then jumps to the case matching that exact character, and break exits
 * the switch. Together they power menu-style programs like calculators.
 * Analogy: a vending machine keeps asking until you press a real button,
 * then dispatches the matching slot.
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
  // STEP 1: Greet the user and ask for an operator (active — compile & run as-is)
  // ----------------------------------------------------
  char op;

  cout << "***************** Calculator ***************\n";
  cout << fixed << setprecision(10);

  cout << "Choose operator (+ _ * /) :";
  cin >> op;

  // ----------------------------------------------------
  // STEP 2: Keep asking until the operator is valid
  // >>> UNCOMMENT the block below (keep Step 1), then compile and run.
  // >>> Observe: typing e.g. '%' makes the loop repeat its prompt; it only lets you continue once op is one of + - * /. Try to break it on purpose!
  // ----------------------------------------------------
  /*
  while (op != '+' && op != '-' && op != '*' && op != '/') {
    cout << "Please choose an operator first\n";
    cin >> op;
  }
  */

  // ----------------------------------------------------
  // STEP 3: Read the two operands
  // >>> UNCOMMENT the block below (keep Steps 1-2), then compile and run.
  // >>> Observe: doubles accept whole numbers and decimals alike; these two variables feed every calculation below.
  // ----------------------------------------------------
  /*
  double a;
  double b;

  cout << "Please enter the first number :";
  cin >> a;
  cout << "Please enter the second number :";
  cin >> b;
  */

  // ----------------------------------------------------
  // STEP 4: switch on the operator — + , - , * , /
  // >>> UNCOMMENT the block below (keep Steps 1-3), then compile and run.
  // >>> Observe: exactly one matching case runs, then break leaves the switch; dividing by 0 yields infinity, which std::isinf() catches, and default is the safety net.
  // ----------------------------------------------------
  /*
  double result;
  switch (op) {
  case '+':
    result = a + b;
    cout << "Sum of both numbers is : " << result << '\n';
    break;

  case '-':
    result = a - b;
    cout << "Difference of both numbers is : " << result << '\n';
    break;

  case '*':
    result = a * b;
    cout << "Product of both numbers is : " << result << '\n';
    break;

  case '/':
    result = a / b;
    if (std::isinf(result)) {
      cout << "Infinite Result\n";
    } else {
      cout << "Quotient of both numbers is : " << result << '\n';
    }
    break;

  default:
    cout << "Invalid operator" << '\n';
    break;
  }
  */

  return 0;
}
