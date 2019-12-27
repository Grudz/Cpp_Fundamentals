// example about structures
#include <iostream>
#include <stdio.h>
#include <stdlib.h> // Allows the flush funciton, clears the terminal screen
#include <string>
#include <sstream> // Converts the string input from the user to a boolean value

using namespace std;

int selection;

bool a; 
bool b;
bool output; // Stores bits to be operated on
bool OPERATION_OUT; // Stores operation values

struct operation {
  string all_ops;
} AND, NAND, OR, NOR, XOR, XNOR;


void print_operations (operation display)
{
  cout << display.all_ops;
}

int main ()
{
    int * s_ptr; // Couldn't declare this globally
    s_ptr = &selection;
    
    bool * a_ptr; 
    a_ptr = &a;
    
    bool * b_ptr; 
    b_ptr = &a;
    
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
		     
	while(1)
	{
    cout << "Currently entered bits: " << *a_ptr << *b_ptr << "\n\n";
	cout << "Enter the corresponding number to select option: \n"
		" 1 : Change Bits\n 2 : Display all operators \n 3 : AND\n 4 : NAND\n"
		" 5 : OR\n 6 : NOR\n 7 : XOR\n 8 : XNOR\n 9 : History\n 10: Exit Program\n=> ";
	cin >> *s_ptr ;

    switch (*s_ptr )
{   
    case 1:
        cout << "ENTER TWO BITS (seperated by a space)\n => ";
	    cin >> *a_ptr >> *b_ptr;
	    cout << "--------------------\n" <<"You entered = " << *a_ptr << *b_ptr << "\n--------------------\n\n";

	    *out_ptr = *a_ptr & *b_ptr; // concatenate bits together
        break;
    case 2:
        print_operations (NAND);
        print_operations (OR);
        print_operations (NOR);
        print_operations (XOR);
        print_operations (XNOR);
        print_operations (AND);
        break;
    case 3:
        print_operations (AND);
        *op_ptr = (*a_ptr & *b_ptr);
        cout << *a_ptr << " AND " << *b_ptr << " = " << *op_ptr << "\n--------------------\n\n";
        break;
        
    case 4:
        print_operations (NAND);
        *op_ptr = !(*a_ptr & *b_ptr);
        cout << *a_ptr << " NAND " << *b_ptr << " = " << *op_ptr << "\n--------------------\n\n";
        break;
        
    case 5:
        print_operations (OR);
        *op_ptr = (*a_ptr | *b_ptr);
        cout << *a_ptr << " OR " << *b_ptr << " = " << *op_ptr << "\n--------------------\n\n";
        break;
        
    case 6:
        print_operations (NOR);
        *op_ptr = !(*a_ptr & *b_ptr);
        cout << *a_ptr << " NOR " << *b_ptr << " = " << *op_ptr << "\n--------------------\n\n";
        break;
        
    case 7:
        print_operations (XOR);
        *op_ptr = (*a_ptr ^ *b_ptr);
        cout << *a_ptr << " XOR " << *b_ptr << " = " << *op_ptr << "\n--------------------\n\n";
        break;
        
    case 8:
        print_operations (XNOR);
        *op_ptr = !(*a_ptr ^ *b_ptr);
        cout << *a_ptr << " XNOR " << *b_ptr << " = " << *op_ptr << "\n--------------------\n\n";
        break;        
        
    case 9:
       // History(); Store Operation_Out bits in an array
        break;
    case 10:
        exit(0);
}

}
  return 0;
}

