#include <iostream>

using std::cin;
using std::cout;
using std::string;
double square(double length);
double cube(double length);
string full_name(string first, string last);
int main() {
  /*
    double length;
    cout << "Enter the Length  :";
    cin >> length;
    double sqarea = square(length);
    double volume = cube(length);
    cout << "Area of square is : " << sqarea << "cm^2\n";
    cout << "The volume of the cube is : " << volume << "cm^3" << '\n';
  */

  // program to add first name with last name

  string first_name;
  string last_name;
  cout << "Enter your first name :";
  cin >> first_name;
  cout << "Enter your last name :";
  cin >> last_name;
  string fullName = full_name(first_name, last_name);

  cout << "The full name of the user is : " << fullName << '\n';

  return 0;
}

double square(double length) { return length * length; }
double cube(double length) { return length * length * length; }
string full_name(string first, string last) { return first + " " + last; }
