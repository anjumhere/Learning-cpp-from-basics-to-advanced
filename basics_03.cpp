#include <ctime>
#include <iostream>

using std::cin;
using std::cout;

/*
 * ----------------------------------------------------------------
 * Random Event Generator (Random Prize Generator)
 * ----------------------------------------------------------------
 */

int main() {
  /*
   * Basic random number generator (reference example)
   */
  // srand(time(NULL));
  // int num = rand() % 6 + 1;
  // cout << num << '\n';

  srand(time(0));
  int randomNum = rand() % 5 + 1;

  switch (randomNum) {
  case 1:
    cout << "You have won a prize of $100!\n";
    break;
  case 2:
    cout << "You have won a prize of $50!\n";
    break;
  case 3:
    cout << "You have won a prize of $25!\n";
    break;
  case 4:
    cout << "You have won a prize of $10!\n";
    break;
  case 5:
    cout << "You have won a prize of $5!\n";
    break;
  }

  return 0;
}
