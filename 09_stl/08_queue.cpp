/*
============================================================================
 QUEUE (FIFO - First In, First Out)
============================================================================
 A queue is a non-sequential container in which elements are inserted
 at one end, called the "back", and removed from the other end,
 called the "front".
 Analogy: a line of people waiting — whoever joins first at the back
 gets served first at the front; no cutting in the middle.

    FRONT OF QUEUE                                   BACK OF QUEUE
         |                                                 |
         v                                                 v
   +-----------+   +-----------+   +-----------+   +-----------+
   | element 1 |   | element 2 |   | element 3 |   | element 4 |
   +-----------+   +-----------+   +-----------+   +-----------+
    <-- leaves first                        last pushed -->

 Push  -> inserts a new element at the back   (element 4 was pushed last)
 Pop   -> removes the element at the front    (element 1 leaves first)
----------------------------------------------------------------------------
 Member functions of std::queue
----------------------------------------------------------------------------
 1. push(val)     - insert an element at the back
 2. emplace(args) - construct an element in-place at the back
 3. front()       - access the element at the front
 4. back()        - access the element at the back
 5. pop()         - remove the element at the front
 6. size()        - number of elements currently in the queue
 7. empty()       - check whether the queue is empty
 8. swap(other)   - exchange contents with another queue
============================================================================
*/
#include <iostream>
#include <queue>
using std::cout;
using std::queue;
int main() {
    queue<int> q;
    q.push(1);                                 // push -> insert element at back
    q.push(2);                                 // push
    q.push(3);                                 // push
    q.push(4);                                 // push
    q.push(5);                                 // push
    q.push(6);                                 // push
    cout << "size ==> " << q.size() << '\n';   // size -> current element count
    cout << "front ==> " << q.front() << '\n'; // front -> access element at front
    cout << "back ==> " << q.back() << '\n';   // back -> access element at back

    while (!q.empty()) {   // empty -> loop condition, checks if queue has elements
        cout << q.front(); // front -> access element at the front
        cout << " ";
        q.pop(); // pop -> remove element at the front
    }
    cout << "\n\n";

    q.empty() ? cout << "yes queue is empty" : cout << "queue is not empty"; // empty
    cout << "\n\n";

    // swap example
    queue<int> a;
    queue<int> b;
    a.push(10);  // push
    a.push(20);  // push
    a.push(30);  // push
    b.push(100); // push
    b.push(200); // push

    cout << "before swap ==> a.size() = " << a.size() << ", b.size() = " << b.size() << '\n';

    a.swap(b); // swap -> exchanges contents of a and b

    cout << "after swap ==> a.size() = " << a.size() << ", b.size() = " << b.size() << '\n';

    cout << "a front ==> " << a.front() << '\n'; // front
    cout << "b front ==> " << b.front() << '\n'; // front

    return 0;
}
