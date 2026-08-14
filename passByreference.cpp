#include <iostream>

using std::cin;
using std::cout;

void change(int *ptr);
int main() {

  int a = 10;

  change(&a);
  cout << "The changed value of a is = " << a << '\n';
  return 0;
}

void change(int *ptr) {
  cout << "Enter the new value of a (which is pased byr reference :";
  cin >> *ptr;
}
