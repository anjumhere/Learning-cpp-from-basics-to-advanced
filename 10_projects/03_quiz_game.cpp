#include <array>
#include <cctype>
#include <iostream>

using std::cin;
using std::cout;
using std::string;

int main() {

    std::array<string, 4> questions = {"Which one is a low level language? ", "Which one is machine language?",
                                       " What is the language of web? ", " Who is the creator of linux?"};

    std::array<std::array<string, 4>, 4> options = {
        {{"A. Javascript", "B.Python", "C. C++", "D. PHP"},
         {"A. C", "B. C++", "C. Assembly", "D. Binary"},
         {"A. C#", "B. Javascript", "C. Python", "D. Rust"},
         {"A. Bill Gates", "B. Mark Zukerberg", "C. Elon Musk ", "D. Linus Torvalds"}}};

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

    return 0;
}
