#include <iostream>

using std::cin;
using std::cout;

using std::string;

int main() {

  // fill() => fills  a range of elements in a specified range
  // fill( began, end, value);

  // string foods[10] = {"pizza", "pizza", "pizza", "pizza", "pizza", // this
  // works but its not practical
  //                     "pizza", "pizza", "pizza", "pizza", "pizza"};

  // using fill();

  string foods[100];
  fill(foods, foods + 100, "pizza");
  for (string food : foods) {
    cout << food << '\n';
  }

  return 0;
}
