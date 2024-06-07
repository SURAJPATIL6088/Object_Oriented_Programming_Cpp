#include<bits/stdc++.h>
using namespace std;

class Base
{
    public:
        // if it inherited by the another class then at the time of run-time compiling it wont print 
        virtual int print()
        {
            cout<<"This is Base class's print function"<<endl;
        }

        int display()
        {
            cout<<"This is Base class's display function"<<endl;
        }
};

class Derived : public Base
{
    public:
        int print()
        {
            cout<<"This is Derived class's print function"<<endl;
        }

        int display()
        {
            cout<<"This is Derived class's display function"<<endl;
        }
};

int main()
{
    // Without Virtual 
    // if we do not use the virtual keyword then it runs the base class member functions 
    // even we are storing the address of the derived class it does not changes at the run-time complilation
    /*
    Output :
    This is Base class's print function
    This is Base class's display function
    */
  
    Base *bs;
    Derived d;
  
    bs = &d;
    bs->print();
    bs->display();
  
    // With Virtual 
    // if we use the virtual keyword then it runs the derived class member functions 
    // even we are storing the address of the derived class it changes at the run-time complilation

    // here we are applying virtual to the print member function of the Base Class
    /*
    Output :
    This is Derived class's print function
    This is Base class's display function
    */
    return 0;
}
