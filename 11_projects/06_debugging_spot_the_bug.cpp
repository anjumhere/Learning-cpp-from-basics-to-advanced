/*
 * CONCEPT: Debugging practice — Spot the Bug(s)
 * This is the BROKEN draft of the Luhn validator in
 * 05_credit_card_validator.cpp. It compiles and runs happily — and
 * gives the wrong answer. Your job: predict what's wrong, run it,
 * then find every bug before peeking at the hints at the bottom.
 * Skill being trained: tracing loops by hand and comparing working
 * vs broken code, not writing new code.
 */

#include <iostream>

using std::cout;

int main() {

  // ----------------------------------------------------
  // STEP 1: Run it first — form a hypothesis
  // >>> Compile and run as-is. It claims this card is VALID.
  // >>> Now change ANY digit of cardNumber and run again...
  // >>> still VALID! A validator that accepts everything is broken.
  // >>> Why does the verdict never change? (Hint below.)
  // ----------------------------------------------------
  int cardNumber[] = {4, 8, 0, 8, 0, 1, 5, 1, 1, 2, 8, 3, 0, 3, 6, 6};
  int size = sizeof(cardNumber) / sizeof(cardNumber[0]);
  int sum = 0;

  for (int i = 0; i < size; i++) {
    int digit = cardNumber[i];

    if ((size - 1) % 2 == 0) {
      digit *= 2;
      if (digit > 9) {
        digit -= 9;
      }
      sum += digit;
    };
  }

  if (sum % 50 == 0) {
    cout << "Your credit card is valid\n";
  } else {
    cout << "Your credit card is not valid, Please check the number again\n";
  }

  return 0;
};

// ====================================================
// HINTS — read one at a time, only when truly stuck
// ====================================================
//
// HINT 1: Put `cout << i << " -> " << digit << " sum=" << sum << '\n';`
//         inside the loop. Does `sum` ever grow from 0?
//
// HINT 2: The doubling condition uses `(size - 1) % 2` — that value is
//         CONSTANT every iteration (15 % 2 == 1, always false!). The
//         working version in 05_credit_card_validator.cpp uses
//         `(size - i) % 2`, which depends on the position.
//
// HINT 3: Even with a fixed condition, untouched digits are never
//         added to `sum` — Luhn sums ALL digits, doubled or not.
//
// HINT 4: Validity means divisible by TEN, not fifty.
//
// ====================================================
// SOLUTION — compare after you have found them yourself
// ====================================================
/*
for (int i = 0; i < size; i++) {
  int digit = cardNumber[i];

  if ((size - i) % 2 == 0) {   // FIX 2: position-dependent check
    digit *= 2;
    if (digit > 9) {
      digit -= 9;
    }
  }
  sum += digit;                // FIX 3: every digit counts
}

if (sum % 10 == 0) {           // FIX 4: divide by ten
*/
