#include <iostream>

using std::cout;
using std::string;

int main() {
  int myArray[] = {1, 2, 3, 4, 5};

  /*
   * ----------------------------------------------------------------
   * Classic for loop iteration
   * ----------------------------------------------------------------
   */
  for (int i = 0; i <= 4; i++) {
    cout << "The numbers in the array are : " << myArray[i] << '\n';
  }

  /*
   * ----------------------------------------------------------------
   * Range-based for loop
   * ----------------------------------------------------------------
   * A good enhancement over the classic for loop — no need to write
   * a condition like i < 5 or declare a temporary index variable.
   * It automatically iterates over every element.
   * ----------------------------------------------------------------
   */
  cout << "Using for range loop\n";
  for (int i : myArray) {
    cout << "The numbers in the array are : " << i << '\n';
  }

  char myName[] = {'a', 'd', 'n', 'a', 'n', 0};
  char my_name[] = "Adnan";

  /*
   * ----------------------------------------------------------------
   * Looping through a C-string with a manual index
   * ----------------------------------------------------------------
   * myName[i] != 0 is true until the loop reaches index of value 0,
   * which is always the terminating character in a string — so the
   * loop stops there automatically.
   *
   * This is equivalent, and also common in practice, since 0 is
   * treated as false and every non-zero value as true:
   *
   *   for (int i = 0; myName[i]; i++) { ... }
   * ----------------------------------------------------------------
   */
  // for (int i = 0; myName[i] != 0; i++) {
  //   cout << "The character is :" << myName[i] << '\n';
  // }

  /*
   * ----------------------------------------------------------------
   * Looping through a character pointer
   * ----------------------------------------------------------------
   * `cp` is initialized to point at the first character of my_name.
   * The condition dereferences `cp` and checks against 0 — the same
   * logic as above, just via a pointer instead of an index.
   *
   * cp++ moves the pointer to the next memory address; C++ pointers
   * know how to advance correctly across an array of characters.
   *
   * *cp in the cout statement dereferences the pointer to access
   * the character stored at that specific memory location.
   * ----------------------------------------------------------------
   */
  // cout << "Looping through character pointer\n\n";
  // for (char *cp = my_name; *cp != 0; cp++) {
  //   cout << "The character is :" << *cp << '\n';
  // }

  /*
   * ----------------------------------------------------------------
   * Range-based for loop over a character array
   * ----------------------------------------------------------------
   * At the end of the iteration, a blank space would print for the
   * terminating 0 — char values don't display it visibly, so an
   * explicit check is used to break before printing it.
   * ----------------------------------------------------------------
   */
  for (char i : myName) {
    if (i == 0)
      break;
    cout << "The character is :" << i << '\n';
  }

  return 0;
}
