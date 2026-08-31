/*
 * CONCEPT: Applied mini-project — Quiz Game
 * Parallel arrays hold the quiz data: questions[i], options[i] (a 2D
 * array of four choices each) and answerKey[i]. The loop walks all
 * three in lockstep, compares the player's letter against the key,
 * and keeps a running score.
 * Exercises: std::array and nested arrays, toupper() from <cctype>
 * for case-insensitive answers, score accumulation, index-based data
 * lookup.
 */

#include <array>
#include <cctype>
#include <iostream>

using std::cin;
using std::cout;
using std::string;

int main() {

  std::array<string, 4> questions = {
      "Which one is a low level language? ", "Which one is machine language?",
      " What is the language of web? ", " Who is the creator of linux?"};

  std::array<std::array<string, 4>, 4> options = {
      {{"A. Javascript", "B.Python", "C. C++", "D. PHP"},
       {"A. C", "B. C++", "C. Assembly", "D. Binary"},
       {"A. C#", "B. Javascript", "C. Python", "D. Rust"},
       {"A. Bill Gates", "B. Mark Zukerberg", "C. Elon Musk ",
        "D. Linus Torvalds"}}};

  std::array<char, 4> answerKey = {'C', 'D', 'B', 'D'};
  int size = questions.size();
  char guess;
  int score = 0;

  for (int i = 0; i < size; i++) {
    cout << questions[i] << '\n';
    cout << "*********************************" << '\n';

    for (size_t j = 0; j < options[i].size(); j++) {
      cout << options[i][j] << '\n';
    }

    cout << "Choose your answer :";
    cin >> guess;
    guess = static_cast<char>(toupper(guess));

    if (guess == answerKey[i]) {
      cout << '\n';
      cout << "Your answer is correct." << '\n';
      cout << '\n';
      score++;
    } else {
      cout << "Wrong choice:::" << '\n';
      cout << '\n';
    }

    cout << "Your total Score is :" << score << '\n';
  };

  // ----------------------------------------------------
  // CHALLENGE A: Print a final report card after the loop
  // >>> UNCOMMENT the block below, compile and run.
  // >>> Observe: integer division — 3*100/4 is 75, no decimals.
  // >>> For a real percentage you would cast to double first.
  // ----------------------------------------------------
  /*
  cout << "\n========== FINAL RESULTS ==========\n";
  cout << "Score: " << score << " / " << size << '\n';
  cout << "Percentage: " << (score * 100) / size << "%\n";
  if (score == size) {
      cout << "Perfect score!\n";
  }
  */

  // ----------------------------------------------------
  // CHALLENGE B: Replay the missed questions
  // >>> Record which indices the player got wrong (a second
  // >>> std::array<int, 4> or a vector works), then loop over just
  // >>> those indices at the end for a second attempt.
  // ----------------------------------------------------

  return 0;
}
