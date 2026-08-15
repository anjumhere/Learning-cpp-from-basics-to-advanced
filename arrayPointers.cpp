#include <iostream>

using std::cout;

/*
 * ----------------------------------------------------------------
 * Arrays as Pointers
 * ----------------------------------------------------------------
 * In C++, an array is a type of pointer which points to the value
 * at its first index — meaning it holds the address of the value
 * stored at index 0.
 * ----------------------------------------------------------------
 */

int main() {
  int arr[] = {1, 2, 3, 4, 5};

  cout << (&arr[0]) << '\n'; // address of the value at index 0
  cout << arr << '\n'; // since arr is a pointer, this prints the same address

  /*
   * Both lines above print the same address, because an array
   * holds the address of the value at its 0th index.
   */

  int a = 50;

  // arr = &a; // Illegal — an array name is a constant pointer
  //  and cannot be reassigned.

  return 0;
}
