#include <iostream>

using std::cout;

/*
 * ----------------------------------------------------------------
 * Pointers
 * ----------------------------------------------------------------
 * A pointer is a variable that stores the memory address of
 * another variable.
 *
 * We use the address-of operator (&) to point to the object whose
 * address we want to store. We use the dereference operator (*) to
 * access the value the pointer is pointing to.
 * ----------------------------------------------------------------
 */
void get(int *myp);

int main() {

  int value = 55;
  int *myp = &value; // & = address-of operator, * = dereference operator

  cout << "The memory address of value is : " << myp << '\n';
  cout << "The value of the variable is : " << *myp << '\n';

  /*
   * ----------------------------------------------------------------
   * Passing a pointer to a function
   * ----------------------------------------------------------------
   */
  get(myp);

  /*
   * ----------------------------------------------------------------
   * Making a pointer array — storing an array in a pointer variable
   * ----------------------------------------------------------------
   */
  int arr[] = {
      1, 2, 3, 34, 5, 6, 3, 2, 1,
  };
  int *myarr = arr;

  cout << "The address of the array is :" << myarr << '\n';
  cout << "The value of the first item in the array is :" << *myarr << '\n';

  return 0;
}

void get(int *myp) {
  cout << "The memory address of value is : " << myp << '\n';
  cout << "The memory value of value is : " << *myp << '\n';
}
