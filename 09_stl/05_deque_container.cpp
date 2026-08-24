#include <deque>
#include <iostream>

using std::cout;
using std::deque;

int main() {

    /* ------------------------------------------------------------------------------------------
        -------------------- Deque: Double Ended  Queue -----------------------------------------
     Deque is implemented as double ended queue and is very similar to a list.
        * you  can  use emplace_back() emplace_front(), push_back(), push_front(),pop_back(), pop_front()
in deque as well.
    => There is deque and dequeue , both look  very similar but operator  very differently.
    deque=> is out container implemented as double ended queue.
    dequeue=> dequeue is used to delete an element  from deque.

    ========================
    ====>Syntax<===

        deque<int> deq = {1,2,3,4,5};
    deq.push_front(0);
    deq.push_back(1);
    deq.push_back(2);
    */

    deque<int> deq = {1, 2, 3, 4, 5};

    deq.push_front(0);
    deq.push_back(6);
    deq.emplace_back(7);
    for (auto val : deq) {
        cout << val << " ";
    }

    /*
    Up until  now we have covered 3 sequence containers, which store their data sequencially in a
        contingous manner.

    ==> Total containers covered
    1. Vector
    2. list
    3. deque
        */
    return 0;
}
