#include <iostream>

using std::cout;

int main() {

  /*
   * ----------------------------------------------------------------
   * Basic pointer recap
   * ----------------------------------------------------------------
   * int a = 10;
   * int *ptr = &a;
   * cout << "The value of a is = " << a << '\n';
   * cout << "The address  of a is = " << &a << '\n';
   * cout << "The address of a in pointer is = " << ptr << '\n';
   * cout << "The value after dereferencing ptr is = " << *ptr << '\n';
   * ----------------------------------------------------------------
   */

  /*
   * ----------------------------------------------------------------
   * Pointer to pointer
   * ----------------------------------------------------------------
   */
  int marks = 100;

  cout << "Dereferenced marks are =======>" << *(&marks) << '\n';

  // first pointer — holds the address of marks
  int *point = &marks;

  // second pointer (i.e. pointer to pointer)
  int **point2 = &point;

  /*
   * **point2 = 200; // *point holds the address of marks, and
   * point2 holds the address of point — this is how we can access
   * and modify the value of marks indirectly.
   */

  cout << "The value of marks is = " << marks << '\n';
  cout << "The address of marks in pointer1 is = " << point << '\n';
  cout << "The address of pointer1 is " << &point << '\n';
  cout << "The address of pointer1 in pointer2 is " << point2 << '\n';
  cout << "The value pointer1 holds is :" << *point << '\n';
  cout << "The value pointer2 holds is :" << *(point2) << '\n';

  cout << '\n';
  cout << '\n';
  cout << '\n';

  /*
   * ----------------------------------------------------------------
   * Predict the output
   * ----------------------------------------------------------------
   */
  int a = 5;
  int *p = &a;
  int **q = &p;

  cout << '\n';
  cout << '\n';
  cout << '\n';

  cout << "The address of a = " << &a << '\n'; // address of a

  cout << *p << '\n'; // value stored at the address stored in p,
                      // which is the address of a — value = 5

  cout << **q << '\n'; // value stored at the address stored in q,
                       // which is the address of p, which stores
                       // the address of a — value = 5

  cout << p << '\n'; // address stored in p, which is the address of a

  cout << *q << '\n'; // value stored in q, which is the address of p

  cout << &p << '\n'; // the address of p itself in memory, the
                      // same way q holds an address of its own

  cout << "The value of the pointer at this index is = " << '\n';

  return 0;
}
