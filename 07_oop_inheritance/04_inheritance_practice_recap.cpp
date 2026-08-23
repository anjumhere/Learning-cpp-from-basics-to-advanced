/*
 * CONCEPT: Inheritance Practice Recap
 * A compact recap of the inheritance lessons: Student extends Person with a
 * roll number while reusing Person's name and age completely untouched.
 * Constructors run parent-first and destructors child-first, so the output
 * shows both lifetimes wrapped around your code. Work through the steps in
 * order to revise single inheritance before moving on to polymorphism.
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
  };
  ~Person() { cout << " I am a destructor\n"; }
};

  class Student : public Person {
  public:
    int roll_number;

    Student(string name, int age, int roll_number) : Person(name, age) {
      this->roll_number = roll_number;
    }

    ~Student() { cout << "destructor\n"; };


  void showResult(){
    cout<< "Name :"<< name<<'\n';
    cout<< "Age :"<< age<<'\n';
    cout<< "Roll Number :"<< roll_number<<'\n';
  }
};

int main() {

  // ----------------------------------------------------
  // STEP 1: Recap the full lifecycle (active — compile & run as-is)
  // ----------------------------------------------------
  Student s1("Adnan Anjum", 21, 102456);
  s1.showResult();

  // ----------------------------------------------------
  // STEP 2: Recap -- the child only writes what is NEW
  // >>> UNCOMMENT the block below, then compile and run.
  // >>> Observe: Student's constructor body sets ONLY roll_number; name and
  // >>> age travelled down from Person through ": Person(name, age)" --
  // >>> inheritance means zero rewriting of shared members.
  // ----------------------------------------------------
  /*
  cout << "Owned by Student itself : roll_number = " << s1.roll_number << '\n';
  cout << "Inherited from Person   : name = " << s1.name << '\n';
  cout << "Inherited from Person   : age = " << s1.age << '\n';
  */

  // ----------------------------------------------------
  // STEP 3: Recap -- a Student IS-A Person
  // >>> UNCOMMENT the block below, then compile and run.
  // >>> Observe: pointing a Person reference at a Student compiles fine --
  // >>> that is the "is-a" rule from lesson 01. Multilevel (02) and
  // >>> multiple (03) inheritance simply stack more layers onto this rule.
  // ----------------------------------------------------
  /*
  Person &as_person = s1;
  cout << "Reading the Student through a Person reference -> name: "
       << as_person.name << '\n';
  */

  return 0;
}
