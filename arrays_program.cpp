#include <iomanip>
#include <iostream>

using std::cout;
using std::setprecision;
using std::string;
double getTotal(double prices[], int arraySize);
int main() {
  double prices[] = {55.99, 23.94, 33.55, 105.99};
  int size_of_array = sizeof(prices) / sizeof(prices[0]);

  double total = getTotal(prices, size_of_array);
  cout << "Total price = " << setprecision(5) << std::fixed << total << '\n';

  return 0;
}

double getTotal(double prices[], int arraySize) {
  double total = 0;
  for (int i = 0; i < arraySize; i++) {

    total += prices[i];
  }
  return total;
}
