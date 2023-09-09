#include <bits/stdc++.h>
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
            cout<<"Child Class Called..."<<endl;
        }
};

class C : public A
{
    public:
        void funcC()
        {
            cout<<"Child Class Called..."<<endl;
        }
};

class D : public B
{
    public:
        void funcD()
        {
            cout<<"Child of Child Class Called..."<<endl;
        }
};

class E : public B
{
    public:
        void funcE()
        {
            cout<<"Child of Child Class Called..."<<endl;
        }
};

/*
// Hierarchical inheritance looks like

            A
          /   \
         B     C
        / \
        D  E
*/

int main()
{
    A obj1;
    obj1.funcA();
    cout << endl;

    B obj2;
    obj2.funcA();
    obj2.funcB();
    cout << endl;

    C obj3;
    obj3.funcA();
    obj3.funcC();
    cout << endl;

    D obj4;
    obj4.funcD();
    obj4.funcB();
    obj4.funcA();
    cout << endl;

    E obj5;
    obj5.funcE();
    obj5.funcB();
    obj5.funcA();
    cout << endl; 

    return 0;
}
