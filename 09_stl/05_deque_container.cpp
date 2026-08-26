/*
 * CONCEPT: std::deque — Double-Ended Queue
 * std::deque (pronounced "deck") is a sequence container that supports
 * efficient insertion and removal at both the front and the back, like
 * std::list. However, unlike list, deque also provides fast random access
 * with [] and at(). Internally, deque is implemented as a sequence of
 * fixed-size arrays (a "dequeued" structure), giving it a middle ground
 * between vector and list.
 *
 * Key differences:
 *   - vector:  fast push_back, slow push_front, fast random access
 *   - list:    fast push_back and push_front, slow random access
 *   - deque:   fast push_back and push_front, fast random access
 *
 * Note: "deque" is the container; "dequeue" (with a different spelling)
 * is a verb meaning "to remove an element." Don't mix them up.
 *
 * Member functions (all shared with vector/list where applicable):
 *   push_back(val), emplace_back(args)  — add to back
 *   push_front(val), emplace_front(args) — add to front
 *   pop_back(), pop_front() — remove from back/front
 *   size(), empty(), clear() — status checks
 *   [] , at() — random access (like vector, unlike list)
 */

#include <iostream>
#include <deque>

using std::cout;
using std::deque;

int main() {

    /*
     * ----------------------------------------------------
     * STEP 1: Create a deque and add elements at both ends
     * deque supports push_front() and push_back() efficiently —
     * no element shifting required at either end.
     * ----------------------------------------------------
     */
    deque<int> deq = {1, 2, 3, 4, 5};

    deq.push_front(0);
    deq.push_back(6);
    deq.emplace_back(7);

    cout << "Step 1 — deque after push_front/push_back/emplace_back:\n";
    for (auto val : deq) {
        cout << val << " ";
    }
    cout << '\n' << '\n';

    /*
     * ----------------------------------------------------
     * STEP 2: Random access with [] and at()
     * Unlike list, deque supports indexing — just like vector.
     * ----------------------------------------------------
     */
    cout << "Step 2 — random access:\n";
    cout << "deq[0] = " << deq[0] << '\n';
    cout << "deq[3] = " << deq[3] << '\n';
    cout << "deq.at(5) = " << deq.at(5) << '\n';
    cout << '\n';

    /*
     * ----------------------------------------------------
     * STEP 3: Summary of sequence containers
     * We have now covered all three sequence containers in the STL:
     *
     *   1. vector — contiguous memory, dynamic array
     *   2. list   — doubly-linked list
     *   3. deque  — double-ended queue (segmented array)
     *
     * All three share: size(), empty(), begin()/end(), clear(), erase().
     * Choose based on your access pattern:
     *   - Need random access?  → vector or deque
     *   - Need frequent front insertion? → deque or list
     *   - Need middle insertion? → list
     * ----------------------------------------------------
     */
    cout << "Step 3 — total elements in deque: " << deq.size() << '\n';

    return 0;
}
