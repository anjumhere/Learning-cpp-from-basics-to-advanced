#include <iostream>

using std::cout;

int main() {
  // increment
  int a = 10;
  int *p = &a;
  cout << "The address of a is " << p << '\n';
  p++; // increases the address to 4 bytes in memory
  //  same for pb +2 , adds 8 bytes in the memory address
  cout << "The incremented address of a is " << p << '\n'; // increased 4 bytes

  // decrement

  int b = 10;
  int *pb = &b;
  cout << "The address of b is " << pb << '\n';
  pb--; // decreases 4 bytes from the memory address

  //  same for pb -2 , subtracts 8 bytes in the memory address
  cout << "The decremented address of b is " << pb << '\n'; // decresed 4 bytes

  // pointer arithematics with arrays

  // when we increase the value of arra , it adds 4 bytes , which is the exact
  // memory location seqquence in the array by incrementing the address , we can
  // access the values of the array sequencially

  int arr[] = {1, 2, 3, 4};
  cout << *arr << '\n'; // prints the first value of the array which is 1
  cout << arr << '\n';
  cout << *arr + 1 << '\n'; // prints the second value of the array which is 2
  cout << arr + 1 << '\n';
  cout << *arr + 2 << '\n'; // print the third value of the array which is 3
  cout << arr + 2 << '\n';
  cout << *arr + 3 << '\n'; // print the fourth value of the array which is 4
  cout << arr + 3 << '\n';
  // prints c after 8 is because in hexadecimal , it addres like this

  /*
   * In hexadecimal , numbers add like this
   * 1
   * 2
   * 3
   * 4
   * 5
   * 6
   * 7
   * 8
   * 9 => after 9 , the counting start from a to e
   * a
   * b
   * c
   * d
   * e
   * So In my system the increment went like this
   *1
  0x7ffe4e2d96a0
  2
  0x7ffe4e2d96a4
  3
  0x7ffe4e2d96a8
  4
  0x7ffe4e2d96ac

  because we increased 1 integer which is 4 bytes in memory, it started from 0
  to 4 to 8 then c , it went from 8 to c because of the following reason 9 => 1
  a => 2
  b => 3
  c => 4 // here c is the 4th jump that's why it went from 8 to c


      */
  return 0;
}
