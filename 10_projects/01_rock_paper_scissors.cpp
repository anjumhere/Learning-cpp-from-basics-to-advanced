/*
 * CONCEPT: Applied mini-project — Rock, Paper, Scissors
 * Combines everything from folders 01–04: functions with prototypes,
 * a game loop that runs until a win condition, switch/if-else rules,
 * random number generation seeded with the current time, input
 * validation, and score state carried across iterations.
 * Project goal: read this as a WHOLE design — helpers do one job each,
 * main() orchestrates the loop and the scoreboard.
 */

#include <ctime>
#include <iostream>

using std::cin;
using std::cout;
using std::string;

/*
 * ----------------------------------------------------------------
 * Function declarations
 * ----------------------------------------------------------------
 */
int playRound(string user, string comp_choice);
string computerChoice();

int main() {

  // Seed ONCE at startup. (Seeding inside computerChoice() would restart
  // the same random sequence every round within the same second.)
  srand(time(0));

  int compScore = 0;
  int userScore = 0;

  /*
   * ----------------------------------------------------------------
   * Game loop — runs until either player reaches a score of 5
   * ----------------------------------------------------------------
   */
  while (compScore <= 4 && userScore <= 4) {

    // Getting the computer's random choice
    string compChoice = computerChoice();

    // User's choice of rock, paper, or scissors
    string userChoice;
    cout << "Choose: \n r ===> Rock\n p ===> Paper\n s ===> Scissors \n ====> ";
    cin >> userChoice;

    /*
     * Safety net to prevent users from entering input other than
     * r = rock, p = paper, s = scissors.
     */
    if (userChoice != "r" && userChoice != "p" && userChoice != "s") {
      cout << "Choose between (r => Rock | p => Paper | s => Scissors) \n";
      break;
    }

    // Score and playRound function, which also includes the game rules
    int result = playRound(userChoice, compChoice);

    // Updating score
    if (result == 1) {
      userScore++;
    } else if (result == -1) {
      compScore++;
    } else {
      cout << "<<========================>> Its a "
              "Tie <<=========================>>\n\n";
    }

    // ----------------------------------------------------
    // CHALLENGE A: Show the running scoreboard after every round
    // >>> UNCOMMENT the line below, compile and run.
    // >>> Observe: players can now see how close they are to victory
    // >>> without waiting for the match to end.
    // ----------------------------------------------------
    /*
    cout << "SCORE  you " << userScore << " : " << compScore << " computer\n\n";
    */
  }

  cout << "Computer Score  : " << compScore << '\n';
  cout << "User Score  : " << userScore << '\n' << '\n';

  /*
   * ----------------------------------------------------------------
   * Game-over rules
   * ----------------------------------------------------------------
   */
  if (userScore >= 5) {
    cout << "**** User wins with " << userScore << " points " << "****" << '\n';
  } else if (compScore >= 5) {
    cout << "<<====>> Computer wins with " << compScore << " points "
         << "<<====>>" << '\n';
  }

  cout << "<<===============>> Game Over <<=================>>\n";

  // ----------------------------------------------------
  // CHALLENGE B: Invalid input currently ENDS the whole match
  // (the `break` above exits the game loop). Change it to `continue`
  // so the game re-prompts instead of quitting.
  // ----------------------------------------------------
  // ----------------------------------------------------
  // CHALLENGE C: Accept full words too ("rock", "paper", "scissors").
  // Hint: normalize with tolower(), or extend the comparisons in
  // playRound(). You will need <cctype>.
  // ----------------------------------------------------

  return 0;
}

string computerChoice() {
  int random = rand() % 3 + 1;

  // Generating the computer's choice: rock/paper/scissors
  string compChoice;

  switch (random) {
  case 1:
    compChoice = "Rock";
    break;
  case 2:
    compChoice = "Paper";
    break;
  case 3:
    compChoice = "Scissors";
    break;
  }

  return compChoice;
}

int playRound(string user, string comp_choice) {

  // Rules for the game
  if ((user == "r" && comp_choice == "Rock") ||
      (user == "p" && comp_choice == "Paper") ||
      (user == "s" && comp_choice == "Scissors")) {
    return 0; // tie
  } else if ((user == "r" && comp_choice == "Scissors") ||
             (user == "p" && comp_choice == "Rock") ||
             (user == "s" && comp_choice == "Paper")) {
    cout << "<<========================>> User "
            "Wins <<=========================>>\n\n";
    return 1; // user wins
  } else {
    cout << "<<========================>> Computer "
            "Wins <<=========================>>\n\n";
    return -1; // computer wins
  }
}
