#include <iostream>
using std::cin;
using std::cout;
int main() {
  const int pakages = 100;
  int family_members;
  cout << "Total family members" << '\n';
  cin >> family_members;
  int pakages_left = pakages - family_members;

  if (pakages_left < 0) {
    cout << "Total stock is 100" << '\n';
    pakages_left = 0;
  }

  cout << "Total pakages left  " << pakages_left << '\n';
  while (pakages_left != 0) {
    int stock = pakages_left;
    cout << "Total family members ---" << '\n';
    cin >> family_members;
    if (family_members > stock) {
      cout << "Sorry no stock left come later" << '\n';
      break;
    }
    int new_stock = stock - family_members;
    pakages_left = new_stock;
    cout << "Total pakages left " << new_stock << '\n';
  }
  cout << "No stock left , come after next stock arrives" << '\n';
  return 0;
}
