#include <iostream>
#include <conio.h>

using namespace std ;

class Person
{
    public :
        Person ()
        {
            cout << "Constructor is called " << endl ;
        }

        ~Person ()
        {
            cout << "Destructor is called" << endl ;
        }

        void msg ()
        {
            cout << "This is function" << endl ;
        }

};

int main ()
{
    Person p1 ;
    p1.msg () ;

    return 0 ;
}
