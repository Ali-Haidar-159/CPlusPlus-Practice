#include <iostream>
#include <conio.h>


using namespace std ;

class Person
{
    public :
        const int age ;
        const int id ;
        double salary ;

        Person (int a , int i , double s)
        :age(a),id(i) // construtor initializer list
        {
            salary = s ;
        }

        ~Person ()
        {
            cout << "Destructor is called" << endl ;
        }

        void display ()
        {
            cout << "Age : " << age << endl ;
            cout << "Id : " << id << endl ;
            cout << "Salary : " << salary << endl ;
        }

};

int main ()
{
    Person p1 (20,101,5000) ;
    p1.display () ;

    getch () ;
    return 0 ;
}
