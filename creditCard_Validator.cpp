/*
// Creating credit card number validator using Luhn Algorithm
#include <iostream>

using std::cin;
using std::cout;
using std::string;

Step 1: Start from the right side of the number, and go left.
The very last digit (rightmost) is special — it's called the check digit. You
leave it alone, don't touch it.

Step 2: Skip one, double one — going from right to left.
Starting from the digit just before the check digit, double every second digit.
So you double the 2nd digit from the right, skip the 3rd, double the 4th, skip
the 5th, and so on.

Step 3: If doubling makes a number bigger than 9, subtract 9 from it.
For example, if a digit is 8, doubling gives 16. Since that's more than 9,
subtract 9: 16 - 9 = 7. Use 7 instead of 16. (This is the same as just adding
the two digits of the doubled number together — 1 + 6 = 7. Either way works.)

Step 4: Add up every digit — the doubled ones (after fixing) and the untouched
ones. Just one big sum of all the digits.

Step 5: Check if that total sum can be divided evenly by 10.
If yes (no remainder) → the number is valid.
If no → the number is invalid, something's wrong with it (typo, fake number,
etc). 4  5  3  2  0  1  5  1  1  2  8  3  0  3  6  6 4 8 5 ====5 3 6 2 ====2 0 0
1 ====1
5 10 1
1 ====1
1 2
2 ====2
8 16 7
3 ====3
0 0
3 ====3
6 12 3
6====6

8 6 0 1 2 7 0 3 = 27
5 2 1 1 2 3 3 6 = 23
50 / 10 = 5 , remainder 0

int main() {

  int cardNumber[] = {4, 5, 3, 2, 0, 1, 5, 1, 1, 2, 8, 3, 0, 3, 6, 6};

  int size = sizeof(cardNumber) / sizeof(cardNumber[0]);
  for (int i = 0; i < size; i += 2) {
    int digit = cardNumber[i];
    cout << digit << '\n';
  }
  return 0;
}
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
  }

  cout << "Sum: " << sum << '\n';

  if (sum % 10 == 0) {
    cout << "Valid card number\n";
  } else {
    cout << "Invalid card number\n";
  }

  return 0;
}
