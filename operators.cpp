#include <iostream>
using namespace std;

int main()
{
	int a, b;
	int c = 1;

	a = 7;
	b = 3;
	++a;
	b += a;

	cout << "This is b and it equals ";
	cout << b;
	cout << "\nBool value c equals ";
	cout << c;

	b == 12 ? c = 7 : c = 69;

	cout << "\na = ";
	cout << a;
	cout << "\nThis is b and it equals ";
	cout << b;
	cout << "\nBool value c equals ";
	cout << c;
	cin.get();
}