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

    for (auto &val : s) {
        cout << val << " ";
    }

    return 0;
}
