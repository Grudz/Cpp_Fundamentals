#include <iostream> // Literally copies and pastes whats in this at the top of my code
#include <stdio.h>
#include "myint.h" // Includes the header file I made

using namespace std;

int main()
{

	myint m;

	m.set(7);

	cout << "The content of m: " << m.get() << endl;
	cout << "Test";

	cin.get();
}