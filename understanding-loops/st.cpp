#include <iostream>

using std::cin;
using std::cout;

int main() {

  int n = 5;
  for (int i = 0; i < n; i++) {
    cout << " i = :" << i << '\n';
    for (int j = 0; j < i; j++) {
      cout << " j = :" << j;
    }
  }
  cout << "grade A";
  return 0;
}
