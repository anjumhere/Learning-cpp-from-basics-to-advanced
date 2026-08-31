/*
 * CONCEPT: Applied mini-project — Number Guessing Game
 * The computer picks a secret random number; the player keeps guessing
 * while a do-while loop repeats until the guess is correct. "Too high"
 * / "Too low" feedback turns each iteration into new information.
 * Exercises: srandom/rand + modulo ranges, do-while loops, if-else
 * branching, and a counter that survives across iterations.
 */

#include <ctime>
#include <iostream>

using std::cin;
using std::cout;

int main() {

  srandom(time(0));
  const int num = rand() % 100 + 1;
  int guess;
  int tries = 0;

  cout << "********* Number Guessing game **********\n";

  do {
    cout << "Guess the number :";
    cin >> guess;
    tries++;

    // ----------------------------------------------------
    // CHALLENGE A: Limit the player to 7 attempts
    // >>> UNCOMMENT the block below (it sits inside the loop on
    // >>> purpose), compile and run.
    // >>> Observe: after the 7th wrong guess the game gives up and
    // >>> reveals the number — `break` exits the do-while early.
    // ----------------------------------------------------
    /*
    const int maxTries = 7;
    if (tries >= maxTries && guess != num) {
      cout << "Out of tries! The number was " << num << '\n';
      break;
    }
    */

    // ----------------------------------------------------
    // CHALLENGE B: Difficulty selector
    // >>> Before the loop, ask for a difficulty and scale the range:
    // >>>   easy   -> rand() % 50 + 1
    // >>>   medium -> rand() % 100 + 1   (current)
    // >>>   hard   -> rand() % 500 + 1
    // >>> Hint: store the upper bound in a variable and use it in
    // >>> BOTH the rand() line and any win/lose messages.
    // ----------------------------------------------------

    if (guess > num) {
      cout << "Too high\n";
    } else if (guess < num) {
      cout << "Too low\n";
    } else {
      cout << "Congratulations you guessed the right number which is : " << num
           << '\n';
    }

  } while (guess != num);

  cout << "Number of tries : " << tries << '\n';

  // ----------------------------------------------------
  // CHALLENGE C: Play again?
  // >>> Wrap everything from the srandom() line to here in an outer
  // >>> do-while that asks "Play again? (y/n)" and repeats while the
  // >>> answer is 'y'. Which variables must be RESET each game?
  // ----------------------------------------------------

  return 0;
}
