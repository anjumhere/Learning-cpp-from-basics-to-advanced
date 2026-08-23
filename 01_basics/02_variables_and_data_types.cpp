/*
 * CONCEPT: Variables & Data Types
 * A variable is a named slot of memory that holds one value of a
 * declared type. The core built-in types: int (whole numbers),
 * double (decimals), char (one character), bool (true/false), and
 * std::string (text, from <string>). Declare it, initialize it with =,
 * and read or overwrite it any time.
 * Why types matter: the type decides what values fit and which
 * operations are legal.
 * Builds on: program structure and cout from 01_hello_world.cpp.
 */

#include <iostream>
#include <string>

using std::cout;
using std::string;

int main() {

  // ----------------------------------------------------
  // STEP 1: Numbers — int for wholes, double for decimals (active)
  // ----------------------------------------------------
  int age = 21;
  double gpa = 3.84;

  cout << "Age : " << age << '\n';
  cout << "GPA : " << gpa << '\n';

  // ----------------------------------------------------
  // STEP 2: One character and one true/false flag
  // >>> UNCOMMENT the block below, then compile and run.
  // >>> Observe: char holds exactly ONE character in single quotes,
  // >>> and bool prints as 1 (true) or 0 (false) by default.
  // ----------------------------------------------------
  /*
  char grade = 'A';
  bool enrolled = true;

  cout << "Grade : " << grade << '\n';
  cout << "Enrolled : " << enrolled << '\n';
  */

  // ----------------------------------------------------
  // STEP 3: Text with std::string
  // >>> UNCOMMENT the block below, then compile and run.
  // >>> Observe: strings hold whole words or sentences in double
  // >>> quotes — and can be glued together with + (concatenation).
  // ----------------------------------------------------
  /*
  string name = "Anjum";
  string greeting = "Hello, " + name + "!";

  cout << greeting << '\n';
  */

  // ----------------------------------------------------
  // STEP 4: Assignment overwrites; const forbids it
  // >>> UNCOMMENT the block below, then compile and run.
  // >>> Observe: score changes freely, but the line touching the const
  // >>> is commented out ON PURPOSE — uncomment it too and the compiler
  // >>> refuses: a const variable can never be reassigned. Re-comment
  // >>> afterwards so the file builds again.
  // ----------------------------------------------------
  /*
  int score = 90;
  cout << "Score : " << score << '\n';

  score = 95; // ordinary variables can be overwritten...
  cout << "Score : " << score << '\n';

  const int maxScore = 100;
  // maxScore = 99; // <- uncomment to see the compiler block a const change

  cout << "Max   : " << maxScore << '\n';
  */

  return 0;
}
