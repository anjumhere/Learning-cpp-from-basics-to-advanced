

/*
 * -----------Constructor------------------
 *  A special function invoked automatically at the time of  object creation,
 * used for initializaiton.
 *  1. Same name as class
 *  2. Constructor doesn't have any return type
 *  3. Only called once, at the time of object creation
 *  4. Memory allocation happens when constructor is called
 */

#include <iostream>
#include <string>
using std::cout;
using std::string;

/*
 * There are 3 type of constructors.
 * 1. Non-parameterized Constructor.
 * 2. Parameterized Constructor.
 * 3. Copy constructor.
 */

// Class with Non-parameterized Constructor
class Teacher {

private:
  double salary;

public:
  // Non-parameterized Constructor
  Teacher() {

    // constructor is always declared as public, because the constructor is
    // called from the main function , and main function doesn't have access to
    // private members;

    cout << "Hi, I am constructor\n";
    dept = "Computer Science";
    // the constructor is used to initialize the variables, once initialized ,
    // we don't need to explicitly assign a value.
  }
  string name;
  string subject;
  string dept;
};

// Class with Parameterized Constructor
// Constructor overloading => having mulitple constructors;
class Student {

public:
  Student(string n, string sect, long int stCode) {
    name = n;
    section = sect;
    student_code = stCode;
  }

  Student() { name = "jayce"; }
  string name;
  string section;
  long int student_code;

  void getResult() {
    cout << "Student Name: " << name << '\n';
    /*
     it will always print the name which we get were the constructor is called.
     The Non-parameterized constructor won't run at all if we never call it like
     this=>  Student  s1;
       */
    cout << "Student Section: " << section << '\n';
    cout << "Student code: " << student_code << '\n';
  }
};

int main() {

  // Object with Non-parameterized Constructor
  Teacher t1; // here the constructor is called , object is created and memory
              // is allocated;
  cout << t1.dept << '\n';
  cout << '\n' << '\n';

  // Object with Parameterized Constructor;
  Student s1("Anjum", "15-D", 2267391006);
  s1.getResult();

  return 0;
}
