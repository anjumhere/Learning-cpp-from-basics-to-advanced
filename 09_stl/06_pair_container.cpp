/*
 * CONCEPT: std::pair — Two Values in One
 * std::pair is a simple utility container that holds exactly two values
 * (called "first" and "second") which can be of different types. It lives
 * in the C++ utility library (<utility>, but often included transitively
 * through <vector> or <iostream>). Pairs are the building blocks for
 * key-value structures like std::map and are also used to return multiple
 * values from a function.
 *
 * Key features:
 *   - Two values of potentially different types
 *   - Access via .first and .second
 *   - Can nest pairs inside pairs: pair<int, pair<string, string>>
 *   - Can create vectors of pairs: vector<pair<int, int>>
 *   - emplace_back() constructs the pair in-place (no manual { } needed)
 */

#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::pair;
using std::string;
using std::vector;

int main() {

    /*
     * ----------------------------------------------------
     * STEP 1: Simple pair — two ints
     * Create a pair of the same type, then access values with
     * .first and .second.
     * ----------------------------------------------------
     */
    cout << "Step 1 — simple pair:\n";
    pair<int, int> val = {1, 4};
    cout << val.first << " and " << val.second << "\n";
    cout << '\n';

    /*
     * ----------------------------------------------------
     * STEP 2: Pair with different types
     * The two values don't need to share a type — here we pair
     * an int with a string.
     * ----------------------------------------------------
     */
    cout << "Step 2 — pair with mixed types:\n";
    pair<int, string> vals = {23, "anjum"};
    cout << "Name = " << vals.second << '\n'
         << "Age  = " << vals.first << '\n';
    cout << '\n';

    /*
     * ----------------------------------------------------
     * STEP 3: Nested pair — pair inside a pair
     * You can nest pairs to hold three or more values:
     * pair<int, pair<string, string>> stores an int and a sub-pair.
     * Access the inner values with chained .first / .second calls.
     * ----------------------------------------------------
     */
    cout << "Step 3 — nested pair:\n";
    pair<int, pair<string, string>> wow = {20, {"Adnan", "Anjum"}};
    cout << "First name = " << wow.second.first << '\n'
         << "Last name  = " << wow.second.second << '\n'
         << "Age        = " << wow.first << '\n';
    cout << '\n';

    /*
     * ----------------------------------------------------
     * STEP 4: Vector of pairs
     * A vector can hold pairs, which is the foundation for
     * representing collections of key-value data.
     * ----------------------------------------------------
     */
    cout << "Step 4 — vector of pairs:\n";
    vector<pair<int, int>> seq = {{1, 2}, {3, 4}, {5, 6}, {7, 8}};

    for (auto val : seq) {
        cout << val.first << " " << val.second << '\n';
    }
    cout << '\n';

    /*
     * ----------------------------------------------------
     * STEP 5: push_back vs emplace_back
     * push_back requires you to construct the pair explicitly: {8, 9}.
     * emplace_back constructs the pair in-place from the arguments —
     * cleaner and avoids a temporary.
     * ----------------------------------------------------
     */
    cout << "Step 5 — push_back vs emplace_back:\n";
    seq.push_back({8, 9});   // must create pair explicitly
    seq.emplace_back(9, 10); // constructs pair in-place

    for (auto val : seq) {
        cout << val.first << " " << val.second << '\n';
    }

    return 0;
}
