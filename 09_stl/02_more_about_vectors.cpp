/*-------------------------------------------------------------------------------------------------------------
 * --------------------------------Ways to initialize a vector--------------------------------------------------
 *  1. vector<int>vec = {1,2,3,4};
 *  2. vector<int>vec1(4,5);
 *  3. vector<int>vec2(vec1)
 */
#include <iostream>
#include <vector>

using std::cout;
using std::vector;

int main() {

    // 1.  We initialize  it normally just like an array, we can assign values;
    //  vector<int> vec = {1, 2, 3, 4, 5, 6};

    // 2.Here in the paramters, first value points to how many times you want to repeat this number? and second
    // value is the actual value the you want to assign i-e , if i type(5,10), this means
    // print 10 5 times;
    vector<int> vec(5, 10);

    // 3. Here we create a vector using an existing vector.
    vector<int> vec2(vec); // when you print this , you will get the values of vec(which was copied)

    for (int val : vec) {
        cout << val << " ";
    }
    cout << '\n';
    cout << vec.size() << '\n';
    cout << vec.capacity() << '\n';

    return 0;
}
