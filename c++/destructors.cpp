//program to understand destructors
#include <iostream>
using namespace std;
class fun
{
    int num;
    char A;

public:
    void setdata(int n, char C = 'k')  //partially default function 
    {
        num = n;
        A = C;
    }
    void showdata()
    {
        cout << "number :" << num << endl;
        cout << "character :" << A;
    }
    ~fun()
    {
        cout <<"\n"<< "destructor executed !";
    }
};
int main()
{
    fun c;
    c.setdata(4);
    c.showdata();
    return 0;
}