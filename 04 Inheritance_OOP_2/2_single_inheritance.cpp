#include<bits/stdc++.h>
using namespace std;

class Animal
{
    public:
    string Name;
    int age;

    public:
    void callParent(){
        cout<<"Animal Class is Called...(Parent Class)"<<endl;
    }

    string setName(string n){
        return this->Name = n;
    }

    int setAge(int a){
        return this->age = a;
    }
};

// single inheritance
class Tiger : public Animal
{
    public:
    void callChild(){
        cout<<"Tiger Class is Called...(Child Class)"<<endl;
    }
};

int main()
{
    Tiger tg;

    tg.callParent();
    cout<<"Name : "<<tg.setName("Tiger")<<endl;
    cout<<"Age : "<<tg.setAge(25)<<endl;
    tg.callChild();
    
    return 0;
}