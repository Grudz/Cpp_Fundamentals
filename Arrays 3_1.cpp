#include <iostream>
using namespace std;

//int burger[3] = { 1, 2, 3 }; // if burger is called here then burger[3] = y = 9 somehow

int y = 9;
int n, result1, result2 = 0;

int burger[] = { 1, 2, 3};
int cool[] = { 7, y, 4 };

int main()
{
	for (n = 0; n<3; ++n) // This loop adds the values of the array together
	{
		result1 += burger[n];
	}
	cout << "Burger Array = " << result1 << "\n";
	cout << "Values of Burger Array = " << burger[0] << " " << burger[1] << " " 
	<< burger[2] << " " << burger[3] << " "; // note how burger[3] is 0 but array size increased

	cout << "\nCool = " << cool[1]; // calls y in the array 
	
	return 0;
}
