/*
 * CONCEPT: nullptr Checks
 * nullptr is a special value that means "something has no value."
 * When a pointer holds a null value, that means the pointer is
 * pointing to nothing — the nullptr keyword represents a null
 * pointer literal. Testing a pointer against nullptr before using it
 * is the standard C++ safety habit.
 * Analogy: an empty contact card — you check whether anyone is
 * listed before trying to dial.
 */
#include <iostream>

using std::cout;

int main() {

  // ----------------------------------------------------
  // STEP 1: A pointer that points to nothing (active — compile & run as-is)
  // ----------------------------------------------------
  int *pointer = nullptr;

  if (pointer == nullptr) {
    cout << "The value was not assigned\n";
  } else {
    cout << "The value was assigned\n";
    cout << "The value is :" << *pointer << '\n';
  }

  // ----------------------------------------------------
  // STEP 2: Make the pointer point at a real variable
  // >>> UNCOMMENT the block below, then compile and run.
  // >>> Observe: the same nullptr check now takes the else branch, because
  //     pointer holds a real address — and dereferencing it gives 30.
  // ----------------------------------------------------
  /*
  int val = 30;
  pointer = &val;

  if (pointer == nullptr) {
    cout << "The value was not assigned\n";
  } else {
    cout << "The value was assigned\n";
    cout << "The value is :" << *pointer << '\n';
  }
  */

  // ----------------------------------------------------
  // STEP 3: Reset the pointer back to nullptr
  // >>> UNCOMMENT the block below, then compile and run.
  // >>> Observe: the check reports "not assigned" again. Resetting to
  //     nullptr is how you mark a pointer as "points to nothing".
  // ----------------------------------------------------
  /*
  pointer = nullptr; // release the link — the pointer points to nothing again

  if (pointer == nullptr) {
    cout << "The value was not assigned\n";
  } else {
    cout << "The value was assigned\n";
    cout << "The value is :" << *pointer << '\n';
  }
  */

  return 0;
}
