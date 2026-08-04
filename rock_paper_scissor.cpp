#include <ctime>
#include <iostream>
using std::cin;
using std::cout;
using std::string;

int userWins(string user, string comp_choice);
int compWins(string user, string comp_choice);
int main() {
  srand(time(0));
  int comp = rand() % 3 + 1;
  string comp_choice;
  string user;

  switch (comp) {
  case 1:
    comp_choice = "Rock";
    break;

  case 2:
    comp_choice = "Paper";
    break;

  case 3:
    comp_choice = "Scissors";
    break;
  }

  //  call userWins;
  //  call userWins;
  cout << comp_choice << '\n';
  cout << "Choose (r = Rock,p = Paper, s = Scissors)" << '\n';
  cin >> user;
  // tie

  if (comp_choice == "Rock" && user == "r") {
    cout << "Its a tie\n";
  } else if (comp_choice == "Paper" && user == "p") {
    cout << "Its a tie\n";
  } else if (comp_choice == "Scissors" && user == "s") {
    cout << "Its a tie\n";
  }
  // compWins(user, comp_choice);
  // userWins(user, comp_choice);
  int compScore = compWins(user, comp_choice);
  int userScore = userWins(user, comp_choice);

  cout << "User Score = : " << userScore << '\n';
  cout << "Computer Score = : " << compScore << '\n';

  cout << "Game Over\n";
  return 0;
}

int userWins(string user, string comp_choice) {

  int user_score = 0;

  // user wins

  if (user == "r" && comp_choice == "Scissors") {
    cout << "User Wins\n";
    user_score++;
  } else if (user == "p" && comp_choice == "Rock") {
    cout << "User wins\n";

    user_score++;
  } else if (user == "s" && comp_choice == "Paper") {
    cout << "User wins\n";

    user_score++;
  }

  return user_score;
}

int compWins(string user, string comp_choice) {
  int computer_score = 0;
  // computer wins
  if (user == "s" && comp_choice == "Rock") {
    cout << "Computer Wins\n";
    computer_score++;
  } else if (user == "r" && comp_choice == "Paper") {
    cout << "Computer wins\n";

    computer_score++;
  } else if (user == "p" && comp_choice == "Scissors") {
    cout << "Computer wins\n";

    computer_score++;
  }

  return computer_score;
}
