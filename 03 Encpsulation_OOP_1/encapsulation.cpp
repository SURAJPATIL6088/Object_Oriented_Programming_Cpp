#include <bits/stdc++.h>
using namespace std;

class Car
{
private:
    string Name;
    string Year_of_manufacturing;
    int Speed;

public:
    void setYoM(string yom)
    {
        Year_of_manufacturing = yom;
    }

    void setSpeed(int s)
    {
        Speed = s;
    }

    void setName(string n)
    {
        Name = n;
    }

    void getData()
    {
        cout << "Name : " << Name << endl
             << "Year of  Manufacturing : " << Year_of_manufacturing << endl
             << "Speed : " << Speed << endl;
    }
};

int main()
{
    Car toyota;

    toyota.setName("Innova");
    toyota.setYoM("2023");
    toyota.setSpeed(240);

    toyota.getData();
    return 0;
}