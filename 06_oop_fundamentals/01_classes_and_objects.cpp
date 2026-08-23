/*
 * CONCEPT: Classes & Objects
 * A class is a blueprint that bundles data (attributes) and the
 * functions that operate on that data (methods) into a single unit.
 * An object is one concrete instance built from that blueprint.
 * Why: real-world things (a teacher, a bank account) have both state
 * and behavior — classes model them together.
 * Analogy: the class is an architect's house blueprint; every house
 * actually built from it is an object.
 *
 * NOTE: OOP is a way of writing code where you group data + functions
 * into objects, instead of loose functions and variables. Objects are
 * the entities; classes are their blueprints.
 */

#include <iostream>
#include <string>

using std::cout;
using std::string;

// ----------------------------------------------------
// STEP 1: Define the class (the blueprint)
// Members are private by default in a class — see STEP 3.
// ----------------------------------------------------
class Teacher {
  // Properties / attributes
  string name;
  string dept;
  string subject;
  double salary;

  // Methods / member functions
  void changeDept(string newDept) { dept = newDept; }
};

int main() {

  // ----------------------------------------------------
  // STEP 2: Instantiate an object from the blueprint
  // Creating t1 allocates memory for ALL its members at once.
  // >>> Compile and run as-is: nothing prints yet, but a real
  // >>> Teacher object now exists in memory.
  // ----------------------------------------------------
  Teacher t1;

  /*
   * ----------------------------------------------------------------
   * Notice something? You CANNOT do this yet:
   *
   *   t1.name = "Anjum";
   *
   * The compiler rejects it: 'name' is a private member of 'Teacher'.
   * A class keeps its members PRIVATE unless you say otherwise.
   *
   * >>> EXPERIMENT: uncomment the line above (put it under t1),
   * >>> compile, read the "private member" error, then re-comment it
   * >>> so the file builds again.
   * ----------------------------------------------------------------
   */

  // ----------------------------------------------------
  // STEP 3: Open up the class (challenge)
  // >>> Edit the class above: move the members under a `public:`
  // >>> label, uncomment t1.name = "Anjum"; in main, and compile.
  // >>> Observe: the assignment now succeeds because public members
  // >>> are reachable from outside the class.
  // >>> Full coverage of access control: 02_access_modifiers.cpp
  // ----------------------------------------------------

  return 0;
}
