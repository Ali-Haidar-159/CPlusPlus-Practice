#include <iostream>
#include <conio.h>

using namespace std ;

class Person
{
    public :

        int id ;
        double salary ;

        Person ()
        {

        }

        Person (int i , double s)
        {
            id = i ;
            salary = s ;
        }

        void setValue (int i , double s)
        {
            id = i ;
            salary = s ;
        }

        void display ()
        {
            cout << "\nYour id : " << id << endl ;
            cout << "your salary : " << salary << endl ;
        }
};

int main ()
{
    Person p1 ;
    p1.id = 101 ;            //manually initialize
    p1.salary = 5000 ;
    p1.display () ;

    Person p2 ;
    p2.setValue(102,10000) ;   //function er maddhome initialize
    p2.display () ;

    Person p3 (103 , 15000) ;  //Constructor er maddhome initialize
    p3.display () ;

    getch () ;
    return 0 ;
}
