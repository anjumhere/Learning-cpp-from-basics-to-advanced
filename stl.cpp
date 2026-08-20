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
using std::endl;

using std::vector;

int main() {
    /*
1. Vector
Dynamic array. Stored contiguously in memory, so it supports fast random access. Resizes automatically when it runs out
of space (usually doubles its capacity).
    */
    vector<int> vec;

    vec.push_back(10); // add to end - O(1) amortized
    vec.push_back(20);
    vec.push_back(30);

    vec[1] = 25;       // random access by index - O(1)
    cout << vec.at(0); // safer access, throws if out of range

    vec.pop_back();             // remove last element - O(1)
    vec.insert(vec.begin(), 5); // insert at front - O(n), shifts everything

    cout << "Size: " << vec.size() << endl;
    cout << "Capacity: " << vec.capacity() << endl; // allocated space, >= size

    for (int x : vec)
        cout << x << " ";
    return 0;
}
