#include <iostream>
#include <string>
#include <sstream>
#include <stdlib.h> 

using namespace std;

int main()
{
	int i;
	string fun;
	int feeling;
		
	cout << "Enter a fun integer: ";
	cin >> i;
	cout << "You chose this value " << i << ", seriously lol?\n";
	cout << "Lets double that number " << i * 2 << "\n";
//	while (i<3000) //could use as password for i... interesting
	getline(cin, fun);
	cout << "How do you feel? >";
	getline(cin, fun);
	cout << "Hello " << fun << ", my name is Ben lol.\n";
	cout << "Jokes aside, how do you feel out of 10? >";
	getline(cin, fun);
	stringstream(fun) >> feeling;
	cout << "Awh you are feeling only " << feeling << " out of 10?\n";
	
	return 0;
}
