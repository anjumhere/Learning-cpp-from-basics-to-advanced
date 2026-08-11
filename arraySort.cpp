#include <iostream>

using std::cout;

void sort(int arr[], int size);
int main() {

  int arr[] = {6, 5, 4, 3, 7, 2, 8, 11, 14, 13, 12, 15, 16, 1, 9, 0};
  int size = sizeof(arr) / sizeof(arr[0]);
  sort(arr, size);

  for (int elem : arr) {
    cout << elem << '\n';
  }
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
