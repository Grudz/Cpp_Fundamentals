#include <iostream>
#include <string>
#include <sstream>
#include <thread>         // std::this_thread::sleep_for
#include <chrono>         // std::chrono::seconds

//include sizeof funciton

using namespace std;

int main()
{
	bool a;
	bool b;
	string str;
	string astr;
	string bstr;
	
	cout << "AND => a b output\n" << "       0 0    0  \n" << "       0 1    0  \n"; // Digital logic operators
	cout << "       1 0    0  \n" << "       1 1    1  \n";
	cout << "--------------------\n";
	cout << "NAND => a b output\n" << "       0 0    1  \n" << "       0 1    1  \n";
	cout << "       1 0    1  \n" << "       1 1    0  \n";
	cout << "--------------------\n";
	cout << "OR => a b output\n" << "       0 0    0  \n" << "       0 1    1  \n";
	cout << "       1 0    1  \n" << "       1 1    1  \n";
	cout << "--------------------\n";
	cout << "NOR => a b output\n" << "       0 0    1  \n" << "       0 1    0  \n";
	cout << "       1 0    0  \n" << "       1 1    0  \n";
	cout << "--------------------\n";
	cout << "XOR => a b output\n" << "       0 0    0  \n" << "       0 1    1  \n";
	cout << "       1 0    1  \n" << "       1 1    0  \n";
	cout << "--------------------\n";
	cout << "XNOR => a b output\n" << "       0 0    1  \n" << "       0 1    0  \n";
	cout << "       1 0    0  \n" << "       1 1    1  \n";
	cout << "--------------------\n";

	cout << "\nEnter the MSB: ";
	getline(cin, astr); // Way to take input (I don't know why I need to sandwhich these
	stringstream(astr) >> a;
	cout << "Enter the LSB: ";
	cin >> b; // Another way to take user input
	getline(cin, str);
	cout << "\nYou entered " << a << b << " correct?\n";
	getline(cin, str);
	cout << str << " you say? Cool.\n";
	cout << "\nPRESS ENTER TO PERFORM OPERATIONS";
	cin.get();

	cout << "\n--------------------\n\n";
	cout << "     AND =   " << (a & b) << "\n";
	cout << "     NAND =  " << !(a & b) << "\n";
	cout << "     OR =    " << (a | b) << "\n";
	cout << "     NOR =   " << !(a | b) << "\n";
	cout << "     XOR =   " << (a ^ b) << "\n";
	cout << "     XNOR =  " << !(a ^ b) << "\n";
	cin.get();

}
