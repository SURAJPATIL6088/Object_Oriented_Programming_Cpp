#include<bits/stdc++.h>
using namespace std;

class Dynamic_Static_Aloocation
{
    private:
        string Name;
        string Course;

    public:

        // define the getter
        string getName()
        {
            return Name;
        }

        string getCourse()
        {
            return Course;
        }

        // define the setter
        void setName(string n)
        {
            Name = n;
        }

        void setCourse(string c)
        {
            Course = c;
        }
        
};

int main()
{
    // static allocation
    Dynamic_Static_Aloocation gs;
    
    /// calling the set functions
    gs.setName("Suraj");
    gs.setCourse("Data Structure And Algorithms");

    /// calling the get functions
    cout<<"Name : "<<gs.getName()<<endl;
    cout<<"Course : "<<gs.getCourse()<<endl;

    // dynamic allocation
    Dynamic_Static_Aloocation *gs1 = new Dynamic_Static_Aloocation;

    /// calling the set functions
    (*gs1).setName("Bhushan");
    (*gs1).setCourse("System Design");

    /// calling the get functions
    cout<<endl<<"Name : "<<(*gs1).getName()<<endl;
    cout<<"Course : "<<(*gs1).getCourse()<<endl;
    return 0;
}