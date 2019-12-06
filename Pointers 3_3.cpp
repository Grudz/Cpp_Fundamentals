// my first pointer
#include <iostream>
using namespace std;

int
main ()
{
  int firstvalue, secondvalue;
  int *mypointer;		// Declaring a pointer that will point to an int

  mypointer = &firstvalue;	// Location of firstvalue
  *mypointer = 10;		// 10 is stored at the location of mypointer
  mypointer = &secondvalue;
  *mypointer = 20;
  cout << "firstvalue is " << firstvalue << '\n';
  cout << "secondvalue is " << secondvalue << '\n';	// notice how the same pointer was used
  
  mypointer = &firstvalue;
  *mypointer = 7;
  cout << "The new secondvalue is " << secondvalue << '\n';
  cout << "The new firstvalue is " << firstvalue << '\n';
  cout << "The pointer is " << *mypointer << '\n';
  cout << '\n' << '\n' << "~~~ Example 2 ~~~" << '\n';

  int thirdvalue = 5, fourthvalue = 15;
  int *p1, *p2;

  p1 = &thirdvalue;		// p1 = address of thirdvalue
  p2 = &fourthvalue;		// p2 = address of fourthvalue
  *p1 = 10;			// value pointed to by p1 = 10
  *p2 = *p1;			// value pointed to by p2 = value pointed to by p1
  p1 = p2;			// p1 = p2 (value of pointer is copied)
  *p1 = 20;			// value pointed to by p1 = 20

  cout << "thirdvalue is " << thirdvalue << '\n';	// P1 first sets this until it = P2
  cout << "fourthvalue is " << fourthvalue << '\n';	// P2

cout << "\n \n" << "~~~ Example 3 ~~~" << '\n';

  int numbers[5];
  int *p; // declaring pointer p
  p = numbers; // setting pointer = to array numbers
  *p = 10;
  p++; // incrementing pointer address
  *p = 20; // one address increase = next spot in the array = 20
  p = &numbers[2];
  *p = 30;
  p = numbers + 3;
  *p = 40;
  p = numbers;
  *(p + 4) = 50;
  for (int n = 0; n <= 4; n++) // could also do n<5
    cout << numbers[n] << ", ";

  return 0;
}
