// different ways to call functions with examples
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

void print(); // creating function before describing it

int addition(int a, int b = 1)
{
	int r;
	r = a + b;
	return r; // void functions don't need to return anything
}

void subtraction_ref(int& c, int& d)
{
	c += 1;
	d *= 10;
}

void subtraction_val(int c, int d)
{
	c += 1;
	d *= 10;
}

string concatenate(const string& a, const string& b)
{
	cout << a + b;
	return a + b;
}

long factorial(long p) //to demonstrate recursivity
{
	if (p > 1)
		return (p * factorial(p - 1));
	else
		return 1;
}

int main()
{
	string c = "\n\nDid this work?\n";
	string d = "Yes, it worked... again!\n\n";

	int x = 7;
	int y = 2;
	int z;


	print(); // calling function not described yet

	z = addition(5, 1);
	cout << "The first result is " << z;
	z = addition(x, 9); //notice how this overides b
	cout << "\nThe second result is " << z;
	z = addition(x); //b takes it's assinged value
	cout << "\nThe third result is " << z;
	z = addition(10); //b takes it's assinged value and a becomes 7
	cout << "\nThe fourth result is " << z << "\n";

	//passing arguments comparing reference vs value
	subtraction_val(x, y);
	cout << "\nThe value result is " << x << ", " << y; //x and y remain the same
	subtraction_ref(x, y);
	cout << "\nThe reference result is " << x << ", " << y;
	subtraction_val(x, y);
	cout << "\nThe 2nd value result is " << x << ", /n" << y; //notice how a new value was assigned to x and y after the above statement

	concatenate(c, d);

	long crazyfunk = 7; //factorial example to demonstrate recursivity
	cout << crazyfunk << "! = " << factorial(crazyfunk);

	cin.get();
	return 0;
}

void print()
{
	cout << "It worked! YES!\n\n";
}