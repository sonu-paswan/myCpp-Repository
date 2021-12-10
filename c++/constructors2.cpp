// example of default constructor
//in c++  if we dont declare constructor then deflaut 
//constructor is  created with no parameters
#include <iostream>
using namespace std;
class income
{
private:
    float salary;
    float pf;

public:
    void setdata(float a, float b)
    {
        salary = a;
        pf = b;
    }
    void showdata()
    {
        cout << "salary=" << salary << endl;
        cout << "pf=" << pf << endl;
    }
};
int main()
{
    income A;
    A.setdata(23000,2000);
    A.showdata();
    return 0;
}
