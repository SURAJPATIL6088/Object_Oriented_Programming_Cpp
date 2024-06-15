#include<iostream>
using namespace std;
 
// abstract class
class Shape{
  virtual void draw() = 0;  // pure virtual function
};

class drawCircle : public Shape{ 
  public:
  void draw()
  {
    cout<<"Draw the Circle !!"<<endl;
  }
};

int main()
{
  drawCircle c;
  c.draw();
  
  return 0;
}
