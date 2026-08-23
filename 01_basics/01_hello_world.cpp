/*
 * CONCEPT: Your First Program — Structure & Output
 * Every C++ program starts at main(). #include lines pull in library
 * code (iostream gives you input/output), statements end with a
 * semicolon, and std::cout << prints to the terminal.
 * Why start here: every other file in this repo is one of these
 * programs with more steps inside.
 * Compile & run: g++ -std=c++17 01_hello_world.cpp -o hello && ./hello
 * Analogy: #include stocks your kitchen; main() is the recipe that runs.
 */

#include <iostream>

using std::cout;

int main() {

  // ----------------------------------------------------
  // STEP 1: Print one line of text (active — compile & run as-is)
  // ----------------------------------------------------
  cout << "Hello, world!\n";

  // ----------------------------------------------------
  // STEP 2: Each << chains onto the same line; '\n' ends it
  // >>> UNCOMMENT the block below, then compile and run.
  // >>> Observe: three pieces glued into ONE line by <<, and the
  // >>> '\n' character is what actually moves the cursor to a new line.
  // ----------------------------------------------------
  /*
  cout << "C++ " << "runs " << "this whole line" << '\n';
  */

  // ----------------------------------------------------
  // STEP 3: Escape sequences — special characters inside strings
  // >>> UNCOMMENT the block below, then compile and run.
  // >>> Observe: \t jumps to the next tab stop, \" prints a quote
  // >>> character, \\ prints one backslash. The backslash "escapes"
  // >>> the normal meaning of the next character.
  // ----------------------------------------------------
  /*
  cout << "Name:\tAnjum\n";
  cout << "Quote:\t\"Talk is cheap. Show me the code.\"\n";
  cout << "Path:\tC:\\temp\\notes.txt\n";
  */

  // ----------------------------------------------------
  // STEP 4: Comments are for humans, not the compiler
  // >>> This file already uses both kinds:
  // >>>   // single-line comment
  // >>>   block comments like this one
  // >>> Nothing to uncomment — just notice how each STEP banner above
  // >>> uses them to explain the code next to it.
  // ----------------------------------------------------

  return 0;
}
