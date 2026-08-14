#include <iostream>
using std::cout;

int main() {

  /*
   * In c++ , the array is a type of pointer which points to the value in its
   * first index, meaning it holds the address of the value at its first index
   */
  int arr[] = {1, 2, 3, 4, 5};
  cout << (&arr[0]) << '\n'; // printing the addres of the value at index 0
  cout << arr << '\n';       // since its a pointer , we can print its address

  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  /////By printing both values, you get the same address , because array holds
  /// the adress of the value at 0th index;
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  int a = 50;

  //  arr = &a; // Array is a constant pointer , which can not be modified
  return 0;
}
