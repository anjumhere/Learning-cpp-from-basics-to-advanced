#include <iostream>

using std::cout;

int main() {

  /*
   * ----------------------------------------------------------------
   * nullptr
   * ----------------------------------------------------------------
   * A special value that means "something has no value." When a
   * pointer holds a null value, that means the pointer is pointing
   * to nothing. The nullptr keyword represents a null pointer
   * literal.
   * ----------------------------------------------------------------
   */
  int *pointer = nullptr;

  int val = 30;
  pointer = &val;

  if (pointer == nullptr) {
    cout << "The value was not assigned\n";
  } else {
    cout << "The value was assigned\n";
    cout << "The value is :" << *pointer << '\n';
  }

  return 0;
}
