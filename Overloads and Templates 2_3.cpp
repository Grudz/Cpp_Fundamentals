#include <iostream>
#include <string>

using namespace std;

int Epic_Gamer(int x, int y = 1)
{
	return(2*x + y);
}

double Epic_Gamer(double x, double y)
{
	return(x / y);
}

template <class T>
T sum(T a, T b)
{
	T result; // T is a variable assigned to the type, I think... kinda variableICEPTION like idk
	result = a + b;
	return result;
}

template <class P, class U>
 P test(P a, U b)
{
	P result; // If put U here instead of P, the output would be 5, not 5.5
	result = a + b;
	return result;
}

template <class T, class U>
 int are_equal(T a, U b) // straight up type, it can also be called bool, unsure about the parameters of this
 {
	 return (a == b);
 }

template <class T, int nachos> // Non-Type template argument
 T fixed_sub(T val)
 {
	 return val - nachos;
 }


int main()
{
	int x = 9000, y = 7; // For Epic_Gamer
	double r = 7.7, t = 9.9000;

	int i = 5, j = 6, k; // For Template
	double f = 2.0, g = 0.5, h;
	
	cout << "This next two outputs have the same name but pass different variables values and types\n";
	cout << Epic_Gamer(500, x) << "\n"; // x is passed as 9000 here
	cout << Epic_Gamer(500) << "\n"; //  y, in the function, is defaulted to 1
	cout << Epic_Gamer(r, t) << "\n\n";


		//k = sum<int>(i, j);
		//h = sum<double>(f, g);

		//cout << k << '\n';
		//cout << h << '\n\n';

		k = sum(i, j);
		h = test<double, int>(g, i);

		cout << k << "\n";
		cout << h << "\n\n";

		if (are_equal(10, 10.1))
			cout << "x and y are equal\n"; // interesting use of template here
		else
			cout << "x and y are not equal\n\n";

		cout << fixed_sub<int, 200>(20) << '\n'; //  fixed_sub<int, nachos>(val)
		cout << fixed_sub<int, 3>(10) << '\n';
		cout << fixed_sub<int, 83>(1000000) << '\n';

	   cin.get();

	return 0; //implicit I guess, don't need this but "good practice"
}