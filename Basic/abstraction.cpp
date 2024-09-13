#include <iostream>
#include <conio.h>

using namespace std ;

class Person
{
    public :

        virtual void message () = 0 ; // pure virtual fun / abstract function

        virtual void printName ()
        {
            cout << "this is normal fuction" << endl ;
        }
};

class Teacher  : public Person
{
    public :
     void message ()
    {
        cout << "this is virtual function" << endl ;
    }

     void printName ()
        {
            cout << "Ali Haidar" << endl ;
        }
};

int main ()
{

    Person *ptr = NULL ;
    Teacher t1 ;
    ptr = &t1 ;
    ptr -> message () ;
    ptr -> printName () ;

    getch () ;
    return 0 ;
}
