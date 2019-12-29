// 11/27/19 - Ben Grudzien

// This is very similar to my previous project relative to output. However, this code uses pointers, data structures
// and dynamic arrays.

#include <iostream>
#include <stdio.h>
#include <stdlib.h> // Allows the flush funciton, clears the terminal screen
#include <string>
#include <sstream> // Converts the string input from the user to a boolean value
#include <string>
#include <vector> // Dynamic array library



using namespace std;

int selection;
int * s_ptr;
int n = 1;

string mystr;

bool a;
bool b;
bool output; // Stores bits to be operated on
bool OPERATION_OUT; // Stores operation values

vector<int> history; // dynamic array basically

struct operation { // data structure
	string all_ops;
} AND, NAND, OR, NOR, XOR, XNOR;


void print_operations(operation display)
{
	cout << display.all_ops; // uses data structure to display variables
}

void display_all()
{
	print_operations(NAND);
	print_operations(OR);
	print_operations(NOR);
	print_operations(XOR);
	print_operations(XNOR);
	print_operations(AND);
}

void Previous_Bits()
{
	int h = 1;

	for (int n : history)
	{
		cout << n;

		if (h % 2 == 0) // Formats how history is displayed
		{
			cout << "\n";
	    }

		h++;

	}

	cout << "\n";
}

int main()
{

	//void clear() noexcept; // Clears history from past executions

	s_ptr = &selection;

	bool * a_ptr;
	a_ptr = &a;

	bool * b_ptr;
	b_ptr = &b;

	bool * out_ptr;
	out_ptr = &output;

	bool * op_ptr;
	op_ptr = &OPERATION_OUT;

	AND.all_ops = "AND => a b output\n       0 0    0  \n       0 1    0  \n"
		"       1 0    0  \n       1 1    1  \n--------------------\n";

	NAND.all_ops = "NAND => a b output\n       0 0    1  \n       0 1    1  \n"
		"       1 0    1  \n       1 1    0  \n--------------------\n";

	OR.all_ops = "OR => a b output\n       0 0    0  \n       0 1    1  \n"
		"       1 0    1  \n       1 1    1  \n--------------------\n";

	NOR.all_ops = "NOR => a b output\n       0 0    1  \n       0 1    0  \n"
		"       1 0    0  \n       1 1    0  \n--------------------\n";

	XOR.all_ops = "XOR => a b output\n       0 0    0  \n       0 1    1  \n"
		"       1 0    1  \n       1 1    0  \n--------------------\n";

	XNOR.all_ops = "XNOR => a b output\n       0 0    1  \n       0 1    0  \n"
		"       1 0    0  \n       1 1    1  \n--------------------\n";

	char characters[10];
	while (1)
	{
		cout << "Currently entered bits: " << *a_ptr << *b_ptr << "\n\n";
		cout << "Enter the corresponding number to select option: \n"
			" 1 : Change Bits\n 2 : Display all operators \n 3 : AND\n 4 : NAND\n"
			" 5 : OR\n 6 : NOR\n 7 : XOR\n 8 : XNOR\n 9 : History\n 10: Exit Program\n=> ";
		cin >> *s_ptr; // selects new option

		switch (*s_ptr)
		{
		case 1:
			system("CLS");
			cout << flush; // Clears previous stuff displayed on terminal window
			cout << "ENTER TWO BITS (seperated by a space)\n => ";
			cin >> *a_ptr >> *b_ptr;
			cout << "--------------------\n" << "You entered = " << *a_ptr << *b_ptr << "\n--------------------\n\n";

			mystr = *a_ptr;
			mystr += " ";
			mystr += *b_ptr;
			mystr += "\n";

			history.push_back(*a_ptr); // stores previoulsy entered bits
			history.push_back(*b_ptr);

			break;

		case 2:
			system("CLS");
			cout << flush; // Clears previous stuff displayed on terminal window
			display_all();
			break;

		case 3:
			system("CLS");
			cout << flush; // Clears previous stuff displayed on terminal window
			print_operations(AND);
			*op_ptr = (*a_ptr & *b_ptr);
			cout << *a_ptr << " AND " << *b_ptr << " = " << *op_ptr << "\n--------------------\n\n";
			break;

		case 4:
			system("CLS");
			cout << flush; // Clears previous stuff displayed on terminal window
			print_operations(NAND);
			*op_ptr = !(*a_ptr & *b_ptr);
			cout << *a_ptr << " NAND " << *b_ptr << " = " << *op_ptr << "\n--------------------\n\n";
			break;

		case 5:
			system("CLS");
			cout << flush; // Clears previous stuff displayed on terminal window
			print_operations(OR);
			*op_ptr = (*a_ptr | *b_ptr);
			cout << *a_ptr << " OR " << *b_ptr << " = " << *op_ptr << "\n--------------------\n\n";
			break;

		case 6:
			system("CLS");
			cout << flush; // Clears previous stuff displayed on terminal window
			print_operations(NOR);
			*op_ptr = !(*a_ptr & *b_ptr);
			cout << *a_ptr << " NOR " << *b_ptr << " = " << *op_ptr << "\n--------------------\n\n";
			break;

		case 7:
			system("CLS");
			cout << flush; // Clears previous stuff displayed on terminal window
			print_operations(XOR);
			*op_ptr = (*a_ptr ^ *b_ptr);
			cout << *a_ptr << " XOR " << *b_ptr << " = " << *op_ptr << "\n--------------------\n\n";
			break;

		case 8:
			system("CLS");
			cout << flush; // Clears previous stuff displayed on terminal window
			print_operations(XNOR);
			*op_ptr = !(*a_ptr ^ *b_ptr);
			cout << *a_ptr << " XNOR " << *b_ptr << " = " << *op_ptr << "\n--------------------\n\n";
			break;

		case 9:
			system("CLS");
			cout << flush; // Clears previous stuff displayed on terminal window
			cout << "Previously Entered Bits (Oldest to Newest)\n";
			Previous_Bits();
			break;

		case 10:
			exit(0);
		}

	}
	return 0;
}
