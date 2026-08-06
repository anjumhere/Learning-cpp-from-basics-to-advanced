#include <iostream>

using std::cin;
using std::cout;
using std::string;

double showBalance(double balance);
double deposite();
double withdraw(double balance);
void exit();
int main() {
  int choose;
  double balance = 10;
  const double totalBalance = balance;
  do {
    cout << "Choose Options: \n";
    cout << "1. Show Balance\n";
    cout << "2. Deposite Money\n";
    cout << "3. Withdraw Money\n";
    cout << "4. Exit \n";
    cout << "Option :";
    cin >> choose;
    if (choose != 1 && choose != 2 && choose != 3 && choose != 4) {
      cout << "Choose between (1-4)\n";
      break;
    }
    switch (choose) {
    case 1:
      showBalance(balance);
      break;
    case 2:
      balance += deposite();
      if (balance == 0) {
        showBalance(totalBalance);
      } else {

        showBalance(balance);
      }
      break;
    case 3:

      balance -= withdraw(balance);
      showBalance(balance);
      break;
    case 4:
      exit();
      break;
    default:
      cout << "Invalid option\n";
    }

  } while (choose != 4);
  return 0;
}

double showBalance(double balance) {

  cout << "The balance of the user is : " << balance << '\n' << '\n';

  return balance;
}

double deposite() {
  double balance;
  cout << "Please enter the amount to deposite :";
  cin >> balance;
  return balance;
}

double withdraw(double balance) {
  double withdrawAmount;
  cout << "Enter the amount to withdraw :";
  cin >> withdrawAmount;
  if (withdrawAmount > balance) {
    cout << "Not enough Balance\n";
    return 0;
  } else {
    if (withdrawAmount > 0) {
      cout << "********** Result *********\n\n";

      return withdrawAmount;
    } else {
      cout << "Invalid withdraw amount\n";
      return 0;
    }
  }
}

void exit() { cout << "Thanks for visiting\n"; }
