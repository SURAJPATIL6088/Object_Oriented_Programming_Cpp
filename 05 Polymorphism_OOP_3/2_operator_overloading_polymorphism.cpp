#include<bits/stdc++.h>
using namespace std;

class OperatorOverloading
{
    public:
        int a, b;

    public:
        int add()
        {
            return a+b;
        }

    // do theoperator overloading 
    // perform subtractions using + operator
    void operator+ (OperatorOverloading &obj)
    {
        int value1= this->a;
        int value2 = obj.a;

        cout<<"Output = "<<value1 - value2 <<endl;
    }

    // another
    void operator() ()
    {
        cout<<"I am Bracket.."<<endl;
    }
};

int main()
{
    OperatorOverloading obj1, obj2;
    obj1.a = 7;
    obj2.a = 4;
    
    // operator overloading
    obj1 + obj2;

    // another
    obj1();

    return 0;
}