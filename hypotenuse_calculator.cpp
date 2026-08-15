#include <cmath>
#include <iomanip>
#include <iostream>

using std::cin;
using std::cout;
using std::fixed;
using std::setprecision;

int main() {

  double a;
  double b;
  double c;

  cout << "Enter size of A :";
  cin >> a;
  cout << "Enter size of B :";
  cin >> b;

  c = std::sqrt(pow(a, 2) + pow(b, 2));

  cout << fixed << setprecision(10);
  cout << "The hypotenuse of right triangle is : " << c << '\n';

  return 0;
}
