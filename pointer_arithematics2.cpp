#include <iostream>

using std::cout;

/*
 In this file we will use comparison operators on pointers
*/
int main() {

  // Subtract

  /*
   * When we subtract pointers it gives us the result in integers
   * let say pointer1 in memory has address of 100 and pointer2 has addres of
   * 108 when we subtract pointer2-pointer1 , 108 -100 , 8 byes are left , which
   * are size of 2 integers , so we will gett 2 as a result;
   */
  int *ptr1;            // 100
  int *ptr2 = ptr1 + 2; // 100 +2(2 integers are 8 bytes ) = 108

  // so 108-100 = 8 = 8/4 = 2

  cout << ptr2 - ptr1 << '\n';

  // compare(< <=, > >=, == , !=)

  // we can also compare pointers

  int *p1;
  int *p2 = p1;

  cout << &p1 << '\n';
  cout << &p2 << '\n';
  cout << (p1 == p2);

  cout << '\n';
  cout << "------------------------------------------Exercise------------------"
          "-----------"
       << '\n';
  cout << '\n';
  // we can play around with all the other relational operators  on pointers.

  // exercise with pointer arithematics

  int arr[] = {10, 20, 30, 40};
  int *ptr = arr;
  cout << *(ptr + 1) << '\n'; // 20
  cout << *(ptr + 3) << '\n'; // 40
  ptr++;
  cout << *ptr << '\n'; // 20
  return 0;
}
