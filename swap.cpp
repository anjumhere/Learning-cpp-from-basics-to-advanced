#include <iostream>

using std::cout;
using std::string;

int main() {

  string x = "one";
  string y = "two";

  string temp;
  temp = x; // temp holds the value of x
  x = y;    // now x has the value of y
  y = temp; // now y has the value of x , which was stored in temp
  cout << "Value of x : " << x << '\n';
  cout << "Value of y : " << y << '\n';
  return 0;
}
