#include <iostream>

using std::cout;
using std::string;

// in this program we will swap the values by passing their reference to a
// function;
void swap(string &x, string &y);
int main() {

  string x = "one";
  string y = "two";

  swap(x, y);
  cout << "The value of x : " << x << '\n';
  cout << "The value of y : " << y << '\n';

  return 0;
}

void swap(string &x, string &y) {

  string temp;
  temp = x;
  x = y;
  y = temp;
}
