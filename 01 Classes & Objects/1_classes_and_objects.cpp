#include<bits/stdc++.h>
using namespace std;

class item
{
    private:
    int number;

    protected:
    int value;

    public:
    void getData(int a, int b)
    {
        cout<<"A : "<<a<<endl<<"B : "<<b<<endl;
    }
};

int main()
{
    item x;
    
    x.getData(23, 38);

    x.number;   // it give an error private we can not access in the main() function
    x.value;    // it give an error protected we can not access in the main() function
    
    return 0; 
}