#include<bits/stdc++.h>
using namespace std;

class Parameterized_Constructor
{
    private:
        string Name;

    public:
        // Parameterized Constructor
        Parameterized_Constructor(string Name)
        {
            this->Name = Name;
            cout<<"this : "<<this<<endl;  // it gives the address of these block
            cout<<"Parameterized Constructor is Called !!"<<endl;
        }

        string getName()
        {
            return Name;
        }

        void setName(string n)
        {
            Name = n;
        } 

        void PrintData()
        {
            cout<<"Name : "<<Name<<endl;
        }  
};

int main()
{
    // calling class object
    Parameterized_Constructor dc("Suraj Patil");
    
    cout<<"Address of dc : "<<&dc<<endl;
    dc.PrintData();

    return 0;
}