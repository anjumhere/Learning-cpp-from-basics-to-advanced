#include <iostream>
#include <string>

using std::cout;
using std::string;

/*
 * ================================================================
 *                  OBJECT ORIENTED PROGRAMMING
 * ================================================================
 * It's a way of writing code where you group data + functions that
 * work on that data into objects, instead of just having loose
 * functions and variables. OOP is a programming paradigm that
 * models real-world things as objects, and lets those objects
 * interact with each other to build a program.
 *
 * Classes and objects:
 *   Objects -> entities in the real world
 *   Classes -> the blueprint for those entities
 * ================================================================
 */

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

  Teacher t1;

  /*
   * t1.name = "Anjum"; // When you try to assign a name you'll get
   * an error saying `name` is a private member of Teacher. This is
   * due to access modifiers.
   *
   * See oops2.cpp for learning about access modifiers.
   */

  return 0;
}
