#include <iostream>
#include <set>

using std::cout;
using std::set;

/*
* Set => set is a container where only unique values are stored.


------- syntax ----------
set<int> s;

--- Functions associated with set

1. insert/emplace
2. count
3.erase
4.find
5.size

    */

int main() {

    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);

    // if we try to insert same values again, they will be ignored , and size will not be effected.
    // It will automatically give us the result in sorted order.
    s.insert(1);
    s.insert(2);

    cout << s.size() << '\n';
    for (auto &val : s) {
        cout << val << " ";
    }

    /* lower_bound() function => lower-bound function returns the minimum value with respect to the
    provided value, if its not available , it will return the value just bigger than the required/asked
    value
    example => if we ask write lower-bound(4)=> it will return 4 and if 4 doesn't exist it will return a
     number just bigger than 4 which is 5;
    */

    cout << "lower bound => " << *(s.lower_bound(5));

    return 0;
}
