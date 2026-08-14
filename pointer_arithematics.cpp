#include <iostream>

using std::cout;

int main() {
  // increment
  int a = 10;
  int *p = &a;
  cout << "The address of a is " << p << '\n';
  p++; // increases the address to 4 bytes in memory
  cout << "The incremented address of a is " << p << '\n'; // increased 4 bytes

  // decrement

  int b = 10;
  int *pb = &b;
  cout << "The address of b is " << pb << '\n';
  pb--; // decreases 4 bytes from the memory address

  cout << "The decremented address of b is " << pb << '\n'; // decresed 4 bytes
  return 0;
}
