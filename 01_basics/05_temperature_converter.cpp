/*
 * CONCEPT: Branching with if / else-if / else
 * Branching lets a program choose between paths based on a condition,
 * e.g. which unit letter the user typed. cin reads typed input into
 * variables (a char for the unit, a double for the temperature) and the
 * final else catches invalid choices. Use it whenever behavior depends
 * on data known only at runtime.
 * Analogy: a railway switch sends a train onto one of several tracks.
 */

#include <iostream>

using std::cin;
using std::cout;

int main() {

  // ----------------------------------------------------
  // STEP 1: Ask which conversion the user wants (active — compile & run as-is)
  // ----------------------------------------------------
  char unit;

  cout << "************Temperature Convertor ****************\n";
  cout << "F = Fahrenheit" << '\n';
  cout << "C = Celsius" << '\n';
  cout << "Choose the unit (C/F) :";
  cin >> unit;

  // NOTE: Steps 2-4 build ONE connected if / else-if / else chain.
  // Uncomment them top-to-bottom so the chain stays syntactically valid.

  // ----------------------------------------------------
  // STEP 2: Celsius branch — convert Fahrenheit to Celsius
  // >>> UNCOMMENT the block below (keep Step 1), then compile and run.
  // >>> Observe: choosing C applies the formula (F - 32) / 1.8; this is where the chain starts, and `temperature` is declared here for all branches.
  // ----------------------------------------------------
  /*
  double temperature;

  if (unit == 'C' || unit == 'c') {
    cout << "Enter the temperature in Fahrenheit :";
    cin >> temperature;
    temperature = (temperature - 32) / 1.8;
    cout << "Temperature in Celsius is : " << temperature << "C" << '\n';
  }
  */

  // ----------------------------------------------------
  // STEP 3: Fahrenheit branch — convert Celsius to Fahrenheit
  // >>> UNCOMMENT the block below (Steps 1-2 must stay uncommented), then compile and run.
  // >>> Observe: an else-if only runs when every earlier branch was skipped; the formula here is (C * 1.8) + 32.
  // ----------------------------------------------------
  /*
  else if (unit == 'F' || unit == 'f') {
    cout << "Enter the temperature in Celsius :";
    cin >> temperature;
    temperature = (temperature * 1.8) + 32;
    cout << "Temperature in Fahrenheit is : " << temperature << "F" << '\n';
  }
  */

  // ----------------------------------------------------
  // STEP 4: Invalid-unit fallback
  // >>> UNCOMMENT the block below (Steps 1-3 must stay uncommented), then compile and run.
  // >>> Observe: typing anything other than C/c/F/f lands in the else — try 'x'.
  // ----------------------------------------------------
  /*
  else {
    cout << "Invalid unit choice\n";
  }
  */

  return 0;
}
