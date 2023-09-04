#include<bits/stdc++.h>
using namespace std;

class Getter_Setter
{
    private:
        string Name;
        string Course;
        int Marks;

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

        int getMarks()
        {
            return Marks;
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

        void setMarks(int m)
        {
            Marks = m;
        }        
};

int main()
{
    // class object
    Getter_Setter gs;
    
    /// calling the set functions
    gs.setName("Suraj");
    gs.setCourse("Data Structure And Algorithms");
    gs.setMarks(99);

    /// calling the get functions
    cout<<"Name : "<<gs.getName()<<endl;
    cout<<"Course : "<<gs.getCourse()<<endl;
    cout<<"Marks : "<<gs.getMarks()<<endl;
    return 0;
}