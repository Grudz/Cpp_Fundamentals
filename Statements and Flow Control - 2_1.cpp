#include <iostream>
#include <string>
using namespace std;

int main()
{
	//int x = 200;

	//if (x == 100)
	//{
	//	cout << "x is 100";		
	//}
	//else
	//{
	//	cout << "x is not 100";
	//}

	//cin.get();

	//int n = 0;

	//while (n <= 10)
	//{
	//	cout << n << " \n";
	//	n += 1; // ++n works too			
	//}

	//cout << "n is 10";

	
	//int z = 1; // nested if statement possibility in the future

	string str;
	int dawg = 7;
	
	switch (dawg)
	{
	case 1:
		cout << "dawg is 1\n";
		break;
	case 7:
		cout << "dawg is 7\n";
		break; // without this, the string below would also output

	default:
		cout << "dawg is not 1 or 7\n";
	}

	for (dawg = 9000; dawg <= 9009; dawg+=1)
	{
		cout << "Dawg = ";
		cout << dawg << "\n";
	}

	do {
		cout << "Enter LEAVE if you want to exit this potentially inifinite loop\n";
		getline(cin, str);
		cout << "Your typed => " << str << "\n";

	} while (str != "LEAVE"); // If string = LEAVE the loop will end

	cin.get();


}
