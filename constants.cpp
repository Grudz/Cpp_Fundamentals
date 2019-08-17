#include <iostream>
using namespace std;

//int main()
//{
//	//declaring variables;
//	int a;
//	int b(0);
//	int answer;
//
//		a = 7;
//		a = 7 - (b + 1);
//		answer = a;
//
//		cout << answer;
//		cin.get();
//
//		return 0;
//}
// initialization of variables
//int a = 5;               // initial value: 5
//int b(3);              // initial value: 3
//int c{ 2 };              // initial value: 2
//int result;            // initial value undetermined
//
//a = a + b;
//result = a - c;
//cout << result;
//cin.get();
//
//return 0;

#include <iostream>
#include <string>
using namespace std;
string boobs;
float a = 7;
const float b = 0.69;
float c;
#define NEWLINE '\n'

int main()
{


	boobs = "Boobs are cool";
	cout << boobs;
	cout << NEWLINE;
	cout << a;
	a = a + b;
	cout << NEWLINE;
	cout << a;

	boobs = "\nBoobs are very cool";
	cout << boobs << endl; // end line = endl
	return 0;
}
//#include <iostream>
//using namespace std;
//
//#define PI 3.14159
//#define NEWLINE '\n' //has to be outside of main
//
//int main()
//{
//	double r = 5.0;               // radius
//	double circle;
//
//	circle = 2 * PI * r;
//	cout << circle;
//	cout << NEWLINE;
//
//}