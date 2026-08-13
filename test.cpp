#include <iostream>

using std::cout;

int main() {

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
    ;
  }
  if (sum % 50 == 0) {
    cout << "Your credit card is valid\n";

  } else {
    cout << "Your credit card is not valid, Please check the number again\n";
  }
  return 0;
};
