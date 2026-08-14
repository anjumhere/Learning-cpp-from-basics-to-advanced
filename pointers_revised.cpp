#include <iostream>

using std::cout;

int main() {

  /*
  int a = 10;
  int *ptr = &a;
  cout << "The value of a is = " << a << '\n';
  cout << "The address  of a is = " << &a << '\n';
  cout << "The address of a in poiter is = " << ptr << '\n';
  cout << "The value after defreferencing ptr is = " << *ptr << '\n';
*/

  // Pointer to pointer

  int marks = 100;

  // first pointer

  int *point = &marks; // point has the adress  of value variable;

  // second pointer (i-e pointer to pointer)

  int **point2 = &point;

  // **point2 = 200; // *point hold that address of pointer1 which holds the
  // adress of marks , in this way we can access and  modify the value of marks
  // indirectly;

  cout << "The value of marks is = " << marks << '\n';
  cout << "The address of marks in pointer1 is = " << point << '\n';
  cout << "The address of pointer1 is " << &point << '\n';
  cout << "The address of pointer1 in pointer2 is " << point2 << '\n';
  cout << "The value pointer1 holds is :" << *point << '\n';
  cout << "The value pointer2 holds is :" << **point2 << '\n';

  return 0;
}
