#include <iostream>

using std::cin;
using std::cout;
using std::string;

int lifeUp();
int main() {

  int life = 0;
  do {
    life += lifeUp();
    cout << "life is :" << life << '\n';

  } while (life != 5);
}

int lifeUp() {
  int life = 0;
  return ++life;
}
