/*
 * CONCEPT: Constructors & the `this` pointer
 * A constructor is a special function invoked automatically when an
 * object is created — its job is initialization.
 * Rules: same name as the class, no return type, called once per
 * object; memory is allocated as the constructor runs.
 * Three kinds: non-parameterized, parameterized, and copy constructor.
 * `this` is a pointer to the current object; `this->name` means
 * "the name member OF THIS object" — essential when a parameter has
 * the same name as a member.
 */

#include <iostream>
#include <string>

using std::cout;
using std::string;

/*
 * ----------------------------------------------------------------
 * Class: Teacher
 * Demonstrates a Non-parameterized Constructor
 * ----------------------------------------------------------------
 */
class Teacher {
private:
  double salary;

public:
  string name;
  string subject;
  string dept;

  /*
   * Non-parameterized Constructor
   * - Constructors are always declared public, because they are
   *   called from main(), and main() doesn't have access to
   *   private members.
   * - Used to initialize member variables; once initialized here,
   *   we don't need to explicitly assign values elsewhere.
   */
  Teacher() {
    cout << "Hi, I am constructor\n";
    dept = "Computer Science";
  }
};

/*
 * ----------------------------------------------------------------
 * Class: Student
 * Demonstrates Constructor Overloading
 * (having multiple constructors in the same class)
 * ----------------------------------------------------------------
 */
class Student {
public:
  string name;
  string section;
  long int student_code;

  /*
   * Parameterized Constructor
   *
   * 'this' keyword:
   * - 'this' is a pointer that holds the memory address of the
   *   object. It always points to the object itself, not to any
   *   single member.
   * - 'this->name' happens in two steps:
   *     1. this      -> go to the memory address of the object
   *     2. ->name    -> once at that address, reach in and grab
   *                     the 'name' member specifically
   * - We use 'this->' to resolve naming conflicts when a
   *   constructor parameter shares the same name as a class
   *   member (as done below).
   */
  Student(string name, string section, long int student_code) {
    this->name = name;
    this->section = section;
    this->student_code = student_code;
  }

  /*
   * Non-parameterized Constructor
   * - This constructor will NOT run unless explicitly called
   *   with no arguments, e.g.:  Student s1;
   * - Whichever constructor is actually called at object
   *   creation determines what 'name' ends up being — the two
   *   constructors do not run together or fall back on each other.
   */
  Student() { name = "jayce"; }

  void getResult() {
    cout << "Student Name: " << name << '\n';
    cout << "Student Section: " << section << '\n';
    cout << "Student code: " << student_code << '\n';
  }
};

int main() {

  // ----------------------------------------------------
  // STEP 1: Create an object — watch the constructor fire
  // >>> Compile and run as-is. "Hi, I am constructor" prints by
  // >>> itself: you never called Teacher() — creating the object did.
  // ----------------------------------------------------
  Teacher t1;
  cout << t1.dept << '\n';
  cout << '\n' << '\n';

  // ----------------------------------------------------
  // STEP 2: Pass data in via a parameterized constructor
  // >>> UNCOMMENT the block below, then compile and run.
  // >>> Observe: the arguments land in the members thanks to
  // >>> this->name = name — left side is the member, right side
  // >>> is the parameter.
  // ----------------------------------------------------
  /*
  Student s1("Anjum", "15-D", 2267391006);
  s1.getResult();
  */

  // ----------------------------------------------------
  // STEP 3: Copy an existing object with the copy constructor
  // >>> UNCOMMENT the block below too (STEP 2 must stay active —
  // >>> it creates the s1 being copied), compile and run.
  // >>> Observe: s2 prints s1's values without you passing them
  // >>> manually — the compiler-generated copy constructor copied
  // >>> every member. (Deep vs shallow copies: next file.)
  // ----------------------------------------------------
  /*
  Student s2(s1);
  cout << "The result Shown with copy constructor\n";
  s2.getResult();
  */

  return 0;
}
