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

  Student s1("Adnan Anjum", 21, 102456);
  s1.showResult();
  return 0;
}
