#include <iostream>
#include <conio.h>

using namespace std ;

void gradeSystem (int mark , char ch)
{
    if (mark >= 80)
        cout << "You got A+" <<endl ;
    else if (mark >=60 && mark <80)
        cout << "You got B+" << endl ;
    else if (mark >= 40 && mark < 60)
        cout << "You got C+" << endl ;
    else
        cout << "You failed" << endl ;

    switch(ch)
    {
    case 'x' :
        cout << "The char is X" ;
        break ;
    case 'y' :
        cout << "The char is Y" ;
        break ;
    case 'z' :
        cout << "The char is Z" ;
        break ;
    default :
        cout << "This char is missing in the list" ;
    }
}

int main ()
{
    int mark ;
    char ch ;

    cout << "Enter your mark : " ;
    cin >> mark ;
    cout << "Enter a character : " ;
    cin >> ch ;

    gradeSystem(mark , ch) ;

    getch () ;
    return 0 ;
}
