#include <iostream>

using std::cout;

// pointers => Variable that stores the memory address of another variable
// we use address-off operator to point to the object that we want to store the
// address of (&d) we use  deference operator to access the value of the
// pointer/ variable it is pointing to;
void get(int *myp);
int main() {

  int value = 55;
  int *myp = &value; // we use ( * The dereferencce operator and  We also use
                     // the & address-off operator

  cout << "The memory address of value is : " << myp
       << '\n'; // The address of the value variable
  cout << "The value of the variable is : " << *myp
       << '\n'; // The value of the value variable;

  // pasing pointer to a function

  get(myp);

  // making a pointer array or storing an array in a pointer variable

  int arr[] = {
      1, 2, 3, 34, 5, 6, 3, 2, 1,
  };
  int *myarr = arr;
  cout << "The address of the arary is :" << myarr << '\n';
  cout << "The value of the firs item in the array is :" << *myarr << '\n';

  return 0;
}

void get(int *myp) {

  cout << "The memory address of value is : " << myp << '\n';
  cout << "The memory value  of value is : " << *myp << '\n';
}
