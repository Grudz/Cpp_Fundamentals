// io/read-file-sum.cpp - Read integers from file and print sum.
// Fred Swartz 2003-08-20
// My code is based off this guys^^^ but has some minor adjustments


#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main() {
    
    double sum = 0;
    double x;
    string line;
    fstream inFile; // I/O stream
    
    inFile.open("test.txt"); // Opens file
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    
    line = "Can I read this and spit out onto terminal?";
    inFile << line; // Writes text to file
    x = 7.43;
    inFile << x; // Writes integer to file
    sum = sum + x;
    
    inFile.close(); // Note the close here
    
    cout << line << '\n'; 
    cout << "Sum = " << sum << "\n"; // These ouptut the file to the terminal
    
    return 0;
}
