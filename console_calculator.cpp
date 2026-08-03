#include <iostream>
using std::cin;
using std::cout;
int main() {

  char op;
  double a;
  double b;
  double result;

  cout << "***************** Calculator ***************\n";
  cout << "Please enter the first number :";
  cin >> a;
  cout << "Please enter the second number :";
  cin >> b;

  cout << "Choose operator (+ _ * /)" << '\n';
  cin >> op;
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
    cout << "Quotient of both numbers is : " << result << '\n';
    break;
  default:
    cout << "Invalid operator" << '\n';
    break;
  }
  return 0;
}
