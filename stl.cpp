/*
 *STL (Standard Template Library) is a collection of pre-built C++ template classes and functions that provide common
data structures and algorithms, letting you use ready-made, efficient, and reusable code instead of writing everything
from scratch.

It has four main components:

1. Containers – data structures that store collections of objects (e.g., vector, list, deque, set, map, stack, queue).
2. Algorithms – functions that operate on containers to perform tasks like sorting, searching, and modifying data (e.g.,
sort(), find(), reverse()).
3. Iterators – objects that act like pointers, used to traverse elements in a container (e.g., begin(), end()).
4. Functors (Function Objects) – objects that can be called like functions, often used to customize the behavior of
algorithms (e.g., comparison logic in sort()).
 *
 */

#include <iostream>
#include <vector>

using std::cout;
using std::vector;

/*
 *  --------  Vector   -------
 *  In cpp once an array is declared , its size can not be changed , its fixed, e.g
 *  int arr[4] = {1,2,3,4}
 *  Now we can't make its size 5 or 3, so we need something where its size can be dynamic.
 *  That's why we are going to use vector here , its dynamic , its value can be changed.
 */

/*
 * ----- Vector Functions -----
 *  size & Capacity
 *  Size function shows the current size of the vector, see in the main function ex.1
 *  push_back & pop_back
 *  emplace_back
 *  at()or[]
 *  front & back
 */
int main() {
    vector<int> vec;
    /*
     -------------Ex 1-----------------
     Vector is not an array itself , but its built on top of one.
     Internally , a vector manages a dynamically-allocated array on heap, so when you do
     vec.push_back(), it write into that underlying array , in simple words , it allocates
     new bigger array when it runs out of room.
        * everytime you add one to vector its capacity get doubled if the current capacity is filled up.
    */

    vec.push_back(1); // capacity = 1
    vec.push_back(2); // capacity = 2
    vec.push_back(3); // capacity = 4
    vec.push_back(4); // capacity = 4
    vec.push_back(5); // capacity = 8
    vec.push_back(6); // capacity = 8
    vec.push_back(7); // capacity = 8
    vec.push_back(8); // capacity = 8
    vec.push_back(9); // capacity = 16

    /* ----- pop_back() ---------
     * pop_back function deletes the last element int he vector
     * ----------note------------
     *  pop_back() function only deletes the last element of the vector but never capacity
     *  capacity remains same once allocated
     */
    vec.pop_back(); // size 8 capacity 16
    vec.pop_back(); // size 7 capacity 16
    vec.pop_back(); // size 6 capacity 16

    /*
     * size() function gives the current size of the vector.
     */
    cout << vec.size() << '\n';

    /*
     * capacity() function shows the current capacity of the vector.
     */
    cout << vec.capacity() << '\n';
    return 0;
}
