#include <iostream>
#include <string>
#include <sstream>
#include <stdlib.h> 

using namespace std;

int main()
{
	int i;
	string poop;
	int feeling;
		
	cout << "Enter a fucking integer: ";
	cin >> i;
	cout << "You chose this value " << i << ", seriously lol?\n";
	cout << "Lets double that shitty number " << i * 2 << "\n";
//	while (i<3000) //could use as password for i... interesting
	getline(cin, poop);
	cout << "How do you feel? >";
	getline(cin, poop);
	cout << "Hello " << poop << ", my name is not a pussy lol.\n";
	cout << "Jokes aside, how do you feel out of 10? >";
	getline(cin, poop);
	stringstream(poop) >> feeling;
	cout << "Awh you are feeling only " << feeling << " out of 10?\n";
	
	return 0;
}