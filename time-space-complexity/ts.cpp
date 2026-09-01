#include <iostream>
using std::cin;
using std::cout;

int main() {
  int n;
  cout << "Enter the value of n :";
  cin >> n;

  /*
   * Time Complexity: O(n)
   * ----------------------
   * The loop runs from i = 0 to i = n-1, so it executes
   * exactly n times. Each iteration does a fixed amount of
   * work (one print statement), so the total work grows in
   * direct proportion to n.
   *
   * n = 3  -> 3 prints
   * n = 10 -> 10 prints
   * n = 100 -> 100 prints
   *
   * Since operations scale linearly (1-to-1) with input size,
   * this is O(n) — linear time.
   */
  for (int i = 0; i < n; i++) {
    cout << "hi";
  }

  return 0;
}
