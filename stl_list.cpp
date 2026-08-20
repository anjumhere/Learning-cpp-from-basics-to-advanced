#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> lst;

    lst.push_back(100); // insert at end - O(1)
    lst.push_front(50); // insert at front - O(1)

    auto it = lst.begin();
    advance(it, 1);      // move iterator manually (no lst[1] allowed)
    lst.insert(it, 999); // insert before that position - O(1)

    lst.pop_front();
    lst.pop_back();

    for (int x : lst) {
        cout << x << " ";
    }
}
