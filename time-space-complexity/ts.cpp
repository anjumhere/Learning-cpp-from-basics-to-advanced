#include <iostream>
using std::cin;
using std::cout;

int main() {
  int n;
  cout << "Enter the value of n :";
  cin >> n;

  /*
   * Time Complexity: O(1)
   * -----------------------
   * This block does a fixed number of operations no matter
   * what n is. Whether n = 3 or n = 3,000,000, this still
   * runs exactly ONE print — it never depends on n at all.
   *
   * n = 3       -> 1 print
   * n = 10      -> 1 print
   * n = 1000000 -> 1 print
   *
   * Since the operation count stays constant regardless of
   * input size, this is O(1) — constant time.
   */
  cout << "This line always runs once, no matter the value of n\n";

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
  cout << '\n';

  /*
   * Time Complexity: O(n^2)
   * ------------------------
   * Outer loop runs n times (i = 0 to n-1).
   * Inner loop ALSO runs n times for EVERY single outer
   * iteration (j = 0 to n-1), not a shrinking/growing amount.
   *
   * n = 3 -> outer runs 3 times, inner runs 3 times EACH round
   *          -> total prints = 3 x 3 = 9
   * n = 5 -> total prints = 5 x 5 = 25
   * n = 10 -> total prints = 10 x 10 = 100
   *
   * Total operations = n * n = n^2.
   * Since work grows as the SQUARE of input size, this is
   * O(n^2) — quadratic time.
   */
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << "hi";
    }
    cout << '\n';
  }

  return 0;
}
