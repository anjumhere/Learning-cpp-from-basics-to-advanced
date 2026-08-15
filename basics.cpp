#include <cmath>
#include <iostream>

using std::cout;
using std::string;

int main() {
  cout << "basics" << '\n';
  /*
   * ----------------------------------------------------------------
   * Variable declarations
   * ----------------------------------------------------------------
   * x, y are sample doubles; z holds the result of whichever math
   * operation below is uncommented.
   * ----------------------------------------------------------------
   */
  // double x = 3.7;
  // double y = 11;
  // double z;

  /*
   * ----------------------------------------------------------------
   * Min / Max
   * ----------------------------------------------------------------
   * std::max and std::min return the larger/smaller of two values.
   * ----------------------------------------------------------------
   */
  // z = std::max(x, y);
  // z = std::min(x, y);

  /*
   * ----------------------------------------------------------------
   * Power / Root / Absolute value
   * ----------------------------------------------------------------
   * pow(base, exponent), sqrt(x), abs(x)
   * ----------------------------------------------------------------
   */
  // z = pow(3, 3);
  // z = sqrt(12);
  // z = abs(-10);

  /*
   * ----------------------------------------------------------------
   * Rounding functions
   * ----------------------------------------------------------------
   * round() -> nearest whole number
   * ceil()  -> always rounds up
   * floor() -> always rounds down
   * ----------------------------------------------------------------
   */
  // z = round(x);
  // z = ceil(x);
  // z = floor(x);
  // z = round(-4.1);

  // cout << "The value of z is : " << z << '\n';

  /*
   * ----------------------------------------------------------------
   * Infinite loop example (careful — runs forever)
   * ----------------------------------------------------------------
   */
  // while (true) {
  //   cout << "True\n";
  // }

  /*
   * ----------------------------------------------------------------
   * For loop with pow() as the condition
   * (note: the condition itself is unusual/tricky here)
   * ----------------------------------------------------------------
   */
  // for (long int i = 4; i <= pow(i, 1000); i++) {
  //   cout << i << '\n';
  // }

  return 0;
}
