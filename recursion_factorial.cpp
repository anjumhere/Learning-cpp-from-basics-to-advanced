#include <iostream>

using std::cout;

/*
 * ----------------------------------------------------------------
 * Function declarations
 * ----------------------------------------------------------------
 */
void walk(int num);
int iterative(int val);
int recursive(int val);

int main() {

  // walk(100);

  /*
   * ----------------------------------------------------------------
   * Finding a factorial using both iterative and recursive methods
   * ----------------------------------------------------------------
   */
  cout << iterative(10) << '\n';
  cout << recursive(10) << '\n';

  return 0;
}

void walk(int num) {
  if (num > 0) {
    cout << "You walked a step\n";
    walk(num - 1);
  }
}

int iterative(int val) {
  int result = 1;

  for (int i = 1; i <= val; i++) {
    result *= i;
  }

  return result;
}

int recursive(int val) {
  if (val > 0) {
    val *= recursive(val - 1);
    return val;
  } else {
    return 1;
  }
}
