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

// multilevel inheritance
class Tiger : public Animal
{
    public:
    void callChild(){
        cout<<"Tiger Class is Called...(Child Class)"<<endl;
    }
};

class WB_Tiger : public Tiger{
    public:
    void callChildofChild(){
        cout<<"west bengal tiger Class is Called...(Child of child Class)"<<endl;
    } 
};

int main()
{
    WB_Tiger tg;

    tg.callParent();
    cout<<"Name : "<<tg.setName("Tiger")<<endl;
    cout<<"Age : "<<tg.setAge(25)<<endl;
    
    // child class
    tg.callChild();

    // child of child class
    tg.callChildofChild();
    cout<<endl;
    return 0;
}