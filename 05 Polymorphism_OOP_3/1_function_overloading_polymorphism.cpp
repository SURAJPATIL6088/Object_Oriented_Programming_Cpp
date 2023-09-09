#include <bits/stdc++.h>
using namespace std;

class A 
{
    public:
        void sayHello()
        {
            cout<<"Hii, i am Suraj Patil"<<endl;
        }

        void sayHello(string name)
        {
            cout<<"Hii, i am "<<name<<endl;
        }

        void sayHello(string name, int age)
        {
            cout<<"Hii, i am "<<name<<endl<<age<<" years Old.";
        }

        void sayHello(string name, int age, string city)
        {
            cout<<endl<<"Hii, i am "<<name<<endl<<age<<" years Old."<<endl<<"Living in "<<city<<endl;
        }
};

int main()
{
    A obj1;
    obj1.sayHello();
    cout<<endl;

    obj1.sayHello("Suraj Patil", 21);
    cout<<endl;

    obj1.sayHello("Suraj Patil", 21, "Banglore");
    cout << endl;

    return 0;
}
