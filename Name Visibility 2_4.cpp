#include <iostream>
#include <string>

using namespace std; 

namespace hair
{
	int greg() { return 50; } //need that () for some reason if it's formated like this
	int waffle = 4;
}

namespace car
{
	double whip = 67.4; //compare to formating above, can do it both ways (Notice the middle bar declaring the scope when you click in this area)
	int waffle = 4000000;
}

int main() {

	{
		cout << "Quick waffle: \n";
		using namespace car;
		cout << waffle << "\n"; // Could put this lower but I declared waffle as 10 below this, now it will always be 10 even if I lower this
		using hair::waffle;
		cout << waffle << "\n";
	} 

	cout << "\n---------------------------------------------------\n\n";

	int waffle = 10;
	int cart = 20;

	{
		int waffle; 
		waffle = 7; // waffle in the inner scope is now my favorite number
		cart = 9000; // This will affect the outer scope as well

			cout << "Inner block => \n";
			cout << waffle << "\n"; // output will be 7
			cout << cart << "\n"; // output will be 9000
	}

	cout << "\nOuter block => \n";
	cout << waffle << "\n"; // output will be 10
	cout << cart << "\n"; // output will be 9000 still because cart wasn't re-declared in that local block

	cout << "\n---------------------------------------------------\n\n"; // code below this refers to the two namespaces above

	cout << "Referring to the namespaces here\n";
	cout << hair::greg() << "\n";
	cout << car::whip << "\n";

	cout << "\n---------------------------------------------------\n\n";

	cout << "Different ways to output a waffle (other than a toaster LOL)\n";
	cout << waffle << "\n";
	cout << car::waffle << "\n"; // notice how the car waffle refers to the namespace and the value above is the global setting

	cout << "\n---------------------------------------------------\n\n";
	



	cin.get(); // so that "press any key to continue" doesn't show up in the console
}