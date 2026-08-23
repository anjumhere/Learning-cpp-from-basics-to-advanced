/*
 * CONCEPT: Pass-by-Reference via Pointers
 * Passing &variable gives a function the variable's address, so the
 * function can modify the caller's ORIGINAL data through *ptr.
 * Use it when a function must change its argument (or avoid copying
 * large data). C++ references — the next file — are the modern
 * syntax for the same idea.
 * Analogy: handing someone your house KEY so they can repaint the
 * real house, instead of mailing them a photo of it.
 */
#include <iostream>

using std::cin;
using std::cout;

/*
 * ----------------------------------------------------------------
 * change
 * ----------------------------------------------------------------
 * Takes a pointer to an int and modifies the original variable
 * through that pointer — this is pass-by-reference using pointers.
 * ----------------------------------------------------------------
 */
void change(int *ptr);

int main() {

  // ----------------------------------------------------
  // STEP 1: Send the address, modify the original (active — compile & run as-is)
  // ----------------------------------------------------
  int a = 10;

  change(&a);
  cout << "The changed value of a is = " << a << '\n';

  // ----------------------------------------------------
  // STEP 2: The same function, a different variable
  // >>> UNCOMMENT the block below, then compile and run.
  // >>> Observe: change() works on ANY int you hand it an address of — b
  //     changes while a keeps whatever value it had.
  // ----------------------------------------------------
  /*
  int b = 20;

  change(&b);
  cout << "The changed value of b is = " << b << '\n';
  */

  // ----------------------------------------------------
  // STEP 3: What NOT to pass
  // >>> UNCOMMENT the block below, then compile and run.
  // >>> Observe: the COMPILER refuses — change expects an address (int *)
  //     and you passed a plain int. That is why we write &a at the call
  //     site. Re-comment afterwards.
  // ----------------------------------------------------
  /*
  change(a); // ERROR: change expects an address (int *), not a plain int
  */

  return 0;
}

void change(int *ptr) {
  cout << "Enter the new value of a (which is passed by reference :";
  cin >> *ptr;
}
