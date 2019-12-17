#include <iostream>
#include <string>
#include <sstream>
using namespace std;

//struct movies_t {
//  string title;
 // int year;
//} mine, yours;

//void printmovie (movies_t movie);

//int main ()
//{
//  string mystr;

 // mine.title = "Miracle";
//  mine.year = 2004;

//  cout << "Enter title: ";
 // getline (cin,yours.title);
 // cout << "Enter year: ";
 // getline (cin,mystr);
 // stringstream(mystr) >> yours.year;

 // cout << "My favorite movie is:\n ";
//  printmovie (mine);
//  cout << "And yours is:\n ";
//  printmovie (yours);
 // return 0;
//}

//void printmovie (movies_t movie) // Note how only Mine/Yours is passed, compare that to (movies_t movie)
//{
  //cout << movie.title;
 // cout << " (" << movie.year << ")\n";
//}


//struct movies_t {
//  string title;
 // int year;
//} films [3];

//void printmovie (movies_t movie);

//int main ()
//{
 // string mystr;
 // int n;

 // for (n=0; n<3; n++)
 // {
 //   cout << "Enter title: ";
 //   getline (cin,films[n].title);
 //   cout << "Enter year: ";
 //   getline (cin,mystr);
 //   stringstream(mystr) >> films[n].year;
 // }

 // cout << "\nYou have entered these movies:\n";
//  for (n=0; n<3; n++)
//    printmovie (films[n]);
//  return 0;
//}

//void printmovie (movies_t movie)
//{
 // cout << movie.title;
 // cout << " (" << movie.year << ")\n";
//}

struct movies_t {
  string title;
  int year;
};

int main ()
{
  string mystr;

  movies_t amovie;
  movies_t * pmovie; // Set up pointer
  pmovie = &amovie; // Address pointer

  cout << "Enter title: ";
  getline (cin, pmovie->title); // This arrow can onl be used with pointers to objects with members
  cout << "Enter year: ";
  getline (cin, mystr);
  (stringstream) mystr >> pmovie->year;

  cout << "\nYou have entered:\n";
  cout << pmovie->title;
  cout << " (" << pmovie->year << ")\n";

  return 0;
}
