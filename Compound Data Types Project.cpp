// This is a work in progress
// Ben Grudzien
// 12/19/2019

 
#include <iostream>
#include <stdio.h>
#include <stdlib.h> // Allows the flush funciton, clears the terminal screen
#include <string>
#include <sstream> // Converts the string input from the user to a boolean value

using namespace std;

bool a; 
bool b;
bool output; // Stores bits to be operated on
bool OPERATION_OUT; // Stores operation values

int selection; // Stores menu selection variable

struct operation { // Data structure
  string AND;
  string DISPLAY;
} ops;

   ops.AND = "AND => a b output\n       0 0    0  \n       0 1    0  \n"
		     "       1 0    0  \n       1 1    1  \n--------------------\n";

string DISPLAY() // Displays all the operators at once
{
	cout << ops.AND; 
	return ops.AND;
}

bool ENTER_BITS(bool output)
{
	cout << "ENTER TWO BITS (seperated by a space)\n => ";
	cin >> a >> b;
	cout << "--------------------\n" <<"You entered = " << a << b << "\n--------------------\n\n";

	output = a & b; // concatenate bits together
	return output;
}


int main()
{

    DISPLAY();
    return 0;
}
