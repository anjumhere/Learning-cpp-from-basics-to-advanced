/*
 * CONCEPT: Array Iteration
 * An array stores a fixed-size sequence of values of one type, and
 * iteration means visiting every element in order — to print, inspect,
 * or transform the data. Use a classic for loop when you need the index,
 * and a range-based for loop when you only care about the values.
 * Analogy: walking down a street and checking every mailbox, one by one.
 */

#include <iostream>

using std::cout;
using std::string;

int main() {
  // ----------------------------------------------------
  // STEP 1: Print an array with a classic for loop (active — compile & run as-is)
  // ----------------------------------------------------
  int myArray[] = {1, 2, 3, 4, 5};

  /*
   * ----------------------------------------------------------------
   * Classic for loop iteration
   * ----------------------------------------------------------------
   */
  for (int i = 0; i <= 4; i++) {
    cout << "The numbers in the array are : " << myArray[i] << '\n';
  }

  // ----------------------------------------------------
  // STEP 2: Range-based for loop
  // >>> UNCOMMENT the block below, then compile and run.
  // >>> Observe: identical output with no index variable and no boundary
  // >>> condition — the loop visits every element automatically.
  // ----------------------------------------------------
  /*
  // ----------------------------------------------------------------
  // Range-based for loop
  // ----------------------------------------------------------------
  // A good enhancement over the classic for loop — no need to write
  // a condition like i < 5 or declare a temporary index variable.
  // It automatically iterates over every element.
  // ----------------------------------------------------------------
  cout << "Using for range loop\n";
  for (int i : myArray) {
    cout << "The numbers in the array are : " << i << '\n';
  }
  */

  // ----------------------------------------------------
  // STEP 3: Loop through a C-string with a manual index
  // >>> UNCOMMENT the block below, then compile and run.
  // >>> Observe: the loop stops by itself because the terminating 0
  // >>> marks the end of the character array.
  // ----------------------------------------------------
  /*
  char myName[] = {'a', 'd', 'n', 'a', 'n', 0};

  // ----------------------------------------------------------------
  // Looping through a C-string with a manual index
  // ----------------------------------------------------------------
  // myName[i] != 0 is true until the loop reaches index of value 0,
  // which is always the terminating character in a string — so the
  // loop stops there automatically.
  //
  // This is equivalent, and also common in practice, since 0 is
  // treated as false and every non-zero value as true:
  //
  //   for (int i = 0; myName[i]; i++) { ... }
  // ----------------------------------------------------------------
  for (int i = 0; myName[i] != 0; i++) {
    cout << "The character is :" << myName[i] << '\n';
  }
  */

  // ----------------------------------------------------
  // STEP 4: Loop through a character pointer (PREVIEW)
  // >>> UNCOMMENT the block below, then compile and run.
  // >>> PREVIEW: pointer-based traversal — full coverage in
  // >>> 03_pointers_and_memory. It is fine to leave this commented out.
  // >>> Observe: cp++ advances to the next memory address and *cp reads
  // >>> the character stored there — same output as the index loop.
  // ----------------------------------------------------
  /*
  char my_name[] = "Adnan";

  // ----------------------------------------------------------------
  // Looping through a character pointer
  // ----------------------------------------------------------------
  // `cp` is initialized to point at the first character of my_name.
  // The condition dereferences `cp` and checks against 0 — the same
  // logic as above, just via a pointer instead of an index.
  //
  // cp++ moves the pointer to the next memory address; C++ pointers
  // know how to advance correctly across an array of characters.
  //
  // *cp in the cout statement dereferences the pointer to access
  // the character stored at that specific memory location.
  // ----------------------------------------------------------------
  cout << "Looping through character pointer\n\n";
  for (char *cp = my_name; *cp != 0; cp++) {
    cout << "The character is :" << *cp << '\n';
  }
  */

  // ----------------------------------------------------
  // STEP 5: Range-based for loop over a character array
  // >>> UNCOMMENT the block below, then compile and run.
  // >>> Observe: without the break, a blank space would print at the
  // >>> end for the terminating 0 — char values don't display it
  // >>> visibly, so an explicit check is used to break before printing.
  // ----------------------------------------------------
  /*
  // ----------------------------------------------------------------
  // Range-based for loop over a character array
  // ----------------------------------------------------------------
  for (char i : myName) {
    if (i == 0)
      break;
    cout << "The character is :" << i << '\n';
  }
  */

  return 0;
}
