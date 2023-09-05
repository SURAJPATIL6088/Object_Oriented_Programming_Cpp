#include<bits/stdc++.h>
using namespace std;

class Default_Constructor
{
    private:
        string Name;

    public:

        Default_Constructor()
        {
            cout<<"Default Constructor is Called !!"<<endl;
        }

        string getName()
        {
            return Name;
        }

        void setName(string n)
        {
            Name = n;
        }
    
};

int main()
{
    // calling class object
    Default_Constructor dc;

    return 0;
}