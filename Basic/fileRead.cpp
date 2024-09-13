
#include <iostream>
#include <conio.h>
#include <fstream>
#include <string>

using namespace std ;

int main ()
{
    ifstream file("Test.txt") ;

    string line ;

    while (getline(file,line))
    {
        cout << line << endl ;
    }

    file.close() ;

    cout << "file read  complete" << endl ;

    cin.ignore () ;
}
