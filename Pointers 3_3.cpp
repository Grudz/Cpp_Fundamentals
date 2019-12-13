// my first pointer
#include <iostream>
using namespace std;

void increment_all (int* start, int* stop)
{
  int * current = start;
  while (current != stop) {
    ++(*current);  // increment value pointed
    ++current;     // increment pointer so that the next pointer's value can be increased
  }
}

void print_all (const int* start, const int* stop)
{
  const int * current = start;
  while (current != stop) {
    cout << *current << '\n';
    ++current;     // increment pointer
  }
}

void increase (void* data, int psize)
{
  if ( psize == sizeof(char) )
  { char* pchar; pchar=(char*)data; ++(*pchar); }
  else if (psize == sizeof(int) )
  { int* pint; pint=(int*)data; ++(*pint); }
}

int addition (int a, int b)
{ return (a+b); }

int subtraction (int a, int b)
{ return (a-b); }

int operation (int x, int y, int (*functocall)(int,int))
{
  int g;
  g = (*functocall)(x,y);
  return (g);
}


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

  int num[5];
  int *p; // declaring pointer p
  p = num; // setting pointer = to array numbers
  *p = 10;
  p++; // incrementing pointer address
  *p = 20; // one address increase = next spot in the array = 20
  p = &num[2];
  *p = 30;
  p = num + 3;
  *p = 40;
  p = num;
  *(p + 4) = 50;
  for (int n = 0; n <= 4; n++) // could also do n<5
    cout << num[n] << ", ";
    
    cout << "\n \n" << "~~~ Example 4 ~~~" << '\n';
    
  int numbers[] = {10,20,30};
  increment_all (numbers,numbers+3);
  print_all (numbers,numbers+3);
  
  cout << "\n \n" << "~~~ Example 5 ~~~" << '\n';
  
  char a = 'z'; // ASCII numbering, note: z incremented = {
  int b = 6;
  increase (&a,sizeof(a));
  increase (&b,sizeof(b));
  cout << a << ", " << b << '\n';
  
   cout << "\n \n" << "~~~ Example 6 ~~~" << '\n';
  
  int m,n;
  int (*minus)(int,int) = subtraction;

  m = operation (7, 5, addition);
  n = operation (20, m, minus);
  cout <<n;  

  return 0;
}
