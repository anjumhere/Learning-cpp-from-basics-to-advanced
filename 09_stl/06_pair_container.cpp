#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::pair;
using std::string;
using std::vector;
/* ----- Pair ----------
 * Pair is a part of c++ utility library
 * you don't have to add a header file to write pairs.
 * while creating pair , we can store  multiple data types.
 * We can also store pair into a pair
 */
int main() {

    /*
     Here we have stored  two integer values in a par
        */
    cout << "Simple pair\n";
    pair<int, int> val = {1, 4};

    // If you want  to  print  the  values you can  use  first and second functions.
    cout << val.first << " and " << val.second << "\n";
    cout << "\n\n";
    // You can also more than one data type in a pair

    cout << "More than one data type\n";
    pair<int, string> vals = {23, "anjum"};
    cout << "Name =" << vals.second << "\n" << "Age = " << vals.first << '\n';
    cout << "\n\n";

    // you can  also store a pair withint a pair
    cout << "Pair within a Pair\n";
    pair<int, pair<string, string>> wow = {20, {"Adnan ", "Anjum"}};

    // now  you  canot print the  inner pair values  by just using wow.second, you can  do like this

    cout << "First name = " << wow.second.first << '\n' // wow.second = (inner pair).first = first value vice versa
         << "Last name = " << wow.second.second << '\n'
         << "Age = " << wow.first;
    cout << "\n\n";

    // You can also  create a vector  of  pairs

    cout << "Vector of pair\n";
    vector<pair<int, int>> seq = {{1, 2}, {3, 4}, {5, 6}, {7, 8}};

    // for (pair<int, int> val : seq) {
    //     cout << val.first << " " << val.second << '\n';
    // }
    // you can also use auto to simplify things  a little bit

    for (auto val : seq) {

        cout << val.first << " " << val.second << '\n';
    }

    // The real use  of  emplace_back()

    seq.push_back({8, 9}); // we have  to  make pairs to push values

    // with emplace  emplace_back

    seq.emplace_back(8, 9);
    // with emplace_back we don't have  to make pairs ,  it creates pairs automatically.

    return 0;
}
