#include <ctime>
#include <iostream>

using std::cin;
using std::cout;
using std::string;

int playRound(string user, string comp_choice);
string computerChoice();
int main() {

  int compScore = 0;
  int userScore = 0;

  // setting up a while loop for running the until game over (first person to
  // reach score of 5 wins the game)

  while (compScore <= 4 && userScore <= 4) {

    // getting random value

    string compChoice = computerChoice();

    // User Choice of rock , paper and scissors

    string userChoice;
    cout << "Choose: \n r ===> Rock\n p ===> Paper\n s ===> Scissors \n ====> ";
    cin >> userChoice;

    // Safety net for prevent users from giving input other than r= rock , p =
    // paper , s = scissors;

    if (userChoice != "r" && userChoice != "p" && userChoice != "s") {
      cout << "Choose between (r => Rock | p => Paper | s => Scissors) \n";
      break;
    }
    // score  and playround function which includes game rules too

    int result = playRound(userChoice, compChoice);

    // Updating Score

    if (result == 1) {
      userScore++;
    } else if (result == -1) {
      compScore++;
    } else {
      cout << "<<========================>> Its a "
              "Tie <<=========================>>\n\n";
    }
  }

  cout << "Computer Score  : " << compScore << '\n';
  cout << "User Score  : " << userScore << '\n' << '\n';

  // Setting rules for game over;
  if (userScore >= 5) {
    cout << "**** User wins with " << userScore << " points " << "****" << '\n';
  } else if (compScore >= 5) {
    cout << "<<====>> Computer wins with " << compScore << " points "
         << "<<====>>" << '\n';
  }

  cout << "<<===============>> Game Over <<=================>>\n";
  return 0;
}

string computerChoice() {
  srand(time(0));
  int random = rand() % 3 + 1;

  // generating computer choice rock/paper/scissors

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
