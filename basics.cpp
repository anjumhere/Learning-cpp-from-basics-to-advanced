#include <cmath>
#include <iostream>
using std::cin;
using std::cout;
using std::string;

int main() {
  /* ---------------------------------------------------
     Variable declarations
     x, y are sample doubles; z will hold results of
     various math operations below
  --------------------------------------------------- */
  // double x = 3.7;
  // double y = 11;
  // double z;

  /* ---------------------------------------------------
     Min / Max functions
     std::max and std::min return the larger/smaller
     of the two values passed in
  --------------------------------------------------- */
  // z = std::max(x, y);
  // z = std::min(x, y);

  /* ---------------------------------------------------
     Power / Root / Absolute value
     pow(base, exponent), sqrt(x), abs(x)
  --------------------------------------------------- */
  // z = pow(3, 3);
  // z = sqrt(12);
  // z = abs(-10);

  /* ---------------------------------------------------
     Rounding functions
     round() -> nearest whole number
     ceil()  -> always rounds up
     floor() -> always rounds down
  --------------------------------------------------- */
  // z = round(x); // rounds to the nearest whole integer;
  // z = ceil(x);  // ceil rounds up;
  // z = floor(x); // floor roundes down
  // z = round(-4.1);

  /* ---------------------------------------------------
     Output the result of whichever operation above
     was uncommented
  --------------------------------------------------- */
  // cout << "The value of z is : " << z << '\n';

  /* ---------------------------------------------------
     Infinite loop example (careful - runs forever)
  --------------------------------------------------- */
  // while (true) {
  //   cout << "True\n";
  // }

  /* ---------------------------------------------------
     For loop example with pow() as the condition
     (note: condition itself is unusual/tricky here)
  --------------------------------------------------- */
  // for (long int i = 4; i <= pow(i, 1000); i++) {
  //   cout << i << '\n';
  // }

  return 0;
}
