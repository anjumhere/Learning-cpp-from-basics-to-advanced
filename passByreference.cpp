#include <iostream>

using std::cin;
using std::cout;

/*
 * ----------------------------------------------------------------
 * change
 * ----------------------------------------------------------------
 * Takes a pointer to an int and modifies the original variable
 * through that pointer — this is pass-by-reference using pointers.
 * ----------------------------------------------------------------
 */
void change(int *ptr);

int main() {

  int a = 10;

  change(&a);
  cout << "The changed value of a is = " << a << '\n';

  return 0;
}

void change(int *ptr) {
  cout << "Enter the new value of a (which is passed by reference :";
  cin >> *ptr;
}
