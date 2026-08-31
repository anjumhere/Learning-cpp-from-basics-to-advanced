#include <iostream>
#include <queue>

using std::cout;
using std::queue;

int main() {

    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);

    queue<int> p;
    p.swap(q);
    cout << p.size();
    cout << q.size();
    return 0;
}
