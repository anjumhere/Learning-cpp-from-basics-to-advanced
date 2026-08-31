#include <iostream>
#include <vector>

using std::cout;
using std::vector;

int main() {

    vector<int> vec = {2, 3, 45, 1, 2};

    for (int i : vec) {
        cout << i << " ";
    };

    vec.push_back(3);
    vec.erase(vec.begin() + 4, vec.begin() + 5);

    return 0;
}
