#include <iostream>

using std::cout;
template <typename T, typename U> auto max(T a, U b) { return (a > b) ? a : b; }

int main() {
  cout << max(3, 2.345322) << '\n';

  return 0;
}
