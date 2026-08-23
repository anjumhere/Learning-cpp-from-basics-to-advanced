/*
 * CONCEPT: Encapsulation
 * Encapsulation wraps data members and member functions into a
 * single unit (the class) and hides sensitive data behind private
 * access. Outside code interacts only through the public interface.
 * Why: the class controls every read/write of its own data, so
 * invalid states become impossible to create from outside.
 * Analogy: a medicine capsule — the active ingredients are sealed
 * inside; you interact with the shell, not the contents.
 */

#include <iostream>
#include <string>

using std::cout;
using std::string;

// ----------------------------------------------------
// STEP 1: Read the class — public interface, private secret
// Here data (properties/attributes) and a member function live
// under a single unit called a class — that IS encapsulation.
// student_code is hidden as private on purpose.
// ----------------------------------------------------
class Student {
private:
  double student_code;

public:
  string name;
  int age;
  string section;
  double marks;

  void changeSection(string newSection) { section = newSection; }
};

int main() {

  // ----------------------------------------------------
  // STEP 2: Fill the object through its public members
  // >>> Compile and run as-is. All four assignments succeed
  // >>> because name/age/section/marks are public.
  // ----------------------------------------------------
  Student s1;
  s1.name = "Anjum";
  s1.age = 20;
  s1.section = "12-D";
  s1.marks = 998;

  // ----------------------------------------------------
  // STEP 3: Change state through a method, then observe it
  // >>> UNCOMMENT the block below, then compile and run.
  // >>> Observe: section changed from "12-D" to "11-C" — but you
  // >>> never touched `section` directly; you asked the OBJECT to
  // >>> change itself via its public method.
  // ----------------------------------------------------
  /*
  cout << "Before: " << s1.section << '\n';
  s1.changeSection("11-C");
  cout << "After : " << s1.section << '\n';
  */

  // ----------------------------------------------------
  // STEP 4: Try to touch the hidden member (experiment)
  // >>> UNCOMMENT the line below, compile, read the error, then
  // >>> re-comment it so the file builds again.
  // >>> EXPECTED: "student_code is private" — sensitive data stays
  // >>> sealed inside the capsule.
  // ----------------------------------------------------
  // s1.student_code = 2267391006;

  return 0;
}
