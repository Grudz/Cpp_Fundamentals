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

string ANDstr;
string NANDstr;
string ORstr;
string NORstr;
string XORstr;
string XNORstr;

string AND()
{
	ANDstr = "AND => a b output\n       0 0    0  \n       0 1    0  \n"
		     "       1 0    0  \n       1 1    1  \n--------------------\n";
	cout << ANDstr;
	return ANDstr;
}

string NAND()
{
	NANDstr = "NAND => a b output\n       0 0    1  \n       0 1    1  \n"
		      "       1 0    1  \n       1 1    0  \n--------------------\n";
	cout << NANDstr;
	return NANDstr;
}

string OR()
{
	ORstr = "OR => a b output\n       0 0    0  \n       0 1    1  \n"
	        "       1 0    1  \n       1 1    1  \n--------------------\n";
	cout << ORstr;
	return ORstr;
}

string NOR()
{
	NORstr = "NOR => a b output\n       0 0    1  \n       0 1    0  \n"
	         "       1 0    0  \n       1 1    0  \n--------------------\n";
	cout << NORstr;
	return NORstr;
}

string XOR()
{
	XORstr = "XOR => a b output\n       0 0    0  \n       0 1    1  \n"
	         "       1 0    1  \n       1 1    0  \n--------------------\n";
	cout << XORstr;
	return XORstr;
}

string XNOR()
{
	XNORstr = "XNOR => a b output\n       0 0    1  \n       0 1    0  \n"
		      "       1 0    0  \n       1 1    1  \n--------------------\n";
	cout << XNORstr;
	return XNORstr;
}

string DISPLAY() // Displays all the operators at once
{
	AND(); 
	NAND();
	OR();
	NOR();
	XOR();
	XNOR();
	
	return ANDstr, NANDstr, ORstr, NORstr, XORstr, XNORstr;
}

bool ENTER_BITS(bool output)
{
	cout << "ENTER TWO BITS (seperated by a space)\n => ";
	cin >> a >> b;
	cout << "--------------------\n" <<"You entered = " << a << b << "\n--------------------\n\n";

	output = a & b; // concatenate bits together
	return output;
}

int MENU(int& selection) // Have to call selection by reference
{
    cout << "Currently entered bits: " << a << b << "\n\n";
	cout << "Enter the corresponding number to select option: \n"
		" 1 : Change Bits\n 2 : Display all operators \n 3 : AND\n 4 : NAND\n"
		" 5 : OR\n 6 : NOR\n 7 : XOR\n 8 : XNOR\n 9 : Exit Program\n=> ";
	cin >> selection;
	
	switch (selection)
	{
	case 1: 
		system("CLS");
		cout << flush; // Clears previous stuff displayed on terminal window
		ENTER_BITS(output);
		break;
	case 2: 
		system("CLS");
		cout << flush;
		DISPLAY();
		break;
	case 3: 
		system("CLS");
		cout << flush;
		AND();
	    OPERATION_OUT = (a & b);
		cout << a << " AND " << b << " = " << OPERATION_OUT << "\n--------------------\n\n";
		break;
	case 4:
		system("CLS");
		cout << flush;
		NAND();
		OPERATION_OUT = !(a & b);
		cout << a << " NAND " << b << " = " << OPERATION_OUT << "\n--------------------\n\n";
		break;
	case 5:
		system("CLS");
		cout << flush;
		OR();
		OPERATION_OUT = (a | b);
		cout << a << " OR " << b << " = " << OPERATION_OUT << "\n--------------------\n\n";
		break;
	case 6:
		system("CLS");
		cout << flush;
		NOR();
		OPERATION_OUT = !(a | b);
		cout << a << " NOR " << b << " = " << OPERATION_OUT << "\n--------------------\n\n";
		break;
	case 7:
		system("CLS");
		cout << flush;
		XOR();
		OPERATION_OUT = (a ^ b);
		cout << a << " XOR " << b << " = " << OPERATION_OUT << "\n--------------------\n\n";
		break;
	case 8:
		system("CLS");
		cout << flush;
		XNOR();
		OPERATION_OUT = !(a ^ b);
		cout << a << " XNOR " << b << " = " << OPERATION_OUT << "\n--------------------\n\n";
		break;
	case 9:
		system("CLS");
		cout << flush;
		exit(0);
	}

	return selection;

}


int main()
{
	while (1)
	{
		MENU(selection); // Could have put the whole menu function here but I wanted to practice calling something by reference
	}

	return 0;
}