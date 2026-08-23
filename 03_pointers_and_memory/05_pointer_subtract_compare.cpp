/*
 * CONCEPT: Subtracting & Comparing Pointers
 * Subtracting two pointers into the same object gives the distance
 * in ELEMENTS, not bytes; relational operators (<, <=, >, >=, ==, !=)
 * tell you which element comes first. These tools power loops and
 * range checks over arrays.
 * Analogy: highway mile markers — marker 108 minus marker 100 tells
 * you traveled 8 miles, not "a pile of asphalt".
 */
#include <iostream>

using std::cout;

int main() {

  // ----------------------------------------------------
  // STEP 1: Subtract pointers — result in elements (active — compile & run as-is)
  // ----------------------------------------------------
  int nums[] = {0, 0, 0, 0};

  int *ptr1 = nums;        // pretend this is address 100
  int *ptr2 = ptr1 + 2;    // 100 + 2 (2 ints = 8 bytes) = 108
                           // so 108 - 100 = 8, and 8 / 4 = 2

  cout << ptr2 - ptr1 << '\n';

  // ----------------------------------------------------
  // STEP 2: Compare pointers with == and friends
  // >>> UNCOMMENT the block below, then compile and run.
  // >>> Observe: &p1 and &p2 differ (they are separate variables), but
  //     (p1 == p2) prints 1 — both hold the same address.
  // ----------------------------------------------------
  /*
  int anchor = 0;
  int *p1 = &anchor;
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
  */

  // ----------------------------------------------------
  // STEP 3: Exercise with pointer arithmetic
  // >>> UNCOMMENT the block below, then compile and run.
  // >>> Observe: *(ptr + offset) picks elements by index, and after ptr++
  //     the same *ptr now shows the NEXT element (20).
  // ----------------------------------------------------
  /*
  int arr[] = {10, 20, 30, 40};
  int *ptr = arr;

  cout << *(ptr + 1) << '\n'; // 20
  cout << *(ptr + 3) << '\n'; // 40
  ptr++;
  cout << *ptr << '\n'; // 20
  */

  return 0;
}
