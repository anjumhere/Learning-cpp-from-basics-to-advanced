/*
 * CONCEPT: Struct Basics
 * A struct is a user-defined type that bundles related values into a single
 * named unit — here a name, a GPA, and an enrollment flag always travel
 * together as one "student". Use a struct whenever several pieces of data
 * describe one real-world thing and belong together.
 * Analogy: an index card per person — every card has the same labeled
 * fields, but each card stores its own values.
 */
#include <iostream>

using std::cout;
using std::string;

struct student {
  string name;
  double gpa;
  bool enrolled;
};

int main() {

  // ----------------------------------------------------
  // STEP 1: Declare a student and fill its members (active — compile & run as-is)
  // ----------------------------------------------------
  student student1;
  student1.name = "Jayce Holland";
  student1.gpa = 3.5;
  student1.enrolled = true;

  cout << student1.name << '\n';
  cout << student1.gpa << '\n';
  cout << student1.enrolled << '\n';

  // ----------------------------------------------------
  // STEP 2: The struct is a blueprint — stamp out another student
  // >>> UNCOMMENT the block below, then compile and run.
  // >>> Observe: student2 has the same three members with completely
  // >>> independent values; its enrolled prints as 0 because it is false.
  // ----------------------------------------------------
  /*
  student student2;
  student2.name = "Tom Holland";
  student2.gpa = 2.5;
  student2.enrolled = false;

  cout << student2.name << '\n';
  cout << student2.gpa << '\n';
  cout << student2.enrolled << '\n';
  */

  // ----------------------------------------------------
  // STEP 3: As many instances as you need, one definition
  // >>> UNCOMMENT the block below, then compile and run.
  // >>> Observe: a third independent student — and notice the leading space
  // >>> kept from the original file is genuinely part of the stored name.
  // ----------------------------------------------------
  /*
  student student3;
  student3.name = " Tom Cruise";
  student3.gpa = 4.0;
  student3.enrolled = true;

  cout << student3.name << '\n';
  cout << student3.gpa << '\n';
  cout << student3.enrolled << '\n';
  */

  // ----------------------------------------------------
  // STEP 4: Print bools as true/false instead of 1/0
  // >>> UNCOMMENT the block below (STEPS 1-3 must be active too), then compile and run.
  // >>> Observe: after std::boolalpha, every enrolled field prints as
  // >>> true/false — a display setting of cout, not a change to the struct.
  // ----------------------------------------------------
  /*
  cout << std::boolalpha;
  cout << student1.enrolled << '\n';
  cout << student2.enrolled << '\n';
  cout << student3.enrolled << '\n';
  */

  return 0;
}
