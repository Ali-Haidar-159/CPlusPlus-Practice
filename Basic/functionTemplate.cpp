#include <iostream>
#include <conio.h>

using namespace std ;

int add (int x , int y)
{
    return x+y ;
}

double add2 (double x , double y)
{
    return x+y ;
}

//function templates :

template <class ali>
ali addAll(ali x , ali y)
{
    return x+y ;
}

int main ()
{
    cout << "call add fun : " << add(10.5,5.55555) << endl ;
    cout << "call add2 fun : " << add2(20.58,15.69) << endl << endl  ;

    cout << "call add fun : " << addAll(10,5) << endl ;
    cout << "call add2 fun : " << addAll(20.58,15.69) << endl ;


    cin.ignore () ;
    return 0 ;
}
