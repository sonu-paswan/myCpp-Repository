//post increament operator in c++
#include <iostream>
using namespace std;
class number
{
private:
    int num;

public:
    number() //constructor
    {
        num = 5;
    }
    void Showdata()
    {
        cout << "number :" << num << endl;
    }
    number operator++(int); //operator overloading
};
number number::operator++(int)//int is used to indicate compiler that we are using post increament
{
    number temp;
    temp.num = num++;
    return temp;
}
int main()
{
    number n1, n2;
    n1.Showdata();
    n2 = n1++;
    n1.Showdata();
    number n3=n1;
    n3.Showdata();
    n2.Showdata();

    return 0;
}