//c++ program to covert binary number to decimal number
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, i, k, t, sum = 0;
    int a;
    cout << "enter any binary number : ";
    cin >> n;
    a = n;
    for (i = 0; n != 0; i++)
    {
        k = n % 10;
        t = k * pow(2, i);
        sum += t;
        n /= 10;
    }
    cout << "decimal number of " << a << " is " << sum;

    return 0;
}