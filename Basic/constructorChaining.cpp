#include <iostream>
#include <conio.h>

using namespace std ;

class Person
{
    public :
        int id ;
        int age ;
        double salary ;

        Person ()
        {
            cout << "this is default constructor" << endl ;
        }

        Person (int id)
        {
            this->id = id ;
        }

        Person(int id , int age) : Person(id) //constructor chaining
        {
            this->age = age;
        }

        Person (int id , int age , double salary) : Person (id , age)
        {
            this->salary = salary ;
        }

        void print ()
        {
            cout << "Id is : " << id << endl ;
            cout << "Age is : " << age << endl ;
            cout << "Salary is : " << salary << endl ;
        }
};

int main ()
{
    Person p1 (101,20,5000) ;
    p1.print() ;

    getch () ;
    return 0 ;
}
