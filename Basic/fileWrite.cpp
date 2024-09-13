#include <iostream>
#include <conio.h>
#include <fstream>

using namespace std ;

int main ()
{
    ofstream file ;
    file.open ("Test.txt" , ios::out|ios::app) ;

    int id ;
    double salary ;

    cout << "Enter your id : " ;
    cin >> id ;
    cout << "Enter your salary : " ;
    cin >> salary ;

    file << id <<  " " << salary << endl ;

    file.close() ;

    cout << "file write complete" << endl ;

    cin.ignore () ;
}
