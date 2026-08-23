/*
 * CONCEPT: Multiple Inheritance
 * One child class inherits from two (or more) base classes at once:
 *
 *        ParentOne -------- ParentTwo
 *                 ||        ||
 *                 ||        ||
 *                 Child Class
 *
 * The child merges the public members of all its parents, and each base
 * class constructor runs (in declaration order) before the child's own
 * constructor body. Use it when one class genuinely combines two
 * independent roles.
 */

#include <iostream>
#include <string>
using std::cout;
using std::string;

class ParentOne {
public:
  string name;
  ParentOne(string name) { this->name = name; };
  ~ParentOne() { cout << "This is the destructor of the parent one \n"; }
};

class ParentTwo {
public:
  int age;

  ParentTwo(int age) { this->age = age; };
  ~ParentTwo() { cout << "Child class destructor" << '\n'; }
};

class ChildClass : public ParentOne, public ParentTwo {
public:
  string location;
  int student_code;

  ChildClass(string name, int age, string location, int student_code)
      : ParentOne(name), ParentTwo(age) {
    this->location = location;
    this->student_code = student_code;
  }

  void showInfo() {
    cout << "Name :" << name << '\n';
    cout << "age :" << age << '\n';
    cout << "location :" << location << '\n';
    cout << "student code :" << student_code << '\n';
  }
};
int main() {

  // ----------------------------------------------------
  // STEP 1: One child, two parents (active — compile & run as-is)
  // ----------------------------------------------------
  ChildClass c1("Anjum", 21, "Gilgit Baltistan", 1023455);
  c1.showInfo();

  // ----------------------------------------------------
  // STEP 2: Meet the two parents individually
  // >>> UNCOMMENT the block below, then compile and run.
  // >>> Observe: each parent is an ordinary self-contained class on its own;
  // >>> inheritance simply fuses both of them into ChildClass. (Also notice
  // >>> ParentTwo's destructor message really says "Child class destructor"
  // >>> -- original wording kept!)
  // ----------------------------------------------------
  /*
  ParentOne po("Solo Parent One");
  ParentTwo pt(45);
  cout << "ParentOne -> name: " << po.name << '\n';
  cout << "ParentTwo -> age : " << pt.age << '\n';
  */

  // ----------------------------------------------------
  // STEP 3: Two parents' members meet on a single object
  // >>> UNCOMMENT the block below, then compile and run.
  // >>> Observe: name came from ParentOne and age came from ParentTwo --
  // >>> after multiple inheritance they coexist on the one c1 object next
  // >>> to the child's own fields.
  // ----------------------------------------------------
  /*
  cout << "-- One child, fed by two parents --\n";
  cout << "From ParentOne : name = " << c1.name << '\n';
  cout << "From ParentTwo : age = " << c1.age << '\n';
  cout << "Child's own    : location = " << c1.location
       << ", student_code = " << c1.student_code << '\n';
  */

  return 0;
}
