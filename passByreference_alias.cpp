#include <iostream>

using std::cin;
using std::cout;

void alias(int &b);
int main() {

  int a = 100;

  alias(a);
  cout << "The new value of a is :" << a << '\n';

  return 0;
}

void alias(int &b) {
  cout << "Enter the new value to the alias of a :";
  cin >> b;
}
