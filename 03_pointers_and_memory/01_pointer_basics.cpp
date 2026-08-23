/*
 * CONCEPT: Pointer Basics
 * A pointer is a variable that stores the memory address of
 * another variable.
 *
 * We use the address-of operator (&) to point to the object whose
 * address we want to store. We use the dereference operator (*) to
 * access the value the pointer is pointing to. Pointers let functions
 * reach and modify the caller's data, and they are the bridge to
 * arrays and dynamic memory.
 * Analogy: a house address written on paper — the paper is not the
 * house, but it tells you exactly where to find it.
 */
#include <iostream>

using std::cout;

/*
 * ----------------------------------------------------------------
 * Passing a pointer to a function (used in STEP 2)
 * ----------------------------------------------------------------
 */
void get(int *myp);

int main() {

  // ----------------------------------------------------
  // STEP 1: Declare a pointer and look through it (active — compile & run as-is)
  // ----------------------------------------------------
  int value = 55;
  int *myp = &value; // & = address-of operator, * = dereference operator

  cout << "The memory address of value is : " << myp << '\n';
  cout << "The value of the variable is : " << *myp << '\n';

  // ----------------------------------------------------
  // STEP 2: Pass the pointer to a function
  // >>> UNCOMMENT the block below, then compile and run.
  // >>> Observe: the function prints the very same address and reads the
  //     value through it — one variable, reachable from two places.
  // ----------------------------------------------------
  /*
  get(myp);
  */

  // ----------------------------------------------------
  // STEP 3: Store an array's address in a pointer
  // >>> UNCOMMENT the block below, then compile and run.
  // >>> Observe: the pointer holds the address of the array's first element,
  //     and dereferencing it (*myarr) gives that first item.
  // ----------------------------------------------------
  /*
  // Making a pointer array — storing an array in a pointer variable
  int arr[] = {
      1, 2, 3, 34, 5, 6, 3, 2, 1,
  };
  int *myarr = arr;

  cout << "The address of the array is :" << myarr << '\n';
  cout << "The value of the first item in the array is :" << *myarr << '\n';
  */

  return 0;
}

void get(int *myp) {
  cout << "The memory address of value is : " << myp << '\n';
  cout << "The memory value of value is : " << *myp << '\n';
}
