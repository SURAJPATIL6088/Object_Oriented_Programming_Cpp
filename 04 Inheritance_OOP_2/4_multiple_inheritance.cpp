#include<bits/stdc++.h>
using namespace std;

class Animal
{
    public:
    string Name;
    int age;

    public:
    void callAnimal(){
        cout<<"Animal Class is Called...."<<endl;
    }

    string setName(string n){
        return this->Name = n;
    }

    int setAge(int a){
        return this->age = a;
    }
};

class Human
{
    public:
    void callHuman(){
        cout<<"Human Class is Called...."<<endl;
    }
};

// multilevel inheritance
class Hybrid: public Animal, public Human 
{
    public: 
    void callHybrid(){
        cout<<"Hybrid Class is called...."<<endl;
    }
};

int main()
{
    Hybrid hy;

    // class 1 call
    hy.callAnimal();

    // class 2 call
    hy.callHuman();

    // calling multiple inheritance class
    // hybrid class call
    hy.callHybrid();

    cout<<endl;
    return 0;
}