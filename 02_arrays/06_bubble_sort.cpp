/*
 * CONCEPT: Bubble Sort
 * Bubble sort sorts in place by repeatedly walking the array and swapping
 * adjacent elements that are out of order, so the largest remaining value
 * "bubbles" to the end on every pass. Its nested loops make it an easy
 * first sorting algorithm to read and trace, even though faster library
 * options exist. Analogy: taller neighbours keep swapping until the whole
 * line stands ordered by height.
 * Builds on: swapping from 01_basics/03_variable_swap.cpp and function
 * basics from 01_basics/12_function_basics.cpp.
 */

#include <iostream>
// #include <algorithm>   // <<< also uncomment for STEP 3
// using std::sort;       // <<< also uncomment for STEP 3

using std::cout;

/*
 * ----------------------------------------------------------------
 * Bubble Sort implementation
 * ----------------------------------------------------------------
 */
void sort(int arr[], int size);

int main() {
  // ----------------------------------------------------
  // STEP 1: Print the array before sorting (active — compile & run as-is)
  // ----------------------------------------------------
  int arr[] = {6, 5, 4, 3, 7, 2, 8, 11, 14, 13, 12, 15, 16, 1, 9, 0};

  // Snapshot the scrambled order so it can be compared with the result.
  for (int elem : arr) {
    cout << elem << '\n';
  }

  // ----------------------------------------------------
  // STEP 2: Sort with bubble sort and print again
  // >>> UNCOMMENT the block below, then compile and run.
  // >>> Observe: the SAME sixteen numbers come back in ascending order —
  // >>> sort() rearranges the original array in place, nothing is copied.
  // ----------------------------------------------------
  /*
  int size = sizeof(arr) / sizeof(arr[0]);

  sort(arr, size);

  for (int elem : arr) {
    cout << elem << '\n';
  }
  */

  // ----------------------------------------------------
  // STEP 3: std::sort alternative
  // >>> UNCOMMENT the block below AND the #include <algorithm> /
  // >>> using std::sort; lines near the top, then compile and run.
  // >>> Observe: the library version produces the same ordering — pass
  // >>> it the start of the array and one-past-the-end instead of a size.
  // ----------------------------------------------------
  /*
  sort(arr, arr + size); // std::sort alternative, using <algorithm>

  for (int elem : arr) {
    cout << elem << '\n';
  }
  */

  return 0;
}

void sort(int arr[], int size) {
  for (int i = 0; i < size - 1; i++) {
    for (int j = 0; j < size - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}
