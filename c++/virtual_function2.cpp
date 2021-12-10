#include <bits/stdc++.h>
using namespace std;

class BOY
{
    
  public:
   virtual void func()//virtual function 
  {
      cout<<"I am boy"<<endl;
  }
  void property() //non virtual function *early binding* 
  {
      cout<<"I have Boy properties"<<endl;
  }
};
class GIRL:public BOY
{
  public :
   void func()
  {
      cout<<"I am girl"<<endl;
  }
  void property()
  {
      cout<<"I have Girl properties"<<endl;
  }
};
int main()
{   BOY *pointer,Boy;
    GIRL Girl;
    pointer=&Girl;
    pointer->func();//late binding 
    pointer->property();//early binding
    
    return 0;
}