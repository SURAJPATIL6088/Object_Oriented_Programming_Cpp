#include<bits/stdc++.h>
using namespace std;

class Copy_Constructor
{
    private:
        string Name;
        string Course;

    public:

        Copy_Constructor(string Name, string Course)
        {
            cout<<"Parameterized Constructor is Called !!"<<endl;
            this->Name = Name;
            this->Course = Course;
        }

        Copy_Constructor(Copy_Constructor &temp)
        {
            cout<<"Copy Constructor is Called !!"<<endl;
            Name = temp.Name;
            Course = temp.Course;
        }

        string getName()
        {
            return Name;
        }

        void setName(string n)
        {
            Name = n;
        }

        string getCourse()
        {
            return Course;
        }

        void setCourse(string c)
        {
            Course = c;
        }

        void PrintData()
        {
            cout<<"Name : "<<Name<<endl;
            cout<<"Course : "<<Course<<endl;
        }    
};

int main()
{
    // calling class object
    Copy_Constructor cc("Suraj Patil", "Data Structurea And Algorithm");
    cc.PrintData();

    // copy constructor
    Copy_Constructor copy(cc);
    copy.PrintData();
    return 0;
}