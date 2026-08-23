/*
 * CONCEPT: Applied mini-project — Banking System
 * A menu-driven program: a do-while loop keeps the app alive, a
 * switch routes the chosen option, and `balance` is state that
 * persists across iterations while helper functions do each job.
 * Exercises: function prototypes, switch-case, do-while, input-driven
 * control flow, overdraft/invalid-amount guards.
 * NOTE for real life: money as `double` invites rounding trouble and
 * exact `==` comparisons — real systems use integer cents.
 */

#include <cstdlib>
#include <iostream>

using std::cin;
using std::cout;
using std::string;

double showBalance(double balance);
double deposite();
double withdraw(double balance);
void exitProgram();

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
      exitProgram();
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

  // ----------------------------------------------------
  // CHALLENGE A: Reject zero/negative deposits
  // >>> UNCOMMENT the block below, compile, then try depositing -50.
  // >>> Observe: the guard returns 0 so the caller adds nothing to
  // >>> the real balance — validation lives INSIDE the helper.
  // ----------------------------------------------------
  /*
  if (balance <= 0) {
    cout << "Deposit must be a positive amount\n";
    return 0;
  }
  */

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

void exitProgram() { cout << "Thanks for visiting\n"; }

// ----------------------------------------------------
// CHALLENGE B: Transaction history
// >>> Add a std::vector<double> of deposits/withdrawals, push every
// >>> successful transaction, and print the history from a new menu
// >>> option 5. You will need <vector> (see 09_stl).
// ----------------------------------------------------
// ----------------------------------------------------
// CHALLENGE C: The `if (balance == 0)` branch after a deposit shows
// totalBalance only when the balance is EXACTLY 0. Is that ever the
// intended behavior? Rework the deposit case so it always shows the
// updated balance.
// ----------------------------------------------------
