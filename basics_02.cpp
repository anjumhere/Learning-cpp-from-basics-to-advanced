#include <iostream>
using std::cin;
using std::cout;
using std ::string;

int main() {
  /* ---------------------------------------------------
     String basics: declaring, reading with getline,
     and printing a string
  --------------------------------------------------- */
  // string name;
  // cout << "Enter name" << '\n';
  // std::getline(cin, name);
  // cout << name << '\n';

  /* ---------------------------------------------------
     String validation checks
     .length() -> number of characters
     .empty()  -> true if string has no characters
  --------------------------------------------------- */
  // if (name.length() > 10) {
  //   cout << "Name too long choose between (1-8) characters" << '\n';
  // }
  // if (name.empty()) {
  //   cout << "The name is empty" << '\n';
  // }

  /* ---------------------------------------------------
     String modification functions
     .append()  -> adds text to the end
     .at()      -> access character at an index
     .insert()  -> inserts text at a given position
     .find()    -> returns index of first match, or
                   string::npos if not found
     .erase()   -> removes characters in a range
  --------------------------------------------------- */
  // name.append("@gmail.com");
  // cout << name.at(0);
  //
  // name.insert(0, "@");
  //
  // cout << name.find('j');
  //
  // cout << name.erase(0, 4);

  /* ---------------------------------------------------
     For loop with continue
     continue skips the rest of the current iteration
     and jumps straight to the next one
  --------------------------------------------------- */
  // int num = 10;
  //
  // for (int i = 0; i <= 100; i++) {
  //   if (i == 20) {
  //     continue;
  //   }
  //   cout << i << '\n';
  // }

  /* ---------------------------------------------------
     Generating shapes using nested loops
     - Outer loop controls rows
     - Inner loop controls columns
     - User provides dimensions and the symbol to print
  --------------------------------------------------- */
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
