#include <iostream>
#include <conio.h>

using namespace std ;

int main ()
{
    int arr [5] ;
    int i , length ;

    length = sizeof(arr) / sizeof(int) ;

    for (i=0 ; i<length ; i++)
    {
        cout << "Enter arr[" <<(i+1)<<"] : " ;
        cin >> arr[i] ;
    }

    i = 0 ;

    cout << "\n\nThe array is : " << endl ;
    while (i<length)
    {
        cout << arr[i] << " " ;
        i++ ;
    }

    getch () ;
    return 0 ;
}
