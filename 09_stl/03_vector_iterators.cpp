#include <iostream>
#include <vector>

using std::cout;
using std::vector;

int main() {
    /*
     * 1. Vector Allocation:
     *    Allocates a continuous block of memory in the heap for 5 integers:
     *    - Address 0x100 -> stores 1
     *    - Address 0x104 -> stores 2
     *    - Address 0x108 -> stores 3
     *    - Address 0x10c -> stores 4
     *    - Address 0x110 -> stores 5
     *
     *    The vector 'vect' lives elsewhere, holding metadata (size = 5)
     *    and a pointer to the first element (0x100).
     */
    vector<int> vect = {1, 2, 3, 4, 5};

    /*
     * 2. Iterator Declaration:
     *    vector<int>::iterator it;
     *    Creates a lightweight pointer 'it' that initially points to nothing.
     */
    vector<int>::iterator it;

    for (it = vect.begin(); it != vect.end(); it++) {
        cout << *(it) << "==>  ";
    }
    /*
     * 3. Loop Execution Step-by-Step:
     *    - Initialization: it = vect.begin() (starts at 0x100)
     *    - Condition: it != vect.end() (runs while 'it' is NOT at the end 0x114)
     *    - Increment: it++ (jumps forward by 4 bytes per int)
     *    - Dereference: *(it) (looks inside the address to get the value)
     *
     *    | Step | Iterator Address | Condition (it != 0x114) | Dereferenced Value *(it) | Action |
     *    | :--- | :--------------- | :---------------------- | :----------------------- | :----- |
     *    | Start| 0x100            | True                    | -                        | Points to 1 |
     *    | Loop 1| 0x100           | True                    | 1                        | Prints "1=> ", jumps to 0x104
     * | | Loop 2| 0x104           | True                    | 2                        | Prints "2=> ", jumps to 0x108
     * | | Loop 3| 0x108           | True                    | 3                        | Prints "3=> ", jumps to 0x10c
     * | | Loop 4| 0x10c           | True                    | 4                        | Prints "4=> ", jumps to 0x110
     * | | Loop 5| 0x110           | True                    | 5                        | Prints "5=> ", jumps to 0x114
     * | | End  | 0x114 (end)      | **False**               | -                        | Loop terminates |
     */
    cout << '\n';
    return 0;
}
