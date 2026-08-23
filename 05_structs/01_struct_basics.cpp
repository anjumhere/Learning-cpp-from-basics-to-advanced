#include <iostream>

using std::cout;
using std::string;

struct student {
  string name;
  double gpa;
  bool enrolled;
};

int main() {

  student student1;
  student1.name = "Jayce Holland";
  student1.gpa = 3.5;
  student1.enrolled = true;

  student student2;
  student2.name = "Tom Holland";
  student2.gpa = 2.5;
  student2.enrolled = false;

  student student3;
  student3.name = " Tom Cruise";
  student3.gpa = 4.0;
  student3.enrolled = true;

  cout << student1.name << '\n';
  cout << student1.gpa << '\n';
  cout << student1.enrolled << '\n';

  cout << student2.name << '\n';
  cout << student2.gpa << '\n';
  cout << student2.enrolled << '\n';

  cout << student3.name << '\n';
  cout << student3.gpa << '\n';
  cout << student3.enrolled << '\n';

  return 0;
}
