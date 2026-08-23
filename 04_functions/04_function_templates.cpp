#include <iostream>

using std::cout;

/*
 * ----------------------------------------------------------------
 * Function Template: max
 * ----------------------------------------------------------------
 * Templates let a single function work with multiple types.
 * T and U can be different types (e.g. int and double); the
 * function returns whichever value is larger.
 * ----------------------------------------------------------------
 */
template <typename T, typename U> auto max(T a, U b) { return (a > b) ? a : b; }

int main() {

  cout << max(3, 2.345322) << '\n';

  return 0;
}
