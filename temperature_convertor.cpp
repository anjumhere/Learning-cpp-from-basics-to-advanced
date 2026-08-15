#include <iostream>

using std::cin;
using std::cout;

int main() {

  char unit;
  double temperature;

  cout << "************Temperature Convertor ****************\n";
  cout << "F = Fahrenheit" << '\n';
  cout << "C = Celsius" << '\n';
  cout << "Choose the unit (C/F) :";
  cin >> unit;

  if (unit == 'C' || unit == 'c') {
    cout << "Enter the temperature in Fahrenheit :";
    cin >> temperature;
    temperature = (temperature - 32) / 1.8;
    cout << "Temperature in Celsius is : " << temperature << "C" << '\n';
  } else if (unit == 'F' || unit == 'f') {
    cout << "Enter the temperature in Celsius :";
    cin >> temperature;
    temperature = (temperature * 1.8) + 32;
    cout << "Temperature in Fahrenheit is : " << temperature << "F" << '\n';
  } else {
    cout << "Invalid unit choice\n";
  }

  return 0;
}
