/*
 * CONCEPT: Applied mini-project — Ration Distributor
 * Simulates a finite stock: each family claims packages, the remaining
 * stock shrinks, and the loop ends only when the stock hits zero.
 * Exercises: const values, while-until-empty loops, state updates
 * between iterations, and guards against over-allocation.
 */

#include <iostream>

using std::cin;
using std::cout;

int main() {

  // ----------------------------------------------------
  // STEP 1: First distribution of the day
  // >>> Compile and run as-is. Enter a small number (e.g. 12):
  // >>> stock starts at 100 and the first family's claim is
  // >>> subtracted immediately.
  // ----------------------------------------------------
  const int pakages = 100;
  int family_members;

  cout << "Total family members" << '\n';
  cin >> family_members;

  int pakages_left = pakages - family_members;

  if (pakages_left < 0) {
    cout << "Total stock is 100" << '\n';
    pakages_left = 0;
  }

  cout << "Total pakages left  " << pakages_left << '\n';

  while (pakages_left != 0) {
    int stock = pakages_left;

    cout << "Total family members ---" << '\n';
    cin >> family_members;

    if (family_members > stock) {
      cout << "Sorry no stock left come later" << '\n';
      break;
    }

    int new_stock = stock - family_members;
    pakages_left = new_stock;
    cout << "Total pakages left " << new_stock << '\n';

    // ----------------------------------------------------
    // CHALLENGE A: Reject zero/negative claims inside the loop too
    // >>> UNCOMMENT the block below, compile, then enter -5 as a
    // >>> family size.
    // >>> Observe: without it, a negative claim INCREASES the stock —
    // >>> free packages out of thin air! Validation matters.
    // ----------------------------------------------------
    /*
    if (family_members <= 0) {
      cout << "Enter a valid number of family members\n";
      continue;
    }
    */
  }

  cout << "No stock left , come after next stock arrives" << '\n';

  // ----------------------------------------------------
  // CHALLENGE B: The first claim has no guard either
  // >>> Enter -30 at the very first prompt: stock jumps ABOVE 100.
  // >>> Add the same validation before `pakages_left` is computed.
  // ----------------------------------------------------
  // ----------------------------------------------------
  // CHALLENGE C: Restock days
  // >>> When stock reaches 0, ask the user for a restock amount,
  // >>> add it to pakages_left, and keep the shop running until the
  // >>> user enters 0 families to close for the day.
  // ----------------------------------------------------

  return 0;
}
