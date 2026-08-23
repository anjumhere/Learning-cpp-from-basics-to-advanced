/*
 * CONCEPT: Math Functions from <cmath>
 * <cmath> provides ready-made math helpers: std::max/std::min return the
 * larger/smaller of two values, pow() raises to a power, sqrt() takes the
 * square root, abs() gives the absolute value, and round()/ceil()/floor()
 * round numbers. Use them instead of hand-writing common formulas.
 * The file ends with a peek ahead at while/for LOOPS, which repeat code.
 */

#include <cmath>
#include <iostream>

using std::cout;
using std::string;

int main() {

  // ----------------------------------------------------
  // STEP 1: Declare sample numbers and try min / max (active — compile & run as-is)
  // ----------------------------------------------------
  cout << "basics" << '\n';

  // x, y are sample doubles; z holds the result of whichever math
  // operation runs.
  double x = 3.7;
  double y = 11;
  double z;

  // std::max and std::min return the larger/smaller of two values.
  z = std::max(x, y);
  // z = std::min(x, y);   // <- comment out max above and try min instead

  cout << "The value of z is : " << z << '\n';

  // ----------------------------------------------------
  // STEP 2: Power, root and absolute value
  // >>> UNCOMMENT the block below (keep Step 1), then compile and run.
  // >>> Observe: each helper overwrites z, so only the LAST active assignment shows; comment lines in/out to test pow(3,3)=27, sqrt(12)~3.464 and abs(-10)=10 one at a time.
  // ----------------------------------------------------
  /*
  z = pow(3, 3);
  // z = sqrt(12);
  // z = abs(-10);

  cout << "The value of z is : " << z << '\n';
  */

  // ----------------------------------------------------
  // STEP 3: Rounding functions
  // >>> UNCOMMENT the block below (keep Steps 1-2), then compile and run.
  // >>> Observe: round() goes to the nearest whole number, ceil() always rounds up, floor() always rounds down — compare 3.7 with -4.1.
  // ----------------------------------------------------
  /*
  z = round(x);
  // z = ceil(x);
  // z = floor(x);
  // z = round(-4.1);

  cout << "The value of z is : " << z << '\n';
  */

  // ----------------------------------------------------
  // STEP 4: Infinite loop example (careful — runs forever)
  // >>> UNCOMMENT the block below (keep Steps 1-3), then compile and run.
  // >>> Observe: "True" floods the terminal because the condition true never becomes false — stop the program with Ctrl+C. Loops need an exit condition!
  // ----------------------------------------------------
  /*
  while (true) {
    cout << "True\n";
  }
  */

  // ----------------------------------------------------
  // STEP 5: For loop with pow() as the condition
  // >>> UNCOMMENT the block below (keep Steps 1-4), then compile and run.
  // >>> Observe: the condition itself is unusual/tricky here — pow(i, 1000) explodes far faster than i grows, so it stays effectively true forever (stop with Ctrl+C).
  // ----------------------------------------------------
  /*
  for (long int i = 4; i <= pow(i, 1000); i++) {
    cout << i << '\n';
  }
  */

  return 0;
}
