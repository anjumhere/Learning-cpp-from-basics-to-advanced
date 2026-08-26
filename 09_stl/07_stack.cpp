/*
 * CONCEPT: std::stack — Last In, First Out (LIFO)
 * std::stack is an adapter container that wraps another container (by
 * default deque) and exposes only push, pop, and top — enforcing a strict
 * LIFO (Last In, First Out) access pattern. Think of a stack of plates:
 * you can only add or remove from the top; accessing anything below
 * requires removing everything above it first.
 *
 * Why use stack instead of just using a vector/deque directly?
 * Because stack *restricts* the interface, making the LIFO intent
 * explicit and preventing accidental middle-of-container operations.
 *
 * Member functions:
 *   push(val)     — insert an element on top
 *   emplace(args) — construct an element in-place at the top
 *   top()         — access (but not remove) the top element
 *   pop()         — remove the top element (no return value)
 *   size()        — number of elements
 *   empty()       — true if size == 0
 *   swap(other)   — exchange contents with another stack
 */

#include <iostream>
#include <stack>

using std::cout;
using std::stack;

int main() {

    /*
     * ----------------------------------------------------
     * STEP 1: Push elements and read them back
     * Elements come out in reverse order of insertion (LIFO).
     * While the stack is not empty, top() reads the last pushed
     * element and pop() removes it.
     * ----------------------------------------------------
     */
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);

    cout << "Step 1 — push 1..6, then pop all (LIFO order):\n";
    cout << "size ==> " << s.size() << '\n';

    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << '\n' << '\n';

    /*
     * ----------------------------------------------------
     * STEP 2: empty() — check if the stack has elements
     * Returns true when size == 0, false otherwise.
     * ----------------------------------------------------
     */
    cout << "Step 2 — empty check:\n";
    cout << (s.empty() ? "yes stack is empty" : "stack is not empty") << '\n';
    cout << '\n';

    /*
     * ----------------------------------------------------
     * STEP 3: swap() — exchange contents of two stacks
     * swap() exchanges the entire contents of two stacks in O(1)
     * time (pointer swap, not element-by-element copy).
     * ----------------------------------------------------
     */
    stack<int> a;
    stack<int> b;
    a.push(10);
    a.push(20);
    a.push(30);
    b.push(100);
    b.push(200);

    cout << "Step 3 — swap:\n";
    cout << "before swap: a.size() = " << a.size()
         << ", b.size() = " << b.size() << '\n';

    a.swap(b);

    cout << "after swap:  a.size() = " << a.size()
         << ", b.size() = " << b.size() << '\n';
    cout << "a top ==> " << a.top() << '\n';
    cout << "b top ==> " << b.top() << '\n';

    return 0;
}
