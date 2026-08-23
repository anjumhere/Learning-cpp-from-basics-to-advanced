/*
 * CONCEPT: Multidimensional (2D) Arrays
 * A 2D array is an array of arrays: type name[rows][columns]. A single
 * cell is reached with two subscripts, [row][col], and nested loops visit
 * every cell — outer loop over rows, inner loop over columns. Use 2D
 * arrays for naturally grid-shaped data: tables, matrices, game boards.
 * Analogy: a spreadsheet addressed by row number and column letter.
 */

#include <iostream>

using std::cout;
using std::string;

int main() {
  // ----------------------------------------------------
  // STEP 1: Build a 2D array and print the grid (active — compile & run as-is)
  // ----------------------------------------------------
  int nums[3][4] = {{1, 2, 3, 4}, {4, 3, 2, 1}, {3, 4, 1, 2}};
  int rows = sizeof(nums) / sizeof(nums[0]);
  int columns = sizeof(nums[0]) / sizeof(nums[0][0]);

  /*
   * ----------------------------------------------------------------
   * Iterating over the 2D array
   * ----------------------------------------------------------------
   */
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      cout << nums[i][j] << " ";
    }
    cout << '\n';
  }

  // ----------------------------------------------------
  // STEP 2: Change one cell and print again
  // >>> UNCOMMENT the block below, then compile and run.
  // >>> Observe: only the cell at row 1, column 2 turns into 99 — the
  // >>> first subscript selects the row, the second selects the column.
  // ----------------------------------------------------
  /*
  nums[1][2] = 99;

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      cout << nums[i][j] << " ";
    }
    cout << '\n';
  }
  */

  // ----------------------------------------------------
  // STEP 3: A 2D array of strings
  // >>> UNCOMMENT the block below, then compile and run.
  // >>> Observe: the element type can be anything — here strings — while
  // >>> the [row][col] access pattern stays exactly the same.
  // ----------------------------------------------------
  /*
  // 2D array of strings (reference example)
  //              // c1        // c2         // c3
  string cars[3][3] = {{"Supra", "Gt", "Mustang"},                // rows
                       {"f1", "bmw", "ferrari"},                  // rows
                       {"honda", "lamborgini", "astron martni"}}; // rows

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << cars[i][j] << " ";
    }
    cout << '\n';
  }
  */

  return 0;
}
