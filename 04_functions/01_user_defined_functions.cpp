/*
 * CONCEPT: User-Defined Functions
 * A user-defined function is a named, reusable block of code that you write
 * yourself. Each one has a declaration (its name, return type, and parameter
 * list, shown to the compiler up front), a definition (the body), and one or
 * more call sites. Functions exist so you never copy-paste the same logic,
 * and so every task gets a clear, readable name.
 * Builds on: the function primer in 01_basics/12_function_basics.cpp —
 * this file adds user-defined helpers to real input/output flows.
 * Analogy: a recipe card — write it once, cook from it many times.
 */
#include <iostream>

using std::cin;
using std::cout;
using std::string;
double square(double length);
double cube(double length);
string full_name(string first, string last);

int main() {
  // ----------------------------------------------------
  // STEP 1: Call a function that joins two strings (active — compile & run as-is)
  // ----------------------------------------------------

  // program to add first name with last name

  string first_name;
  string last_name;
  cout << "Enter your first name :";
  cin >> first_name;
  cout << "Enter your last name :";
  cin >> last_name;
  string fullName = full_name(first_name, last_name);

  cout << "The full name of the user is : " << fullName << '\n';

  // ----------------------------------------------------
  // STEP 2: A function that computes a result from one number
  // >>> UNCOMMENT the block below, then compile and run.
  // >>> Observe: square() hides the math (length * length) behind a simple
  // >>> call; the caller only sees the returned value.
  // ----------------------------------------------------
  /*
  double length;
  cout << "Enter the Length  :";
  cin >> length;
  double sqarea = square(length);
  cout << "Area of square is : " << sqarea << "cm^2\n";
  */

  // ----------------------------------------------------
  // STEP 3: Feed the same input to a different function
  // >>> UNCOMMENT the block below (leave STEP 2 uncommented), then compile and run.
  // >>> Observe: cube(length) reuses the `length` from STEP 2 — one input,
  // >>> two unrelated results, zero duplicated code in main().
  // ----------------------------------------------------
  /*
  double volume = cube(length);
  cout << "The volume of the cube is : " << volume << "cm^3" << '\n';
  */

  return 0;
}

double square(double length) { return length * length; }
double cube(double length) { return length * length * length; }
string full_name(string first, string last) { return first + " " + last; }
