/*
 * CONCEPT: Arrays as Pointers
 * In C++, an array is a type of pointer which points to the value
 * at its first index — meaning it holds the address of the value
 * stored at index 0. That is why the array name acts like a pointer
 * in expressions, yet can never be reassigned to point elsewhere.
 * Analogy: the array name is carved into the building's foundation —
 * you can read the address off it, but you can't move it to a new lot.
 */
#include <iostream>

using std::cout;

int main() {

  // ----------------------------------------------------
  // STEP 1: The array name IS the address of index 0 (active — compile & run as-is)
  // ----------------------------------------------------
  int arr[] = {1, 2, 3, 4, 5};

  cout << (&arr[0]) << '\n'; // address of the value at index 0
  cout << arr << '\n'; // since arr is a pointer, this prints the same address

  /*
   * Both lines above print the same address, because an array
   * holds the address of the value at its 0th index.
   */

  // ----------------------------------------------------
  // STEP 2: Try to reassign the array name
  // >>> UNCOMMENT the block below, then compile and run.
  // >>> Observe: the COMPILER refuses (assignment to an array is illegal) —
  //     an array name is a constant pointer. Re-comment afterwards.
  // ----------------------------------------------------
  /*
  int a = 50;

  arr = &a; // Illegal — an array name is a constant pointer
            //  and cannot be reassigned.
  */

  // ----------------------------------------------------
  // STEP 3: Read and write the array through its pointer
  // >>> UNCOMMENT the block below, then compile and run.
  // >>> Observe: dereferencing arr reaches the array's own first slot —
  //     arr[0] reflects the change made through the pointer.
  // ----------------------------------------------------
  /*
  *arr = 100; // write through the pointer — changes the array's first slot
  cout << arr[0] << '\n'; // the array itself sees the new value: 100
  */

  return 0;
}
