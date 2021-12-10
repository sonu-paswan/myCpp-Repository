//reference in C++
#include <iostream>
using namespace std;
int main()
{
    int num = 900;
    cout << "value of num :" << num << endl;
    int &total = num; // total is reference of sum
    total = 90;
    cout << "now value of num :" << num << endl;
    
    return 0;
}