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

  int nums[] = {44, 22, 5, 3, 6666, 7, 5, 343, 2};
  int arraySize = sizeof(nums) / sizeof(nums[0]);
  int searchItem;

  cout << "Enter the number you want to search : ";
  cin >> searchItem;

  int index = startSearch(nums, arraySize, searchItem);

  if (index != -1) {
    cout << "The number :" << searchItem << " is at index :" << index << '\n';
  } else {
    cout << "Number not found.\n";
  }

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
