//scope resolution operator in c++
#include <iostream>
using namespace std;
int x ; // by default initialised to 0
int main()

{
    int x = 10;
    cout << "local x=" << x << endl;

    cout << "global x=" << ::x << endl;
    ::x = 90; //scope resolution operator
    cout << "now global=" << ::x << endl;

    return 0;
}