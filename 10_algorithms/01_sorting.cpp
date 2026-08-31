
#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>
using std::cout;
using std::sort;
using std::vector;
int main() {
  cout << "Sorting a simple array\n";
  int arr[5] = {3, 1, 4, 5, 2};

  sort(arr, arr + 5);

  for (int val : arr) {
    cout << val << " ";
  }

  cout << "\n\n";

  cout << "Sorting simple array in reverse\n";
  sort(arr, arr + 5, std::greater<>());

  for (int val : arr) {
    cout << val << " ";
  }

  cout << "\n\n";

  cout << "Sorting a vector\n";
  vector<int> vec = {4, 6, 9, 3, 10, 5, 1, 2, 4};

  sort(vec.begin(), vec.end());
  for (auto vv : vec) {
    cout << vv << " ";
  }

  for (int i = 0; i <= 10; i++) {
    cout << i << '\n';
  }
  cout << "\n\n";

  cout << "Sorting a vector in reverse\n";
  sort(vec.begin(), vec.end(), std::greater<>());

  for (auto vv : vec) {
    cout << vv << " ";
  }
}
