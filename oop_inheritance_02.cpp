/*
Multi-level Inheritance

    Parent
      ||
      ||
    Parent
      ||
      ||
  Child Class

*/

/*
If you want to have two parent classes and one derived class then see oop_inheritance_03.cpp
*/
#include<iostream>
#include<string>

using std::cout;
using std::string;

class Person{
    public:
    string name;
    int age;
    Person(string name, int age){

        this-> name = name;
        this-> age = age;
    };
    ~Person(){
        cout<< "This is  Person destructor\n";
    };
};

class Student: public Person{ // Inherits Person Class which is parent class 
    public:
    int roll_number;
    Student(string name, int age, int roll_number): Person(name, age){
        this->roll_number = roll_number;
    };
    ~Student(){
        cout<< "Student class destructor\n";
    };

};

class StudentDetails :public Student{ // Inherits Student Class and Person class
    public:
    double marks;

    StudentDetails(string name, int age, int roll_number, double marks): Student(name, age, roll_number){
        this-> marks = marks;

    };
    ~StudentDetails(){
        cout<< "StudentDetails destructor\n";
    };
    
    void getInfo(){
        cout<< "Name : "<< name<<'\n';
        cout<< "Age : "<< age<<'\n';
        cout<< "roll_number : "<< roll_number<<'\n';
        cout<< "marks : "<< marks<<'\n';
    };
};


int main(){

    StudentDetails s1("Adnan Anjum", 21, 102458,998.34 );
    s1.getInfo();
    return 0;
}
