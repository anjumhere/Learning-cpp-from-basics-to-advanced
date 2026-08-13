#include <cctype>
#include <iostream>

using std::cin;
using std::cout;

int main() {

  /*
  int *ptr = nullptr;

  ptr = new int;
  *ptr = 23;

  cout << "The address of ptr is :" << ptr << '\n';
  cout << "The value of ptr is :" << *ptr << '\n';

  delete ptr;
  ptr = nullptr;
*/

  // creating an array dynamically

  char *pointer = nullptr;
  int size;
  cout << "Enter the size of items :";
  cin >> size;
  pointer = new char[size];

  for (int i = 0; i < size; i++) {
    cout << "What is the item at # :" << i + 1 << " ";
    cin >> pointer[i];
    pointer[i] = toupper(pointer[i]);
  }
  for (int i = 0; i < size; i++) {
    cout << "The item at idx : " << i << " is " << pointer[i] << '\n';
  }
  return 0;
}
