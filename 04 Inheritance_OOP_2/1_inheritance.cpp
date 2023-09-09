#include<bits/stdc++.h>
using namespace std;

class Human
{
    public:
    int height;
    int weight;
    int age;

    public:
    int setAge(int a)
    {
        return this->age = a;
    }

    int setWeight(int w)
    {
        return this->weight = w;
    }

    int setHeight(int h)
    {
        return this->height = h;
    }
};

class Male : public Human
{
    public:
    string color;

    void callme()
    {
        cout<<"Hiii, Male Class Here...."<<endl;
    }
};

int main()
{
    Male Objmale;

    cout<<"Age : "<<Objmale.age<<endl;
    cout<<"Height : "<<Objmale.height<<endl;
    cout<<"Height : "<<Objmale.weight<<endl;
    Objmale.callme();
    cout<<endl<<"Age : "<<Objmale.setAge(23)<<endl;
    cout<<"Height : "<<Objmale.setHeight(6)<<endl;
    cout<<"Height : "<<Objmale.setWeight(49)<<endl;

    return 0;

}
