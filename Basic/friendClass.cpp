#include <iostream>
#include <conio.h>

using namespace std ;

class A
{
    private :
        int id ;
        double salary ;

    public :
        friend class Bondhu ;
};

class Bondhu
{
    public :

        void setValue (A& obj , int id , double salary)
        {
            obj.id = id ;
            obj.salary = salary ;
        }

        void print (A& obj)
        {
            cout << "Your personal id : " << obj.id << endl ;
            cout << "Your salary : " << obj.salary << endl ;
        }
};

int main ()
{

    A obj1 ;
    Bondhu obj2 ;

    obj2.setValue(obj1 , 101 , 5000) ;
    obj2.print(obj1) ;

    getch () ;
    return 0 ;
}
