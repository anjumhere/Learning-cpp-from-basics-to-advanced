/*
 * CONCEPT: Single Inheritance
 * When properties and member functions of a base class are passed on to a
 * derived class: passing on properties and member functions from parent
 * class to child class. Single level inheritance has a single parent class
 * and a single derived class; use it whenever the child "is a" specialised
 * version of the parent (a Student IS-A Person, plus a roll number).
 * To learn more about multi-level inheritance, check out
 * 02_multilevel_inheritance.cpp.
 */
#include <iostream>
#include <string>

using std::cout;
using std::string;

class Person {
public:
  string name;
  int age;

  Person(string name, int age) {

    this->name = name;
    this->age = age;

    cout << "hello World" << '\n';
    cout << "Parent constructior\n";
  }
  ~Person() { cout << "This is parent destructor\n"; }
};

class Student : public Person {

public:
  int roll_number;
  Student(string name, int age, int roll_number) : Person(name, age) {
    this->roll_number = roll_number;
  };
  void getValues() {
    cout << "Name :" << name << '\n';
    cout << "age  :" << age << '\n';
    cout << "Roll Number :" << roll_number << '\n';
  }

  ~Student() { cout << "This is a child destructor\n"; }
};

int main() {

  // ----------------------------------------------------
  // STEP 1: Build a Student, watch constructors & destructors (active — compile & run as-is)
  // ----------------------------------------------------
  Student s1("Anjum", 21, 104325);
  s1.getValues();

  /*
   * Construction order: parent -> child
   * Destruction order: child -> parent (reverse of construction)
   *
   * When you check the output, you will see that the parent constructor
   * runs first, followed by the child constructor. On the other hand,
   * the child destructor runs first, followed by the parent destructor.
   */

  // ----------------------------------------------------
  // STEP 2: A Parent standing on its own
  // >>> UNCOMMENT the block below, then compile and run.
  // >>> Observe: Person works perfectly alone and holds only the shared
  // >>> basics (name, age) -- no roll_number exists here, and exactly ONE
  // >>> destructor line ("parent") fires for this object.
  // ----------------------------------------------------
  /*
  Person solo_parent("Solo Parent", 55);
  cout << "Standalone Person -> name: " << solo_parent.name
       << ", age: " << solo_parent.age << '\n';
  */

  // ----------------------------------------------------
  // STEP 3: Everything public in Person is already inside Student
  // >>> UNCOMMENT the block below, then compile and run.
  // >>> Observe: s1.name and s1.age were never written inside Student --
  // >>> they arrived through inheritance, and viewing the Student through a
  // >>> Person reference proves the "is-a" relationship.
  // ----------------------------------------------------
  /*
  cout << "Members inherited from Person -> name: " << s1.name
       << ", age: " << s1.age << '\n';
  Person &person_view = s1; // the same Student object, seen as a plain Person
  cout << "Via a Person reference        -> name: " << person_view.name << '\n';
  */

  return 0;
}
