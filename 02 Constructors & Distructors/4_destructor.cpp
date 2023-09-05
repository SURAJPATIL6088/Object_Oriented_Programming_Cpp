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

        ~Parameterized_Constructor()
        {
            cout<<"Destructor is Called !!"<<endl;
        }
};

int main()
{
    // calling class object
    // static allocation
    Parameterized_Constructor dc("Suraj Patil");
    dc.PrintData();

    // dynamic allocation
    Parameterized_Constructor *dc1 = new Parameterized_Constructor("Bhushan Patil");
    (*dc1).PrintData();
    return 0;
}