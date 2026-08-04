#include <iostream>

using std::cin;
using std::cout;

double square(double length);
double cube(double length);
int main() {

  double length;
  cout << "Enter the Length  :";
  cin >> length;
  double sqarea = square(length);
  double volume = cube(length);
  cout << "Area of square is : " << sqarea << "cm^2\n";
  cout << "The volume of the cube is : " << volume << "cm^3" << '\n';

  return 0;
}

double square(double length) { return length * length; }
double cube(double length) { return length * length * length; }
