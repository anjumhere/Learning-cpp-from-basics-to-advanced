#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int main() {

  /*
   * ----------------------------------------------------------------
   * fill()
   * ----------------------------------------------------------------
   * fill() fills a range of elements with a specified value.
   * Signature: fill(begin, end, value);
   * ----------------------------------------------------------------
   */

  /*
   * string foods[10] = {"pizza", "pizza", "pizza", "pizza", "pizza",
   *                     "pizza", "pizza", "pizza", "pizza", "pizza"};
   * // this works but it's not practical
   */

  /*
   * Using fill():
   *
   * string foods[100];
   * fill(foods, foods + 100, "pizza");
   * for (string food : foods) {
   *   cout << food << '\n';
   * }
   */

  string items[5];
  int size = sizeof(items) / sizeof(items[0]);

  for (int i = 0; i < size; i++) {
    cout << "Enter the item you want to add at # " << i << '\n';
    std::getline(cin, items[i]);
  }

  return 0;
}
