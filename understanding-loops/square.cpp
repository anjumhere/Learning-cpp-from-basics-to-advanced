#include <iostream>
using std::cin;
using std::cout;

int main() {
  /*
   * Section 1: Symbol grid
   * Takes a count and a symbol from the user, then prints
   * a (count+1) x (count+1) grid of that symbol using a
   * nested loop. Outer loop = rows, inner loop = columns.
   */
  int count;
  char sym;
  cout << "Enter the count :";
  cin >> count;
  cout << "Enter the symbol :";
  cin >> sym;

  for (int i = 0; i <= count; i++) {
    for (int j = 0; j <= count; j++) {
      cout << sym << " ";
    }
    cout << '\n';
  }

  /*
   * Section 2: Characters A to F
   * n = 5, so inner loop runs j = 0..5 (6 iterations).
   * ch starts at 'A' each row and increments by 1 each
   * inner iteration, printing 'A' through 'F'.
   */
  int n = 5;
  for (int i = 0; i <= n; i++) {
    char ch = 'A';
    for (int j = 0; j <= n; j++) {
      cout << ch << " ";
      ch = ch + 1;
    }
    cout << '\n';
  }

  /*
   * Section 3: Characters a to e
   * m = 4, so inner loop runs j = 0..4 (5 iterations).
   * ch starts at 'a' each row and increments by 1 each
   * inner iteration, printing 'a' through 'e'.
   */
  int m = 4;
  for (int i = 0; i <= m; i++) {
    char ch = 'a';
    for (int j = 0; j <= m; j++) {
      cout << ch << " ";
      ch = ch + 1;
    }
    cout << '\n';
  }

  return 0;
}
