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
        void funcB()
        {
            cout<<"Child Class of A is Called..."<<endl;
        }
};

class C : public A, public B
{
    public:
        void funcC()
        {
            cout<<"Child Class of A is Called && also inherited by class B"<<endl;
        }
};

/*
// Hybrid inheritance looks like

class A is parent node
class B is inherited by class A, 
class C is inherited by class A & class B
            A
          /   \
         B     C
          \   /
           ---
*/

int main()
{
    A obj1;
    obj1.funcA();
    cout<<endl;

    B obj2;
    obj2.funcB();   
    obj2.funcA();
    cout<<endl;

    C obj3;
    obj3.funcB();   
    obj3.funcC();
    cout<<endl;

    return 0;
}
