#include <iostream>
#include <conio.h>

using namespace std ;

int main ()
{
    int num1 , num2 ;
    int *ptr1 , *ptr2 ;

    ptr1 = &num1 ;
    ptr2 = &num2 ;

    cout << "Enter first number : " ;
    cin >> num1 ;

    cout << "Enter second number : " ;
    cin >> num2 ;

    int sum=0 ;

    sum = *ptr1 + *ptr2 ;


    cout << "sum is : " << sum << endl ;

    getch () ;
    return 0 ;
}
