#include <iostream>

using std::cin;
using std::cout;

int main() {

  int num1 = 10;
  int num2 = 20;

  if (num1 == 10 || num2 == 10) {
    cout << "Number is 10" << '\n';
  } else {
    cout << "Numbers are not equal \n" << '\n';
  }

  bool isPass = true;

  if (!isPass) {
    cout << "Nahida passed the exam" << '\n';
  } else {

    cout << "Nahida did not pass the exam" << '\n';
  }
  return 0;
}
