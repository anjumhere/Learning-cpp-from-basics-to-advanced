#include <iostream>
#include <list>

using std::cout;
using std::list;

int main() {

    /*
        * List is also a sequence container like vector , it is implemented as a doubly linked list
        * because values  can be inserted from front and back too.
        *The major difference between vector and list is that vector is implemented as dynmaic array
        and list is implemented as doubly linked list.

        => All the function, size , begin , rbegin, end , rend, front, back, at()or[] , clear , erase
        all can also be used in lists as well.

        ==============>
        ====>syntax<===
        list<int> ls = {1,2,3,4,5};
    ls.push_back(3)

    */

    list<int> ls;
    ls.push_back(3);
    ls.push_front(2);
    ls.push_front(1);
    ls.push_back(5);

    for (auto val : ls) {
        cout << val << " ";
    }

    return 0;
}
