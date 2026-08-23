/*
 * CONCEPT: Dynamic Memory with new / delete
 * new reserves memory on the heap while the program runs (single
 * objects or arrays sized at runtime); delete / delete[] hands it
 * back. Every new must be matched by exactly one delete of the right
 * kind, otherwise the memory leaks until the program exits.
 * Analogy: renting a storage unit — you choose the size on the day,
 * and you must return the keys exactly once.
 */
#include <iostream>

using std::cin;
using std::cout;

int main() {

    // ----------------------------------------------------
    // STEP 1: Dynamically allocating a single int (active — compile & run as-is)
    // ----------------------------------------------------
    int *ptr = nullptr;

    ptr = new int;
    *ptr = 23;

    cout << "The address of ptr is :" << ptr << '\n';
    cout << "The value of ptr is :" << *ptr << '\n';

    delete ptr; // hand the memory back — exactly one delete per new
    ptr = nullptr;

    // ----------------------------------------------------
    // STEP 2: Creating an array dynamically
    // >>> UNCOMMENT the block below, then compile and run.
    // >>> Observe: the array size comes from the user at RUNTIME — impossible
    //     with a plain array. Also notice this step never frees the memory
    //     yet... that is what STEP 3 is for.
    // ----------------------------------------------------
    /*
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
    */

    // ----------------------------------------------------
    // STEP 3: Free the whole array
    // >>> UNCOMMENT the block below, then compile and run.
    // >>> Observe: arrays from new[] must be released with delete[] — the
    //     square brackets matter. After that, pointer is reset to nullptr.
    // ----------------------------------------------------
    /*
    delete[] pointer; // free the WHOLE array — note the square brackets!
    pointer = nullptr;

    cout << "Array memory released.\n";
    */

    return 0;
}
