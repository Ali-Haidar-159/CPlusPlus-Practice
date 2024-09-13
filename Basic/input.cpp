#include <iostream>
#include <conio.h>

using namespace std ;

int main ()
{
    int id ;
    double salary ;
    char grade ;

    //input values from user or console
    cout << "Enter your id : " ;
    cin >> id ;
    cout << "Enter your salary : " ;
    cin >> salary ;
    cout << "Enter your job grade : " ;
    cin >> grade ;

    cout << "\nPerson Details : " << endl << endl ;

    cout << "id : " << id << endl ;
    cout << "Salary : " << salary << endl ;
    cout << "Grade : " << "\'" << grade << "\'" <<endl ;

    getch() ;
    return 0 ;
}
