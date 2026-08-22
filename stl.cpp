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
 *         size() shows the current size of the vector (see Ex 1 in main()).
 *   - push_back() & pop_back()
 *   - emplace_back()
 *   - at() or []
 *   - front() & back()
 * ----------------------------------------------------------------------------
 */
int main() {
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

    /* ----------------------------------------------------------------------
     *                               pop_back()
     * ----------------------------------------------------------------------
     * pop_back() deletes the last element in the vector.
     * NOTE: pop_back() only deletes the last element of the vector but never
     *   the capacity -- capacity remains the same once allocated.
     * ---------------------------------------------------------------------- */

    vec.pop_back(); // size = 8, capacity = 16
    vec.pop_back(); // size = 7, capacity = 16
    vec.pop_back(); // size = 6, capacity = 16

    /*
     * size() function gives the current size of the vector.
     */
    for (int val : vec) {
        cout << val << " ";
    }
    cout << '\n';
    cout << "Size : " << vec.size() << '\n';

    /*
     * capacity() function shows the current capacity of the vector.
     *
     */
    cout << "Capacity : " << vec.capacity() << '\n';

    return 0;
}
