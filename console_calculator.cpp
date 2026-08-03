#include <cmath>
#include <iomanip>
#include <iostream>
using std::cin;
using std::cout;
using std::fixed;
using std::setprecision;
int main() {

  char op;
  double a;
  double b;
  double result;

  cout << "***************** Calculator ***************\n";

  cout << fixed << setprecision(10);
  cout << "Choose operator (+ _ * /) :";
  cin >> op;
  while (

      op != '+' && op != '-' && op != '*' && op != '/') {
    cout << "Please choose an operator first\n";
    cin >> op;
  }
  cout << "Please enter the first number :";
  cin >> a;
  cout << "Please enter the second number :";
  cin >> b;
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
  return 0;
}
