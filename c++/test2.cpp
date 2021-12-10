//Read this program again after some time
#include <bits/stdc++.h>
using namespace std;
#define MAX 50
class employee
{
    char name[MAX];
    public :
    void putname(char *p)
    {
        strcpy(name,p);
    }
    void getname(char *q)
    {
        strcpy(q,name);
    }
    double wage;
    public :
    void putwage(double a)
    {
        wage=a;
    }
    double getwage()
    {
        return wage;
    }

};
int main()
{  
  employee E1;
  char name[MAX];
  E1.putname("Sonu paswan");
  E1.getname(name);
  E1.putwage(23000.78);
  cout<<name<<"\t"<<E1.getwage()<<endl;
  return 0;
}