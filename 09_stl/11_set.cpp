#include <iostream>
#include <set>
using std::cout;
using std::set;

/*
* Set => a container where only unique values are stored, kept in sorted order.

------- syntax ----------
set<int> s;

--- Functions associated with set
1. insert/emplace
2. count
3. erase
4. find
5. size
*/

int main() {
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);

    // if we try to insert same values again, they will be ignored, and size will not be affected.
    // It will automatically give us the result in sorted order.
    s.insert(1);
    s.insert(2);

    cout << s.size() << '\n';
    for (auto &val : s) {
        cout << val << " ";
    }
    cout << "\n\n";

    /* lower_bound(x) => returns an iterator to the first element >= x (not strictly greater, but
       greater-or-equal). If x exists in the set, it returns an iterator to x itself.
       Example: set = {1, 2, 3}
       lower_bound(2) => points to 2 (found, since 2 exists)
       lower_bound(4) => no element >= 4 exists, so it returns s.end()

       s.end() is NOT a value like 0 — it's an iterator pointing one-past-the-last-element.
       Dereferencing it is undefined behavior (garbage, crash, or coincidentally something that
       looks fine — never rely on it). Always check against s.end() before dereferencing.
    */

    auto lb = s.lower_bound(4);
    if (lb != s.end()) {
        cout << "lower bound => " << *lb << '\n';
    } else {
        cout << "lower bound => no such element\n";
    }

    /* upper_bound(x) => returns an iterator to the first element > x (strictly greater).
       Unlike lower_bound, even if x exists in the set, upper_bound skips past it and points to
       the next element after it.
       Example: set = {1, 2, 3}
       upper_bound(2) => points to 3 (skips 2 even though it exists, since we need strictly greater)
       upper_bound(4) => no element > 4 exists, so it returns s.end()
    */

    auto ub = s.upper_bound(4);
    if (ub != s.end()) {
        cout << "upper bound => " << *ub << '\n';
    } else {
        cout << "upper bound => no such element\n";
    }

    return 0;
}
