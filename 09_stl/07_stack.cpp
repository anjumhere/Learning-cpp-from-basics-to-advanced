/*
============================================================================
 STACK (LIFO - Last In, First Out)
============================================================================
 A stack is a non-sequential container in which elements are inserted
 and removed only from one end, called the "top".
 Analogy: a stack of books/plates — you can only add or remove from
 the top; you cannot access items in the middle without removing
 the ones above them first.
                         TOP OF STACK
                              |
                              v
                        +-----------+
                        | element 4 |   <-- last pushed / next to pop
                        +-----------+
                        | element 3 |
                        +-----------+
                        | element 2 |
                        +-----------+
                        | element 1 |   <-- first pushed
                        +-----------+
                          (bottom)
 Push  -> inserts a new element on top      (element 4 was pushed last)
 Pop   -> removes the element on top        (element 4 leaves first)
----------------------------------------------------------------------------
 Member functions of std::stack
----------------------------------------------------------------------------
 1. push(val)     - insert an element at the top
 2. emplace(args) - construct an element in-place at the top
 3. top()         - access the top element
 4. pop()         - remove the top element
 5. size()        - number of elements currently in the stack
 6. empty()       - check whether the stack is empty
 7. swap(other)   - exchange contents with another stack
============================================================================
*/
#include <iostream>
#include <stack>
using std::cout;
using std::stack;
int main() {
    stack<int> s;
    s.push(1);                               // push -> insert element at top
    s.push(2);                               // push
    s.push(3);                               // push
    s.push(4);                               // push
    s.push(5);                               // push
    s.push(6);                               // push
    cout << "size ==> " << s.size() << '\n'; // size -> current element count

    while (!s.empty()) { // empty -> loop condition, checks if stack has elements
        cout << s.top(); // top -> access element at the top
        cout << " ";
        s.pop(); // pop -> remove element at the top
    }
    cout << "\n\n";

    s.empty() ? cout << "yes stack is empty" : cout << "stack is not empty"; // empty
    cout << "\n\n";

    // swap example
    stack<int> a;
    stack<int> b;
    a.push(10);  // push
    a.push(20);  // push
    a.push(30);  // push
    b.push(100); // push
    b.push(200); // push

    cout << "before swap ==> a.size() = " << a.size() << ", b.size() = " << b.size() << '\n';

    a.swap(b); // swap -> exchanges contents of a and b

    cout << "after swap ==> a.size() = " << a.size() << ", b.size() = " << b.size() << '\n';

    cout << "a top ==> " << a.top() << '\n'; // top
    cout << "b top ==> " << b.top() << '\n'; // top

    return 0;
}
