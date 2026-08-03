#include <ctime>
#include <iostream>
using std::cin;
using std::cout;

int main() {

  srandom(time(0));
  const int num = rand() % 100 + 1;
  int guess;
  int tries;
  cout << "********* Number Guessing game **********\n";
  do {
    cout << "Guess the number :";
    cin >> guess;
    tries++;

    if (guess > num) {
      cout << "Too high\n";

    } else if (guess < num) {
      cout << "Too low\n";

    } else {
      cout << "Congratulations you guessed the right number which is : " << num
           << '\n';
    }
  } while (guess != num);
  cout << "Number of tries : " << tries << '\n';

  return 0;
}
