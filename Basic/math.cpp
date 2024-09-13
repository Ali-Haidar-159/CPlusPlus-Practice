#include <iostream>
#include <conio.h>

using namespace std ;

int main ()
{
    int n1 , n2 ;

    cout << "Enter number 1 : " ;
    cin >> n1 ;
    cout << "Enter number 2 : " ;
    cin >> n2 ;

    int sum=0 , sub=0 , multi=1 ;
    double div = 0;

    sum = n1 + n2 ;
    sub = n1 - n2 ;
    div = (double)n1 / n2 ;
    multi = n1 *  n2 ;

    cout << "\n\nThe sum is : " << sum << endl ;
    cout << "The sub is : " << sub << endl ;
    cout << "The division is : " << div << endl ;
    cout << "The multiplication is : " << multi << endl ;

    getch () ;
    return 0 ;
}
