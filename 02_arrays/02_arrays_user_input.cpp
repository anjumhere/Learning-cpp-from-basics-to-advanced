/*
 * CONCEPT: Filling Arrays from User Input
 * Arrays usually get their values at runtime instead of from an
 * initializer list: loop over the indices and read into each slot with
 * getline() (keeps spaces) or cin >> (stops at whitespace). The idiom
 * sizeof(arr) / sizeof(arr[0]) gives the element count, and
 * std::fill(begin, end, value) assigns one value to a whole range.
 * Analogy: filling numbered lockers, one student at a time.
 */

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int main() {
    // ----------------------------------------------------
    // STEP 1: Read five items from the user (active — compile & run as-is)
    // ----------------------------------------------------
    string items[5];
    int size = sizeof(items) / sizeof(items[0]);

    for (int i = 0; i < size; i++) {
        cout << "Enter the item you want to add at # " << i << '\n';
        std::getline(cin, items[i]);
    }

    // ----------------------------------------------------
    // STEP 2: Print the array back
    // >>> UNCOMMENT the block below, then compile and run.
    // >>> Observe: getline() stored everything you typed, including
    // >>> multi-word entries with spaces in them.
    // ----------------------------------------------------
    /*
    for (int i = 0; i < size; i++) {
      cout << "Item at #" << i << ": " << items[i] << '\n';
    }
    */

    // ----------------------------------------------------
    // STEP 3: Prefill an array with fill()
    // >>> UNCOMMENT the block below, then compile and run.
    // >>> Observe: fill() assigns "pizza" to every one of the 100 slots —
    // >>> far shorter than an initializer with 100 copies. Expect a lot
    // >>> of pizza on screen.
    // ----------------------------------------------------
    /*
    // ----------------------------------------------------------------
    // fill()
    // ----------------------------------------------------------------
    // fill() fills a range of elements with a specified value.
    // Signature: fill(begin, end, value);
    // ----------------------------------------------------------------

    // Listing every element works, but it's not practical:
    // string foods[10] = {"pizza", "pizza", "pizza", "pizza", "pizza",
    //                     "pizza", "pizza", "pizza", "pizza", "pizza"};

    string foods[100];
    fill(foods, foods + 100, "pizza");
    for (string food : foods) {
      cout << food << '\n';
    }
    */

    return 0;
}
