/*
 * CONCEPT: Multilevel Inheritance
 * A chain of inheritance where each class derives from the one above it:
 *
 *     Parent (Person)
 *       ||
 *       ||
 *     Parent (Student)
 *       ||
 *       ||
 *   Child Class (StudentDetails)
 *
 * Members flow down through every level; constructors run top-down while
 * destructors run bottom-up. Use it when categories nest naturally inside
 * each other. If you want to have two parent classes and one derived class
 * then see 03_multiple_inheritance.cpp.
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

    // ----------------------------------------------------
    // STEP 1: Chain all three levels together (active — compile & run as-is)
    // ----------------------------------------------------
    StudentDetails s1("Adnan Anjum", 21, 102458,998.34 );
    s1.getInfo();

    // ----------------------------------------------------
    // STEP 2: Stop halfway down the chain
    // >>> UNCOMMENT the block below, then compile and run.
    // >>> Observe: Student alone is already a complete class ("Person +
    // >>> roll_number"); every link in the chain works by itself, and TWO
    // >>> destructor lines (Student, then Person) fire for this middle object.
    // ----------------------------------------------------
    /*
    Student middle("Middle Of The Chain", 19, 500);
    cout << "Middle link -> name: " << middle.name
         << ", roll_number: " << middle.roll_number << '\n';
    */

    // ----------------------------------------------------
    // STEP 3: One object, data living on three levels
    // >>> UNCOMMENT the block below, then compile and run.
    // >>> Observe: the single object s1 stores fields DEFINED at three
    // >>> different levels; getInfo() in Step 1 printed them all without
    // >>> StudentDetails re-declaring anything it inherited.
    // ----------------------------------------------------
    /*
    cout << "-- Which level owns what (all inside the one object s1) --\n";
    cout << "Defined in Person        : name = " << s1.name << '\n';
    cout << "Defined in Student       : roll_number = " << s1.roll_number << '\n';
    cout << "Defined in StudentDetails: marks = " << s1.marks << '\n';
    */

    return 0;
}
