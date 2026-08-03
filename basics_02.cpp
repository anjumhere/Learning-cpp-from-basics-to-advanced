#include <iostream>
using std::cin;
using std::cout;
using std ::string;
int main() {
  //
  // string name;
  // cout << "Enter name" << '\n';
  // std::getline(cin, name);
  // cout << name << '\n';
  //
  // if (name.length() > 10) {
  //   cout << "Name too long choose between (1-8) characters" << '\n';
  // }
  // if (name.empty()) {
  //   cout << "The name is empty" << '\n';
  // }
  //
  // name.append("@gmail.com");
  // cout << name.at(0);
  //
  // name.insert(0, "@");
  //
  // cout << name.find('j');
  //
  // cout << name.erase(0, 4);
  //
  //
  // int num = 10;
  //
  // for (int i = 0; i <= 100; i++) {
  //   if (i == 20) {
  //     continue;
  //   }
  //   cout << i << '\n';
  // }

  // generating shapes using nested loops;

  int rows;
  int columns;
  char symbol;

  cout << "Enter the Number of rows :";
  cin >> rows;

  cout << "Enter the Number of columns :";
  cin >> columns;

  cout << "Enter the symbol :";
  cin >> symbol;

  for (int i = 0; i <= rows; i++) {
    for (int j = 0; j <= columns; j++) {
      cout << symbol;
    }
    cout << '\n';
  }

  return 0;
}
