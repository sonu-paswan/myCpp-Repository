#include <iostream>
using namespace std;

void increment(int &n)
{
    n = n + 1;
}
int main()
{
    int a;
    cout << "enter any number  :" << endl;
    cin >> a;
    increment(a);

    cout << a;

    return 0;
}