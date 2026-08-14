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

  cout << "Dereferenced marks are =======>" << *(&marks) << '\n';
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
  cout << "The value pointer2 holds is :" << *(point2) << '\n';

  cout << '\n';
  cout << '\n';
  cout << '\n';
  // predict the output

  int a = 5;
  int *p = &a;
  int **q = &p;

  cout << '\n';
  cout << '\n';
  cout << '\n';
  cout << "The address of a = " << &a << '\n'; // address of a ------------
  cout << *p << '\n';  // value stored in the address stored in p which is
                       // address of a  and value of a = 5  -------------
  cout << **q << '\n'; // the value stored in the stored in the adress of q
                       // which is the address of p , which stores the address
                       // of a , value = 5 -----
  cout << p << '\n';   // address stored in p , which is the address of a;
  cout << *q << '\n';  // the value stored in the q which is the address of p
  cout << &p << '\n'; // the address of p as its own in the memory as the adress
                      // of q as its own

  return 0;
}
