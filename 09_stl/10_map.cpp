/*
 * ----------- Map -----------------------------------
 *  Map is used to store key value pairs.
 *
 *  Syntax:
 *      map<string, int> m;
 *
 *  We can set/change values:
 *      m[key] = value;
 *      m["tv"] = 34;
 *
 *  Map sorts keys in ascending order by default.
 *
 *  ------------- Associated functions with map -------------------------
 *      1. insert, emplace
 *      2. count
 *      3. erase
 *      4. find
 *      5. size
 *      6. empty
 */

#include <iostream>
#include <map>
#include <string>
#include <unordered_map>

using std::cout;
using std::map;
using std::multimap;
using std::string;
using std::unordered_map;

int main() {

    map<string, int> m;
    m["tv"] = 10;
    m["laptop"] = 50;
    m["phone"] = 60;
    m["keyboard"] = 100;

    // insert => also used to insert values in map
    m.insert({"camera", 340});
    m.emplace("router", 500);
    m.emplace("laptop", 300); // ignored, "laptop" key already exists
    m.emplace("laptop", 100); // ignored, "laptop" key already exists

    cout << "----- map contents (sorted by key) -----\n";
    for (auto const &p : m) {
        cout << p.first << " " << p.second << '\n';
    }

    // count => returns number of instances associated with a key (0 or 1 for map, since keys are unique)
    cout << "\n----- count(\"camera\") -----\n";
    cout << m.count("camera") << '\n';

    // access value directly via key
    cout << "\n----- m[\"laptop\"] -----\n";
    cout << m["laptop"] << '\n';

    // erase => removes a key value pair
    m.erase("camera");

    // find() => returns iterator to key if found, else m.end()
    cout << "\n----- find(\"laptop\") -----\n";
    if (m.find("laptop") != m.end()) {
        cout << "value found" << '\n';
    } else {
        cout << "not found" << '\n';
    }

    // ---------------- multimap ----------------
    // multimap allows storing multiple values under the same key.

    multimap<string, int> mp;
    mp.emplace("phone", 200);
    mp.emplace("phone", 200);
    mp.emplace("phone", 200);
    mp.emplace("phone", 200);
    mp.emplace("phone", 200);
    mp.emplace("phone", 200);

    mp.erase(mp.find("phone")); // removes only one instance

    cout << "\n----- multimap contents -----\n";
    for (auto const &it : mp) {
        cout << it.first << " " << it.second << '\n';
    }

    // ---------------- unordered_map ----------------
    // unordered_map stores data in no particular order.

    unordered_map<string, int> um;
    um.emplace("car", 20);
    um.emplace("bus", 20);
    um.emplace("truck", 20);
    um.emplace("train", 20);
    um.emplace("helecopter", 20);

    cout << "\n----- unordered_map contents (order not guaranteed) -----\n";
    for (auto &uod : um) {
        cout << uod.first << " " << uod.second << '\n';
    }

    return 0;
}
