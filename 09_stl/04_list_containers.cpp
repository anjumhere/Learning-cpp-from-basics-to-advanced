/*
 * CONCEPT: std::list — Doubly-Linked List
 * std::list is a sequence container that stores elements in a doubly-linked
 * list. Unlike vector, it allows efficient insertion and removal from both
 * ends (and anywhere in the middle) without shifting elements. The trade-off
 * is that elements are not stored contiguously in memory, so you lose
 * random-access indexing ([] and at()).
 *
 * Key difference from vector:
 *   - vector: contiguous memory, fast random access, slow insert/remove in middle
 *   - list:   linked nodes, no random access, fast insert/remove anywhere
 *
 * std::list shares many member functions with vector:
 *   size(), begin(), rbegin(), end(), rend(), front(), back(),
 *   clear(), erase() — all work the same way.
 *
 * Additional list-specific functions:
 *   push_front(val) / emplace_front(args) — add to the front
 *   push_back(val)  / emplace_back(args)  — add to the back
 *   pop_front() / pop_back() — remove from front or back
 */

#include <iostream>
#include <list>

using std::cout;
using std::list;

int main() {

    /*
     * ----------------------------------------------------
     * STEP 1: Create a list and add elements with push_front/push_back
     * Unlike vector, list supports push_front() efficiently because
     * each node just needs its pointers updated — no shifting needed.
     * ----------------------------------------------------
     */
    list<int> ls;
    ls.push_back(3);
    ls.push_front(2);
    ls.push_front(1);
    ls.push_back(5);

    cout << "Step 1 — list after push_front/push_back:\n";
    for (auto val : ls) {
        cout << val << " ";
    }
    cout << '\n' << '\n';

    /*
     * ----------------------------------------------------
     * STEP 2: List initialization with brace-init
     * You can also initialize a list directly with values, just like vector.
     * ----------------------------------------------------
     */
    list<int> ls2 = {10, 20, 30, 40, 50};

    cout << "Step 2 — brace-initialized list:\n";
    for (auto val : ls2) {
        cout << val << " ";
    }
    cout << '\n' << '\n';

    /*
     * ----------------------------------------------------
     * STEP 3: size() and empty()
     * Works the same as vector — size() returns element count,
     * empty() returns true if the list has no elements.
     * ----------------------------------------------------
     */
    cout << "Step 3 — size and empty check:\n";
    cout << "ls size: " << ls.size() << '\n';
    cout << "ls empty: " << (ls.empty() ? "yes" : "no") << '\n';
    cout << '\n';

    return 0;
}
