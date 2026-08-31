/*
 * CONCEPT: Applied mini-project — Luhn Algorithm (card validation)
 * Real payment systems validate card numbers with a checksum: digits
 * at even positions from the right are doubled (values over 9 lose 9),
 * everything is summed, and the number is valid only if the total is
 * divisible by 10. Exercises: array traversal, positional math with
 * (size - i) % 2, algorithm translation from plain-English steps.
 * The full step-by-step walkthrough of the algorithm is in the big
 * comment block below.
 */

/*
 * ================================================================
 *              Credit Card Number Validator — Luhn Algorithm
 * ================================================================
 * Step 1: Start from the right side of the number, and go left.
 *         The very last digit (rightmost) is special — it's called
 *         the check digit. You leave it alone, don't touch it.
 *
 * Step 2: Skip one, double one — going from right to left.
 *         Starting from the digit just before the check digit,
 *         double every second digit. So you double the 2nd digit
 *         from the right, skip the 3rd, double the 4th, skip the
 *         5th, and so on.
 *
 * Step 3: If doubling makes a number bigger than 9, subtract 9
 *         from it. For example, if a digit is 8, doubling gives 16.
 *         Since that's more than 9, subtract 9: 16 - 9 = 7. Use 7
 *         instead of 16. (This is the same as just adding the two
 *         digits of the doubled number together — 1 + 6 = 7. Either
 *         way works.)
 *
 * Step 4: Add up every digit — the doubled ones (after fixing) and
 *         the untouched ones. Just one big sum of all the digits.
 *
 * Step 5: Check if that total sum can be divided evenly by 10.
 *         If yes (no remainder) -> the number is valid.
 *         If no -> the number is invalid, something's wrong with it
 *         (typo, fake number, etc).
 * ================================================================
 *
 * Worked example: 4 5 3 2 0 1 5 1 1 2 8 3 0 3 6 6
 *
 *   4  8   ->  8
 *   5      ->  5
 *   3  6   ->  6
 *   2      ->  2
 *   0  0   ->  0
 *   1      ->  1
 *   5  10  ->  1  (10 -> 1+0)
 *   1      ->  1
 *   1  2   ->  2
 *   2      ->  2
 *   8  16  ->  7  (16 -> 1+6)
 *   3      ->  3
 *   0  0   ->  0
 *   3      ->  3
 *   6  12  ->  3  (12 -> 1+2)
 *   6      ->  6
 *
 *   Doubled digits:   8 6 0 1 2 7 0 3 = 27
 *   Untouched digits: 5 2 1 1 2 3 3 6 = 23
 *   Total: 27 + 23 = 50
 *   50 / 10 = 5, remainder 0 -> valid
 * ================================================================
 */

/*
 * ----------------------------------------------------------------
 * Early exploration version — used to print every digit at an even
 * position from the right, before the full algorithm was written.
 * ----------------------------------------------------------------
 *
 * #include <iostream>
 * using std::cin;
 * using std::cout;
 *
 * int main() {
 *   int cardNumber[] = {4, 5, 3, 2, 0, 1, 5, 1, 1, 2, 8, 3, 0, 3, 6, 6};
 *   int size = sizeof(cardNumber) / sizeof(cardNumber[0]);
 *
 *   for (int i = 0; i < size; i += 2) {
 *     int digit = cardNumber[i];
 *     cout << digit << '\n';
 *   }
 *
 *   return 0;
 * }
 */

#include <iostream>

using std::cin;
using std::cout;

int main() {

  int cardNumber[] = {4, 5, 3, 2, 0, 1, 5, 1, 1, 2, 8, 3, 0, 3, 6, 6};
  int size = sizeof(cardNumber) / sizeof(cardNumber[0]);
  int sum = 0;

  for (int i = 0; i < size; i++) {
    int digit = cardNumber[i];

    if ((size - i) % 2 == 0) { // position from the right is even -> double it
      digit *= 2;
      if (digit > 9) {
        digit -= 9;
      }
    }

    sum += digit;

    // ----------------------------------------------------
    // CHALLENGE A: Trace the algorithm while it runs
    // >>> UNCOMMENT the line below, compile and run.
    // >>> Observe: each position's original digit, what it counts
    // >>> as after optional doubling/adjustment, and the running
    // >>> total — matching the worked example above line by line.
    // ----------------------------------------------------
    /*
    cout << "pos " << size - i << ": digit " << cardNumber[i]
         << " counts as " << digit << ", sum so far " << sum << '\n';
    */
  }

  cout << "Sum: " << sum << '\n';

  if (sum % 10 == 0) {
    cout << "Valid card number\n";
  } else {
    cout << "Invalid card number\n";
  }

  // ----------------------------------------------------
  // CHALLENGE B: Test more numbers
  // >>> Swap in {4, 5, 3, 2, 0, 1, 5, 1, 1, 2, 8, 3, 0, 3, 6, 7}
  // >>> (last digit changed) and predict the verdict BEFORE running.
  // ----------------------------------------------------
  // ----------------------------------------------------
  // CHALLENGE C: Read the card number from the user as a string and
  // convert each character to a digit (c - '0') instead of using a
  // hard-coded array.
  // ----------------------------------------------------

  return 0;
}
