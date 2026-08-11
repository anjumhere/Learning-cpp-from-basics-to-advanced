#include <iostream>

using std::cout;
using std::string;

int main() {

  int myArray[] = {1, 2, 3, 4, 5};

  // using for loop for iteration of the array;
  for (int i = 0; i <= 4; i++) {
    cout << "The numbers in the array are : " << myArray[i] << '\n';
  }

  // using for range loop;
  cout << "Using for rangle loop\n";

  // using this loop for iteration of array is a good enhancement over classic
  // for loop because you don't have to give a condition like i< 5 or
  // initialization of temporary int i in the for loop or something, it
  // automatically does that for you.

  for (int i : myArray) {
    cout << "The numbers in the array are : " << i << '\n';
  }

  // looping through strings;
  char myName[] = {'a', 'd', 'n', 'a', 'n', 0};
  char my_name[] = "Adnan";

  // here in this example of for loop , you can in the condition that
  // myName[i]!=0, means, if the index of myName is not zero , which makes it
  // true until it reaches 0 , which is always the last character in a string;
  /*
    for (int i = 0; myName[i] != 0; i++) {
      cout << "The character is :" << myName[i] << '\n';
    }

    */

  // This also works because you know that all the zero values are false and
  // non-zero  values are always true in the programming , so when the iteration
  // reaches the last character in the string which is zero , it makes the the
  // condition false and the loop ends, that's how this works too

  /*
    for (int i = 0; myName[i]; i++) {
      cout << "The character is :" << myName[i] << '\n';
    }

  */

  // looping through character pointer;

  /*
  In this example we have looped through character pointers, lets me examplain.
in the begininning of the loop , we have initiailzed the character pointer with
myName, In order to initialize a character pointer , it needs somethingg to
point, so we used myName which character pointer uses , it points to the first
character in this string. Then in the condition we have used dereference
operator to use the same logic until the loop hits 0 , which falsifies the
condition and loop ends , then we have written cp++, cp++ , is to jump from
first memory address to another memory address , c++ pointers are smart enough
to jump from over memory address to another in an array of characters. The in
the currly braces, in the cout , we have again used the dereference operator to
get the outputt whicch points to the data in that specific memory location;

And that's how it works;
  */

  /*
  cout << "Looping through character pointer\n\n";
  for (char *cp = my_name; *cp != 0; cp++) {

    cout << "The character is :" << *cp << '\n';
  }

  */

  /*
  // Using for each/ for ranged loops for for looping over strings;
  // we are loopping through array of characters so we will use char i in the
  // range declaration ;

 */
  for (char i : myName) {

    /*
     At the end of the iteration you will se a blank space , that's that 0 ,
     so char data types doesn't show that show we use a condition to avoid
     that;

    */

    if (i == 0)
      break;
    cout << "The character is :" << i << '\n';
  }
  return 0;
}
