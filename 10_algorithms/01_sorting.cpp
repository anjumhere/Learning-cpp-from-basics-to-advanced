#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>
using std::cout;
using std::sort;
using std::vector;

int main() {
  // ----------------------------------------------------
  // 1. Sorting a plain C-style array (ascending order)
  // ----------------------------------------------------
  cout << "Sorting a simple array\n";
  int arr[5] = {3, 1, 4, 5, 2};

  // std::sort takes a RANGE: a start pointer and an end pointer.
  // arr        -> pointer to the first element (arr[0])
  // arr + 5    -> pointer to ONE PAST the last element (arr[5], which
  //               doesn't exist, but marks where the range ends)
  // Default sort() sorts in ascending order using operator
  sort(arr, arr + 5);

  for (int val : arr) {
    cout << val << " ";
  }
  cout << "\n\n";

  // ----------------------------------------------------
  // 2. Sorting the same array in descending order
  // ----------------------------------------------------
  cout << "Sorting simple array in reverse\n";

  // std::greater<>() is a comparator function object that tells sort()
  // to arrange elements from largest to smallest instead of the
  // default smallest-to-largest.
  // The <> lets the compiler deduce the type automatically (C++14+).
  sort(arr, arr + 5, std::greater<>());

  for (int val : arr) {
    cout << val << " ";
  }
  cout << "\n\n";

  // ----------------------------------------------------
  // 3. Sorting a std::vector (ascending order)
  // ----------------------------------------------------
  cout << "Sorting a vector\n";
  vector<int> vec = {4, 6, 9, 3, 10, 5, 1, 2, 4};

  // vec.begin() -> iterator pointing to the first element
  // vec.end()   -> iterator pointing ONE PAST the last element
  // Same idea as arr/arr+5 above, but using iterators instead of
  // raw pointers since vectors use iterators, not plain pointers.
  sort(vec.begin(), vec.end());

  for (auto vv : vec) {
    cout << vv << " ";
  }

  // NOTE: this loop is unrelated to sorting — it just prints 0 to 10.
  // Included here as-is; doesn't affect the vector or its sort order.
  for (int i = 0; i <= 10; i++) {
    cout << i << '\n';
  }
  cout << "\n\n";

  // ----------------------------------------------------
  // 4. Sorting the vector in descending order
  // ----------------------------------------------------
  cout << "Sorting a vector in reverse\n";
  sort(vec.begin(), vec.end(), std::greater<>());

  for (auto vv : vec) {
    cout << vv << " ";
  }
}
