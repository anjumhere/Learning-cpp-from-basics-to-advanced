#include <iostream>
using std::cin;
using std::cout;
using std ::string;
int main() {

  string name;
  cout << "Enter name" << '\n';
  std::getline(cin, name);
  cout << name << '\n';

  if (name.length() > 10) {
    cout << "Name too long choose between (1-8) characters" << '\n';
  }
  if (name.empty()) {
    cout << "The name is empty" << '\n';
  }

  name.append("@gmail.com");
  cout << name.at(0);

  name.insert(0, "@");

  cout << name.find('j');

  cout << name.erase(0, 4);

  return 0;
}
