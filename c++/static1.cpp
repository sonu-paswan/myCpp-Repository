//c++ program to understand static variable in functions
#include <iostream>
using namespace std;
void fun()  
{
    static int x; //static variable (memory lifetime)
                  // by default x is initialized  to 0
    int y = 1;    //memory till function exits
                  // y is auto variable not static variable
    cout << x <<" "<< y << "\t";

    x++;
    y++;
}
int main()
{
    int i;
    for (i = 0; i <= 5; i++)
    {
        fun();
    }
    return 0;
}