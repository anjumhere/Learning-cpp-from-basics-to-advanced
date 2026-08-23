/*
 * CONCEPT: std::vector — Ways to Initialize
 * A vector can be created in several ways: with a brace-init list (like an
 * array), with a fill constructor that repeats one value N times, or by
 * copying an existing vector. This file walks through each.
 */

#include <iostream>
#include <vector>
using std::cout;
using std::vector;

int main() {

    /*
     * ----------------------------------------------------
     * STEP 1: Fill constructor
     * vector(count, value) repeats `value`, `count` times.
     * Here, (5, 10) means "10, repeated 5 times."
     * ----------------------------------------------------
     */
    /*
    vector<int> vec(5, 10);
    for (int val : vec) {
        cout << val << " ";
    }
    cout << '\n';
    cout << vec.size() << '\n';
    cout << vec.capacity() << '\n';
    */

    /*
     * ----------------------------------------------------
     * STEP 2: Brace-init (alternative way to write Step 1)
     * This does the SAME job as vector(count, value), just with
     * explicit values instead of a repeated one.
     * To try it: comment out Step 1's block above, then uncomment
     * the line below.
     * ----------------------------------------------------
     */
    /*
    vector<int> vec = {1, 2, 3, 4, 5, 6};
    */

    /*
     * ----------------------------------------------------
     * STEP 3: Copy constructor
     * UNCOMMENT the block below, then compile and run.
     * Observe: vec2 gets its own independent copy of vec's values.
     * Printing vec2 here shows the same values as vec, since vec2 was
     * just copied from it.
     * ----------------------------------------------------
     */
    /*
    vector<int> vec2(vec);
    for (int val : vec2) {
        cout << val << " ";
    }
    cout << '\n';
    */

    /*
     * ---------------------------------------------------------------------
     * MORE VECTOR FUNCTIONS: erase, insert, clear, empty
     * ---------------------------------------------------------------------
     */

    vector<int> vect = {1, 2, 3, 4, 5};

    /*
     * ----------------------------------------------------
     * STEP 4: erase() — remove element(s) by position
     * UNCOMMENT the block below, then compile and run.
     * erase(iterator) removes the single element at that position.
     * vect.begin() points to the first element, so erase(vect.begin())
     * removes element at index 0 (deletes 1).
     * erase(vect.begin() + 2) removes the element at index 2 (deletes 3).
     * erase(start, end) removes a RANGE — deletes everything from
     * `start` up to (but not including) `end`.
     * e.g. erase(vect.begin()+2, vect.begin()+4) deletes elements at
     * index 2 and 3 (deletes 3 and 4).
     * ----------------------------------------------------
     */
    /*
    vect.erase(vect.begin());                       // deletes 1
    vect.erase(vect.begin() + 2);                    // deletes element now at index 2
    vect.erase(vect.begin() + 2, vect.begin() + 3);  // deletes a range
    */

    /*
     * ----------------------------------------------------
     * STEP 5: insert() — add an element at a specific position
     * insert(iterator, value) inserts `value` right before the given
     * position, shifting everything after it one spot to the right.
     * vect.begin() + 2 points to index 2, so this places 500 there:
     * before: 1, 2, 3, 4, 5
     * after:  1, 2, 500, 3, 4, 5
     * ----------------------------------------------------
     */
    vect.insert(vect.begin() + 2, 500);

    /*
     * ----------------------------------------------------
     * STEP 6: clear() — remove all elements
     * UNCOMMENT the block below, then compile and run.
     * Observe: clear() empties the vector (size becomes 0), but
     * capacity is unaffected — the underlying memory isn't released.
     * ----------------------------------------------------
     */
    /*
    vect.clear();
    */

    for (int val : vect) {
        cout << val << " ";
    }
    cout << '\n' << '\n';

    /*
     * ----------------------------------------------------
     * STEP 7: empty() — check whether the vector has any elements
     * Returns true if size == 0, false otherwise.
     * ----------------------------------------------------
     */
    cout << "Is vector empty?\n";
    if (vect.empty()) {
        cout << "Yes vector is empty\n";
    } else {
        cout << "Vector is not empty\n";
    }

    return 0;
}
