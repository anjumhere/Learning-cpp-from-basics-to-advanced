/*
 * CONCEPT: Linear Search
 * Linear search decides whether a value is in an array by comparing it
 * with each element from left to right; it returns the index of the first
 * match, or -1 if the value never appears. It needs no sorting or extra
 * structure, so it works on any array — the tradeoff is that it may have
 * to check every element. Analogy: finding a friend by scanning a queue,
 * person by person.
 * Builds on: function basics from 01_basics/12_function_basics.cpp.
 */

#include <iostream>

using std::cin;
using std::cout;

/*
 * ----------------------------------------------------------------
 * startSearch
 * ----------------------------------------------------------------
 * Linear search — checks each element in order and returns the
 * index of the first match, or -1 if the item isn't found.
 * ----------------------------------------------------------------
 */
int startSearch(int nums[], int arraySize, int searchItem);

int main() {
  // ----------------------------------------------------
  // STEP 1: Set up the data to search (active — compile & run as-is)
  // ----------------------------------------------------
  int nums[] = {44, 22, 5, 3, 6666, 7, 5, 343, 2};
  int arraySize = sizeof(nums) / sizeof(nums[0]);

  // See the whole haystack before searching it.
  for (int i = 0; i < arraySize; i++) {
    cout << "nums[" << i << "] = " << nums[i] << '\n';
  }

  // ----------------------------------------------------
  // STEP 2: Ask the user what to search for
  // >>> UNCOMMENT the block below, then compile and run.
  // >>> Observe: the program now waits for input — try a number that is
  // >>> in the list (e.g. 6666) and one that is not (e.g. 999).
  // ----------------------------------------------------
  /*
  int searchItem;

  cout << "Enter the number you want to search : ";
  cin >> searchItem;
  */

  // ----------------------------------------------------
  // STEP 3: Search and report the result
  // >>> UNCOMMENT the block below, then compile and run.
  // >>> Observe: startSearch() returns an index for hits and -1 for
  // >>> misses, so a single if/else covers both outcomes.
  // ----------------------------------------------------
  /*
  int index = startSearch(nums, arraySize, searchItem);

  if (index != -1) {
    cout << "The number :" << searchItem << " is at index :" << index << '\n';
  } else {
    cout << "Number not found.\n";
  }
  */

  return 0;
}

int startSearch(int nums[], int arraySize, int searchItem) {
  for (int i = 0; i < arraySize; i++) {
    if (nums[i] == searchItem) {
      return i;
    }
  }
  return -1;
}
