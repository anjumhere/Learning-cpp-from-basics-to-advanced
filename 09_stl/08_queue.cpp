/*
 * CONCEPT: std::queue — First In, First Out (FIFO)
 * std::queue is an adapter container that wraps another container (by
 * default deque) and exposes push at the back and pop at the front —
 * enforcing a strict FIFO (First In, First Out) access pattern. Think
 * of a line of people: whoever joins first at the back gets served first
 * at the front; no cutting in the middle.
 *
 * Why use queue instead of just using a deque directly?
 * Because queue *restricts* the interface, making the FIFO intent
 * explicit and preventing accidental middle-of-container operations.
 *
 * Member functions:
 *   push(val)     — insert an element at the back
 *   emplace(args) — construct an element in-place at the back
 *   front()       — access the element at the front
 *   back()        — access the element at the back
 *   pop()         — remove the element at the front (no return value)
 *   size()        — number of elements
 *   empty()       — true if size == 0
 *   swap(other)   — exchange contents with another queue
 */

#include <iostream>
#include <queue>

using std::cout;
using std::queue;

int main() {

    /*
     * ----------------------------------------------------
     * STEP 1: Push elements and read them back
     * Elements come out in the same order they were pushed (FIFO).
     * front() reads the oldest element, pop() removes it.
     * ----------------------------------------------------
     */
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);

    cout << "Step 1 — push 1..6, then pop all (FIFO order):\n";
    cout << "size ==> " << q.size() << '\n';
    cout << "front ==> " << q.front() << '\n';
    cout << "back ==> " << q.back() << '\n';

    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << '\n' << '\n';

    /*
     * ----------------------------------------------------
     * STEP 2: empty() — check if the queue has elements
     * Returns true when size == 0, false otherwise.
     * ----------------------------------------------------
     */
    cout << "Step 2 — empty check:\n";
    cout << (q.empty() ? "yes queue is empty" : "queue is not empty") << '\n';
    cout << '\n';

    /*
     * ----------------------------------------------------
     * STEP 3: swap() — exchange contents of two queues
     * swap() exchanges the entire contents of two queues in O(1)
     * time (pointer swap, not element-by-element copy).
     * ----------------------------------------------------
     */
    queue<int> a;
    queue<int> b;
    a.push(10);
    a.push(20);
    a.push(30);
    b.push(100);
    b.push(200);

    cout << "Step 3 — swap:\n";
    cout << "before swap: a.size() = " << a.size() << ", b.size() = " << b.size() << '\n';

    a.swap(b);

    cout << "after swap:  a.size() = " << a.size() << ", b.size() = " << b.size() << '\n';
    cout << "a front ==> " << a.front() << '\n';
    cout << "b front ==> " << b.front() << '\n';

    return 0;
}
