#include <iostream>
#include <conio.h>

using namespace std ;

int main ()
{
    int originalVariable = 20 ;
    int& reff = originalVariable ;

    cout << "Before change : " << originalVariable << endl ;

    reff = 100 ;

    cout << "After change : " << originalVariable << endl ;

    getch () ;
    return 0 ;
}
