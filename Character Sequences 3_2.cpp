// strings and NTCS:
#include <iostream>
#include <string>
using namespace std;

int main()
{
	char question1[] = "What is your name? ";
	string question2 = "Where do you live? ";
	char answer1[80]; //Shows how a null-terminated C-String is called 
	string answer2; // Shows how a string of undefined size is called

	cout << question1; // Why was interacting with the command line so difficult for me before LOL?
	cin >> answer1;
	cout << question2;
	cin >> answer2;
	cout << "Hello, " << answer1;
	cout << " from " << answer2 << "!\n";

	char myntcs[] = "Now change to NTCS"; // [9] would break it but [30] would be good
	string mystring = myntcs;  // convert c-string to string
	cout << mystring;          // printed as a library string
	cout << "\n"; 
	cout << mystring.c_str();  // printed as a c-string
	cout << "\n";
	cin.get();
	// Notice how the above, the string can be called as a char with an array. C++
	// overloads this and is very adapatable to strings
	return 0;
}