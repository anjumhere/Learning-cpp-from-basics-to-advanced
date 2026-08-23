/*
 * CONCEPT: STL & std::vector
 * The STL (Standard Template Library) is C++'s collection of pre-built
 * containers and algorithms, giving you efficient, reusable data structures
 * instead of writing everything yourself. std::vector is its most-used
 * container: a dynamically-sized array that grows at runtime, unlike the
 * fixed-size arrays you already know. Reach for it whenever you need a list
 * of values whose length isn't known ahead of time -- like a shopping basket
 * that keeps making room as you add items.
 */

/*
 * ============================================================================
 *                           STL - Standard Template Library
 * ============================================================================
 *
 * STL (Standard Template Library) is a collection of pre-built C++ template
 * classes and functions that provide common data structures and algorithms,
 * letting you use ready-made, efficient, and reusable code instead of writing
 * everything from scratch.
 *
 * It has four main components:
 *
 *   1. Containers  - data structures that store collections of objects
 *                    (e.g., vector, list, deque, set, map, stack, queue).
 *
 *   2. Algorithms  - functions that operate on containers to perform tasks
 *                    like sorting, searching, and modifying data
 *                    (e.g., sort(), find(), reverse()).
 *
 *   3. Iterators   - objects that act like pointers, used to traverse
 *                    elements in a container (e.g., begin(), end()).
 *
 *   4. Functors    - objects that can be called like functions, often used
 *      (Function      to customize the behavior of algorithms
 *       Objects)      (e.g., comparison logic in sort()).
 *
 * ============================================================================
 */

#include <iostream>
#include <vector>

using std::cout;
using std::vector;

/*
 * ----------------------------------------------------------------------------
 *                                   VECTOR
 * ----------------------------------------------------------------------------
 * In C++, once an array is declared, its size cannot be changed -- it is fixed.
 *
 *     int arr[4] = {1, 2, 3, 4};
 *
 * Now we can't make its size 5 or 3, so we need something where its size can
 * be dynamic. That's why we are going to use vector here -- it is dynamic and
 * its value can be changed.
 * ----------------------------------------------------------------------------
 */

/*
 * ----------------------------------------------------------------------------
 *                              VECTOR FUNCTIONS
 * ----------------------------------------------------------------------------
 *   - size() & capacity()
 *         size() shows the current size of the vector (see STEP 1 in main()).
 *   - push_back() & pop_back()
 *   - emplace_back()
 *   - at() or []
 *   - front() & back()
 * ----------------------------------------------------------------------------
 */
int main() {
    // ----------------------------------------------------
    // STEP 1: Create a vector and fill it with push_back() (active — compile & run as-is)
    // ----------------------------------------------------
    vector<int> vec;

    /* ----------------------------------------------------------------------
     *                                 EX 1
     * ----------------------------------------------------------------------
     * Vector is not an array itself, but it's built on top of one.
     * Internally, a vector manages a dynamically-allocated array on heap,
     * so when you do vec.push_back(), it writes into that underlying array.
     * In simple words, it allocates a new bigger array when it runs out of
     * room.
     *
     * NOTE: Every time you add one element to a full vector, its capacity
     *       gets doubled.
     * ---------------------------------------------------------------------- */

    vec.push_back(1); // capacity = 1
    vec.push_back(2); // capacity = 2
    vec.push_back(3); // capacity = 4
    vec.push_back(4); // capacity = 4
    vec.push_back(5); // capacity = 8
    vec.push_back(6); // capacity = 8
    vec.push_back(7); // capacity = 8
    vec.push_back(8); // capacity = 8
    vec.push_back(9); // capacity = 16

    for (int val : vec) {
        cout << val << " ";
    }
    cout << '\n' << '\n';

    // ----------------------------------------------------
    // STEP 2: size() vs capacity()
    // >>> UNCOMMENT the block below, then compile and run.
    // >>> Observe: size() counts stored elements (9), while capacity() shows
    // >>> how many fit before reallocation -- it doubled (1 -> 2 -> 4 -> 8
    // >>> -> 16) as the underlying array grew.
    // ----------------------------------------------------
    /*
        // size() function gives the current size of the vector.
        cout << "Size : " << vec.size() << '\n';

        // capacity() function shows the current capacity of the vector.
        cout << "Capacity : " << vec.capacity() << '\n' << '\n';
    */

    // ----------------------------------------------------
    // STEP 3: Shrink from the back with pop_back()
    // >>> UNCOMMENT the block below, then compile and run.
    // >>> Observe: each pop_back() removes the LAST element, so size drops
    // >>> from 9 to 6 -- but capacity stays 16, because allocated memory is
    // >>> never given back by pop_back().
    // ----------------------------------------------------
    /*
        // pop_back() deletes the last element in the vector.
        // NOTE: pop_back() only deletes the last element of the vector but
        // never the capacity -- capacity remains the same once allocated.

        vec.pop_back(); // size = 8, capacity = 16
        vec.pop_back(); // size = 7, capacity = 16
        vec.pop_back(); // size = 6, capacity = 16

        for (int val : vec) {
            cout << val << " ";
        }
        cout << '\n' << '\n';
        cout << "Size : " << vec.size() << '\n';
        cout << "Capacity : " << vec.capacity() << '\n' << '\n';
    */

    // ----------------------------------------------------
    // STEP 4: Element access with at() and []
    // >>> UNCOMMENT the block below, then compile and run.
    // >>> Observe: both work exactly like indexing a normal array; the
    // >>> difference is that at() checks the index and reports an error if
    // >>> it is out of range, while [] does not.
    // ----------------------------------------------------
    /*
        // at() or []
        // these functions are used to access an index of a vector,
        // same as we do in normal array

        cout << "at(0) Function\n";
        cout << "The value at index 3 is :" << vec.at(3) << '\n' << '\n';

        cout << "or[] Function\n";
        cout << "The value at index 5 is :" << vec[5] << '\n' << '\n';
    */

    // ----------------------------------------------------
    // STEP 5: Ends of the vector with front() and back()
    // >>> UNCOMMENT the block below, then compile and run.
    // >>> Observe: front() returns the very first element and back() the
    // >>> very last -- handy when you only care about the ends, not indexes.
    // ----------------------------------------------------
    /*
        // front and back are used to access the first and last element
        // of a vector

        cout << "front() Function\n";
        cout << "The first element is :" << vec.front() << '\n';

        cout << "back() Function\n";
        cout << "The last element is :" << vec.back() << '\n';
    */

    return 0;
}
