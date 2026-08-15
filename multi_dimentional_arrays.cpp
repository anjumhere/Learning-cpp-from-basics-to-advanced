#include <iostream>

using std::cout;
using std::string;

int main() {

  /*
   * ----------------------------------------------------------------
   * 2D array of strings (reference example)
   * ----------------------------------------------------------------
   *              // c1        // c2         // c3
   * string cars[3][3] = {{"Supra", "Gt", "Mustang"},                // rows
   *                      {"f1", "bmw", "ferrari"},                  // rows
   *                      {"honda", "lamborgini", "astron martni"}}; // rows
   * ----------------------------------------------------------------
   */

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

  return 0;
}
