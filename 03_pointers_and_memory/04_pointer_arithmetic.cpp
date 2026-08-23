/*
 * CONCEPT: Pointer Arithmetic
 * You can increment, decrement, and add to or subtract from
 * pointers. The compiler scales each step by the size of the
 * pointed-to type — for int that is usually 4 bytes — so p++ moves
 * one ELEMENT, not one byte. This is what lets a plain pointer walk
 * through an array element by element.
 * Analogy: stepping across a river stone by stone — each hop lands
 * on the next stone, no matter how far apart the stones are.
 */
#include <iostream>

using std::cout;

int main() {

  // ----------------------------------------------------
  // STEP 1: Increment — moves the address forward (active — compile & run as-is)
  // ----------------------------------------------------
  int a = 10;
  int *p = &a;

  cout << "The address of a is " << p << '\n';
  p++; // increases the address by 4 bytes in memory
       // (same for p += 2, which adds 8 bytes to the address)
  cout << "The incremented address of a is " << p << '\n'; // increased 4 bytes

  // ----------------------------------------------------
  // STEP 2: Decrement — moves the address backward
  // >>> UNCOMMENT the block below, then compile and run.
  // >>> Observe: the printed address drops by exactly 4 bytes — pointer
  //     steps are measured in elements, not raw bytes.
  // ----------------------------------------------------
  /*
  int b = 10;
  int *pb = &b;

  cout << "The address of b is " << pb << '\n';
  pb--; // decreases the address by 4 bytes
        // (same for pb -= 2, which subtracts 8 bytes)
  cout << "The decremented address of b is " << pb << '\n'; // decreased 4 bytes
  */

  // ----------------------------------------------------
  // STEP 3: Pointer arithmetic with arrays
  // >>> UNCOMMENT the block below, then compile and run.
  // >>> Observe: values print as 1, 2, 3, 4 while the addresses advance by
  //     one int (4 bytes) per step — adding to arr walks through the array.
  // ----------------------------------------------------
  /*
  int arr[] = {1, 2, 3, 4};

  cout << *arr << '\n'; // prints the first value of the array, which is 1
  cout << arr << '\n';
  cout << *(arr + 1) << '\n'; // prints the second value of the array, which is 2
  cout << arr + 1 << '\n';
  cout << *(arr + 2) << '\n'; // prints the third value of the array, which is 3
  cout << arr + 2 << '\n';
  cout << *(arr + 3) << '\n'; // prints the fourth value of the array, which is 4
  cout << arr + 3 << '\n';
  */

  /*
   * ----------------------------------------------------------------
   * Why the printed addresses jump from 8 to c
   * ----------------------------------------------------------------
   * In hexadecimal, digits count like this:
   *   1 2 3 4 5 6 7 8 9 -> after 9, counting continues a b c d e...
   *
   * On my system, the addresses incremented like this:
   *   1   0x7ffe4e2d96a0
   *   2   0x7ffe4e2d96a4
   *   3   0x7ffe4e2d96a8
   *   4   0x7ffe4e2d96ac
   *
   * Because we increased by 1 int (4 bytes) each time, the address
   * went 0 -> 4 -> 8 -> c. It jumps from 8 to c because:
   *   9 -> 1
   *   a -> 2
   *   b -> 3
   *   c -> 4  (this is the 4th jump — that's why it lands on c)
   * ----------------------------------------------------------------
   */

  return 0;
}
