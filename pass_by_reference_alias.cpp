#include <iostream>

using std::cin;
using std::cout;

/*
 * ----------------------------------------------------------------
 * alias
 * ----------------------------------------------------------------
 * Takes a reference to an int (an alias for the caller's variable)
 * and modifies it directly — no pointer syntax needed, unlike
 * passByreference.cpp.
 * ----------------------------------------------------------------
 */
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
