#include <iostream>

using std::cin;
using std::cout;

int main() {
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

  /// printing character from a to n

  int n = 5;
  for (int i = 0; i <= n; i++) {
    char ch = 'A';
    for (int j = 0; j <= n; j++) {
      cout << ch << " ";
      ch = ch + 1;
    }
    cout << '\n';
  }

  return 0;
}
