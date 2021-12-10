#include <iostream>
using namespace std;
int x;
int &fun()
{

    return x;
}
int main()
{
    fun() = 30;
    cout << fun() << endl;
    // cout<<x;
    return 0;
}
