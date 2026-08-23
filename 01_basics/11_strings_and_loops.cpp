/*
 * CONCEPT: std::string Methods & Loops
 * A std::string stores text and ships with handy member functions:
 * .length(), .empty(), .append(), .at(), .insert(), .find(), .erase().
 * Read a whole line with std::getline(cin, name) — cin >> stops at the
 * first space. Loops repeat work: for counts iterations, continue skips
 * one iteration, and NESTED loops drive rows x columns grids such as
 * printed shapes. Analogy: fill a form field, then draw graph paper
 * square by square.
 */

#include <iostream>

using std::cin;
using std::cout;
using std::string;

int main() {

  // ----------------------------------------------------
  // STEP 1: Declare a string and read a full line of input (active — compile & run as-is)
  // ----------------------------------------------------
  string name;
  cout << "Enter name" << '\n';
  std::getline(cin, name);
  cout << name << '\n';

  // ----------------------------------------------------
  // STEP 2: Validation checks — length and emptiness
  // >>> UNCOMMENT the block below (keep Step 1), then compile and run.
  // >>> Observe: .length() counts characters and .empty() is true only for ""; press Enter immediately at the prompt to trigger the empty check.
  // ----------------------------------------------------
  /*
  if (name.length() > 10) {
    cout << "Name too long choose between (1-8) characters" << '\n';
  }
  if (name.empty()) {
    cout << "The name is empty" << '\n';
  }
  */

  // ----------------------------------------------------
  // STEP 3: String modification functions
  // >>> UNCOMMENT the block below (keep Steps 1-2), then compile and run.
  // >>> Observe: append() adds text at the end, .at(0) peeks at one character, insert() splices text in, find('j') prints an index (or string::npos when absent) and erase(0, 4) removes a range — each line mutates `name` from Step 1.
  // ----------------------------------------------------
  /*
  name.append("@gmail.com");
  cout << name.at(0);
  name.insert(0, "@");
  cout << name.find('j');
  cout << name.erase(0, 4);
  */

  // ----------------------------------------------------
  // STEP 4: For loop with continue
  // >>> UNCOMMENT the block below (keep Steps 1-3), then compile and run.
  // >>> Observe: the counter walks 0..100 but 20 is missing — continue jumps straight to the next iteration the moment it runs.
  // ----------------------------------------------------
  /*
  for (int i = 0; i <= 100; i++) {
    if (i == 20) {
      continue;
    }
    cout << i << '\n';
  }
  */

  // ----------------------------------------------------
  // STEP 5: Read the shape dimensions
  // >>> UNCOMMENT the block below (keep Steps 1-4), then compile and run.
  // >>> Observe: three prompts collect rows, columns and the drawing symbol; nothing is drawn yet.
  // ----------------------------------------------------
  /*
  int rows;
  int columns;
  char symbol;

  cout << "Enter the Number of rows :";
  cin >> rows;

  cout << "Enter the Number of columns :";
  cin >> columns;

  cout << "Enter the symbol :";
  cin >> symbol;
  */

  // ----------------------------------------------------
  // STEP 6: Draw the rectangle with nested loops
  // >>> UNCOMMENT the block below (keep Steps 1-5), then compile and run.
  // >>> Observe: the outer loop controls rows, the inner loop prints one full row of symbols, then '\n' starts the next line — try 4 x 9 with '#'.
  // ----------------------------------------------------
  /*
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      cout << symbol;
    }
    cout << '\n';
  }
  */

  return 0;
}
