#include <iostream>
#include <string>

using std::cout;
using std::string;

/*
  * ---------------Object Oriented Programming -----------------
   It's a way of writing code where you group data + functions that work on that
  data into objects instead of just having loose function and variables.OOP is a
  programming paradigm that models real-world things as objects, and lets those
  objects interact with each other to uild a programming


  Classes and objects

  Objects =>  Objects are entities in real world;
  Classes => Classes is that blueprint of those entities;

  */
class Teacher {
  //  Properties/ attributes

  string name;
  string dept;
  string subject;
  double salary;

  // methods/ Member functions
  void changeDept(string newDept) { dept = newDept; }
};

int main() {

  Teacher t1;
  //  t1.name= "Anjum"; // When you try to assign a name you will get error
  //  saying , name is a private member of teacher.
  // This is due to access modifiers.

  // check file oops2.cpp for learning about access modifiers

  return 0;
}
