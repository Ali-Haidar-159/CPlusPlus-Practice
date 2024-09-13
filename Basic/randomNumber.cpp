#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <ctime>

using namespace std ;

int main ()
{
    srand(time(0)) ;
    int random = rand () % 6 + 5 ;

    cout << "The random number is : "<< random << endl ;

    getch () ;
    return 0 ;
}
