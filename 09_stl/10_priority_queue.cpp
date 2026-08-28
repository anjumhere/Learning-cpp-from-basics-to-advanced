/*
 * ----------- Map -----------------------------------
 *  Map is used to store key value pairs.
 *  Syntax
 *  map<string, int> m;
 *  we can change the values :
 *  m[key]  = value;
 *  m["tv"] = 34;
 */
#include <iostream>
#include <map>
#include <string>

using std::cout;
using std::map;
using std::string;

int main() {

    map<string, int> m;
    m["tv"] = 10;
    m["laptop"] = 50;
    m["phone"] = 60;
    m["keyboard"] = 100;

    for (auto const &p : m) {
        cout << p.first << " " << p.second << '\n';
    }
    /*
     * In the output you will see the keys in ascending order , meaning k will be first then l then p then t.
     * So map sorts the keys by default in ascendingg order
     */
    return 0;
}
