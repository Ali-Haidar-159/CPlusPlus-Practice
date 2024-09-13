#include <iostream>
#include <conio.h>

using namespace std ;

class Person
{
    public :
        int id ;
        int age  ;

        Person ()
        {

        }

        Person (int i , int a)
        {
            id = i ;
            age = a ;
        }

        virtual void msg ()
        {
            cout << "This is Person class" << endl ;
        }

};


class Teacher : public Person
{
    // id , age , msg ()

    public :
        double salary ;

        Teacher ()
        {

        }

        Teacher (double s)
        {
            salary = s ;
        }

        void msg ()
        {
            cout << "This is Teacher class" << endl ;
        }

};

int main ()
{
    Teacher t1 ;
    Person *p1 ;

    p1 = &t1 ; //parent class ref type variable a child class er obj
                      // er Address rakhlm ___ polymorphism concept
    p1 -> msg() ;

    getch () ;
    return 0 ;
}
