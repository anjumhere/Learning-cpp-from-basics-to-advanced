/*
 * CONCEPT: std::vector — Iterators
 * An iterator is a lightweight, pointer-like object that steps through a
 * container's elements. begin()/end() traverse forward, rbegin()/rend()
 * traverse backward, and `auto` spares you from writing out the long
 * iterator type names by hand.
 */

#include <iostream>
#include <vector>
using std::cout;
using std::vector;

int main() {

    /*
     * ----------------------------------------------------
     * STEP 1: Forward traversal with begin() and end()
     * vector<int> vect = {1, 2, 3, 4, 5} allocates one continuous
     * block of heap memory for 5 integers:
     *
     *   Address 0x100 -> stores 1
     *   Address 0x104 -> stores 2
     *   Address 0x108 -> stores 3
     *   Address 0x10c -> stores 4
     *   Address 0x110 -> stores 5
     *
     * The vector 'vect' itself lives elsewhere, holding metadata
     * (size = 5) and a pointer to the first element (0x100).
     * ----------------------------------------------------
     */
    vector<int> vect = {1, 2, 3, 4, 5};

    /*
     * vector<int>::iterator it creates a lightweight pointer 'it'
     * that initially points to nothing.
     */
    vector<int>::iterator it;

    for (it = vect.begin(); it != vect.end(); it++) {
        cout << *(it) << "==>  ";
    }
    cout << '\n' << '\n';

    /*
     * ----------------------------------------------------
     * How the loop above executes, step by step:
     * - Initialization: it = vect.begin() (starts at 0x100)
     * - Condition:      it != vect.end() (runs while 'it' is NOT
     *                   at the end position 0x114)
     * - Increment:      it++ (jumps forward by 4 bytes per int)
     * - Dereference:    *(it) (looks inside the address to get the value)
     *
     *   | Step   | Iterator Address | Condition (it != 0x114) | *(it) | Action                       |
     *   | :---   | :--------------- | :---------------------- | :---- | :--------------------------- |
     *   | Start  | 0x100            | True                    | -     | Points to 1                  |
     *   | Loop 1 | 0x100            | True                    | 1     | Prints "1==> ", jumps 0x104  |
     *   | Loop 2 | 0x104            | True                    | 2     | Prints "2==> ", jumps 0x108  |
     *   | Loop 3 | 0x108            | True                    | 3     | Prints "3==> ", jumps 0x10c  |
     *   | Loop 4 | 0x10c            | True                    | 4     | Prints "4==> ", jumps 0x110  |
     *   | Loop 5 | 0x110            | True                    | 5     | Prints "5==> ", jumps 0x114  |
     *   | End    | 0x114 (end)      | False                   | -     | Loop terminates              |
     * ----------------------------------------------------
     */

    /*
     * ----------------------------------------------------
     * STEP 2: Reverse traversal with rbegin() and rend()
     * vector<int>::reverse_iterator is an iterator that moves in
     * reverse order on itr++. This block runs as-is; observe that
     * elements print from last to first (5 ==> 4 ==> 3 ==> 2 ==> 1).
     * ----------------------------------------------------
     */
    vector<int>::reverse_iterator itr;

    for (itr = vect.rbegin(); itr != vect.rend(); itr++) {
        cout << *(itr) << " ==> ";
    }
    cout << '\n' << '\n';

    /*
     * Two new terms here:
     * rbegin() => points to a special position past the last element,
     *             unlike begin(), which points to the first element.
     * rend()   => points to a special position before the first
     *             element, unlike end(), which points past the last.
     * Rest of the loop working is same as Step 1 -- only the
     * direction of travel flips.
     */

    /*
     * ----------------------------------------------------
     * STEP 3: Deduce the type with auto
     * Writing vector<int>::reverse_iterator every time is clumsy.
     * `auto` detects the iterator type automatically, so we don't
     * have to spell out the iterator or reverse_iterator name.
     * >>> UNCOMMENT the block below, then compile and run.
     * >>> Observe: identical output to Step 2.
     * ----------------------------------------------------
     */
    /*
    for (auto itrr = vect.rbegin(); itrr != vect.rend(); itrr++) {
        cout << *(itrr) << " ";
    }
    cout << '\n';
    */

    return 0;
}
