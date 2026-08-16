/*
 * ================================================================
 *                          CONSTRUCTORS
 * ================================================================
 * A special function invoked automatically at the time of object
 * creation, used for initialization.
 *
 *  1. Same name as the class
 *  2. Constructor has no return type
 *  3. Called only once, at the time of object creation
 *  4. Memory allocation happens when the constructor is called
 *
 * There are 3 types of constructors:
 *  1. Non-parameterized Constructor
 *  2. Parameterized Constructor
 *  3. Copy Constructor
 * ================================================================
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
  /*
   * Object with Non-parameterized Constructor.
   * The constructor is called, the object is created, and
   * memory is allocated.
   */
  Teacher t1;
  cout << t1.dept << '\n';
  cout << '\n' << '\n';

  /*
   * Object with Parameterized Constructor.
   */
  Student s1("Anjum", "15-D", 2267391006);
  s1.getResult();

  /*
   * Copy Constructor
   * Special constructor(if not made , created by default) used to copy
   * properties of one object into another.
   *
   */
  Student s2(s1);
  cout << "The result Shown with copy constructor\n";
  s2.getResult();
  return 0;
}
