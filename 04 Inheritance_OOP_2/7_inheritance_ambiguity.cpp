#include<bits/stdc++.h>
using namespace std;

class A
{
    public:
        void funcA()
        {
            cout<<"Parent Class Called..."<<endl;
        }
};

class B : public A
{
    public:
        void funcA()
        {
            cout<<"Child Class of A is Called..."<<endl;
        }
};

class C : public A
{
    public:
        void funcA()
        {
            cout<<"Child Class of A is Called && also inherited by class B"<<endl;
        }
};

int main()
{
    A obj1;
    obj1.funcA();
    cout<<endl;

    B obj2;
    obj2.funcA();
    cout<<endl;

    C obj3;  
    obj3.funcA();
    cout<<endl;

    return 0;
}
