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
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);

    cout << "size ==> " << s.size() << '\n';
    while (!s.empty()) {
        cout << s.top();

        cout << " ";
        s.pop();
    }
    cout << "\n\n";
    s.empty() ? cout << "yes stack is empty" : cout << "stack is not empty";
    return 0;
}
