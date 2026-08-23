/*
 * CONCEPT: Loops — while, do-while, for
 * A loop repeats a block while its condition holds. while checks
 * FIRST (may run zero times), do-while checks LAST (always runs at
 * least once), and for packs counter setup / condition / increment
 * into one line for counting. break exits the loop immediately;
 * continue skips to the next iteration.
 * Why: repetition is the whole reason computers feel fast.
 * Builds on: conditions from 05_temperature_converter.cpp — every
 * loop condition is just an if-test re-asked each round.
 */

#include <iostream>

using std::cout;

int main() {

  // ----------------------------------------------------
  // STEP 1: while counts down until the condition fails (active)
  // ----------------------------------------------------
  int count = 3;

  cout << "while countdown: ";
  while (count > 0) {
    cout << count << " ";
    count--;
  }
  cout << "liftoff!\n";

  // ----------------------------------------------------
  // STEP 2: do-while always runs the body at least once
  // >>> UNCOMMENT the block below, then compile and run.
  // >>> Observe: even though flag is false from the start, the body
  // >>> prints ONCE before the condition is ever consulted — that is
  // >>> the do-while contract. Ideal for menus that must show first.
  // ----------------------------------------------------
  /*
  bool flag = false;

  do {
    cout << "do-while body runs once even with a false condition\n";
  } while (flag);
  */

  // ----------------------------------------------------
  // STEP 3: for = setup; condition; step, all in the header
  // >>> UNCOMMENT the block below, then compile and run.
  // >>> Observe: i starts at 1, keeps looping while i <= 5, and gains
  // >>> +1 after every pass — printing 1 through 5. This counting form
  // >>> will drive arrays in the next chapter.
  // ----------------------------------------------------
  /*
  for (int i = 1; i <= 5; i++) {
    cout << "for iteration " << i << '\n';
  }
  */

  // ----------------------------------------------------
  // STEP 4: break leaves the loop immediately
  // >>> UNCOMMENT the block below, then compile and run.
  // >>> Observe: counting stops dead at 4 — break exits the loop on
  // >>> the spot, skipping both the rest of this pass AND later passes.
  // ----------------------------------------------------
  /*
  for (int i = 1; i <= 10; i++) {
    if (i == 4) {
      cout << "hit " << i << ", breaking out early\n";
      break;
    }
    cout << i << '\n';
  }
  */

  // ----------------------------------------------------
  // STEP 5: continue skips only the current pass
  // >>> UNCOMMENT the block below, then compile and run.
  // >>> Observe: 3 is missing from the output — continue jumped straight
  // >>> to the next iteration without printing. Compare carefully with
  // >>> STEP 4's break.
  // ----------------------------------------------------
  /*
  for (int i = 1; i <= 5; i++) {
    if (i == 3) {
      continue; // skip printing just this one
    }
    cout << i << '\n';
  }
  */

  return 0;
}
