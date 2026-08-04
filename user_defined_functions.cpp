#include <iostream>

using std::cin;
using std::cout;

double area(double length);
int main() {

  double length;
  cout << "Enter the Length of the square :";
  cin >> length;
  double sqarea = area(length);
  cout << "Area of square is : " << sqarea << "cm^2\n";
  return 0;
}

double area(double length) { return length * length; }
