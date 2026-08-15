#include <iostream>

using std::cout;

int main() {

  /*
   * ----------------------------------------------------------------
   * Increment
   * ----------------------------------------------------------------
   */
  int a = 10;
  int *p = &a;

  cout << "The address of a is " << p << '\n';
  p++; // increases the address by 4 bytes in memory
       // (same for p += 2, which adds 8 bytes to the address)
  cout << "The incremented address of a is " << p << '\n'; // increased 4 bytes

  /*
   * ----------------------------------------------------------------
   * Decrement
   * ----------------------------------------------------------------
   */
  int b = 10;
  int *pb = &b;

  cout << "The address of b is " << pb << '\n';
  pb--; // decreases the address by 4 bytes
        // (same for pb -= 2, which subtracts 8 bytes)
  cout << "The decremented address of b is " << pb << '\n'; // decreased 4 bytes

  /*
   * ----------------------------------------------------------------
   * Pointer arithmetic with arrays
   * ----------------------------------------------------------------
   * When we increment an array pointer, it moves 4 bytes — the
   * exact memory spacing between elements in the array. By
   * incrementing the address, we can access the array's values
   * sequentially.
   * ----------------------------------------------------------------
   */
  int arr[] = {1, 2, 3, 4};

  cout << *arr << '\n'; // prints the first value of the array, which is 1
  cout << arr << '\n';
  cout << *arr + 1 << '\n'; // prints the second value of the array, which is 2
  cout << arr + 1 << '\n';
  cout << *arr + 2 << '\n'; // prints the third value of the array, which is 3
  cout << arr + 2 << '\n';
  cout << *arr + 3 << '\n'; // prints the fourth value of the array, which is 4
  cout << arr + 3 << '\n';

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
