/*
 * CONCEPT: Generating Random Numbers (rand / srand)
 * Computers make pseudo-random numbers: srand(seed) starts the sequence,
 * rand() returns the next value, and % N + 1 squeezes results into
 * 1..N. Seeding with the current clock (time) makes every run differ.
 * Use it for dice rolls, shuffles, games, sampling.
 * This program doubles as a Random Event Generator (Random Prize
 * Generator). rand/srand live in <cstdlib>, time() in <ctime>.
 */

#include <cstdlib>
#include <ctime>
#include <iostream>

using std::cin;
using std::cout;

int main() {

  // ----------------------------------------------------
  // STEP 1: Seed the generator and roll a six-sided die (active — compile & run as-is)
  // ----------------------------------------------------
  srand(time(NULL));
  int num = rand() % 6 + 1;
  cout << num << '\n';

  // ----------------------------------------------------
  // STEP 2: Roll a secret prize number between 1 and 5
  // >>> UNCOMMENT the block below (keep Step 1), then compile and run.
  // >>> Observe: % 5 + 1 maps rand()'s huge range onto just 1..5; reseeding gives this run a fresh sequence.
  // ----------------------------------------------------
  /*
  srand(time(0));
  int randomNum = rand() % 5 + 1;
  */

  // ----------------------------------------------------
  // STEP 3: Award a prize with a switch on the rolled number
  // >>> UNCOMMENT the block below (keep Steps 1-2), then compile and run.
  // >>> Observe: rerun several times — different cases fire; every case needs break, otherwise execution would fall through to the next prize.
  // ----------------------------------------------------
  /*
  switch (randomNum) {
  case 1:
    cout << "You have won a prize of $100!\n";
    break;
  case 2:
    cout << "You have won a prize of $50!\n";
    break;
  case 3:
    cout << "You have won a prize of $25!\n";
    break;
  case 4:
    cout << "You have won a prize of $10!\n";
    break;
  case 5:
    cout << "You have won a prize of $5!\n";
    break;
  }
  */

  return 0;
}
