#include <iostream>

using std::cout;

/*
 * ----------------------------------------------------------------
 * In this file we use comparison operators on pointers.
 * ----------------------------------------------------------------
 */
int main() {

  /*
   * ----------------------------------------------------------------
   * Subtract
   * ----------------------------------------------------------------
   * Subtracting pointers gives us the result in elements, not
   * bytes. Say pointer1 has address 100 and pointer2 has address
   * 108 — when we subtract pointer2 - pointer1, 108 - 100 = 8 bytes,
   * which is the size of 2 ints, so we get 2 as the result.
   * ----------------------------------------------------------------
   */
  int *ptr1;            // 100
  int *ptr2 = ptr1 + 2; // 100 + 2 (2 ints = 8 bytes) = 108
                        // so 108 - 100 = 8, and 8 / 4 = 2

  cout << ptr2 - ptr1 << '\n';

  /*
   * ----------------------------------------------------------------
   * Compare (<, <=, >, >=, ==, !=)
   * ----------------------------------------------------------------
   * We can also compare pointers.
   * ----------------------------------------------------------------
   */
  int *p1;
  int *p2 = p1;

  cout << &p1 << '\n';
  cout << &p2 << '\n';
  cout << (p1 == p2);

  cout << '\n';
  cout << "------------------------------------------Exercise------------------"
          "-----------"
       << '\n';
  cout << '\n';

  // We can play around with all the other relational operators on pointers.

  /*
   * ----------------------------------------------------------------
   * Exercise with pointer arithmetic
   * ----------------------------------------------------------------
   */
  int arr[] = {10, 20, 30, 40};
  int *ptr = arr;

  cout << *(ptr + 1) << '\n'; // 20
  cout << *(ptr + 3) << '\n'; // 40
  ptr++;
  cout << *ptr << '\n'; // 20

  return 0;
}
