//C++ program to convert decimal number to binary number
#include <iostream>
using namespace std;
int main()
{
    int n, i, bits, result;
    cout << "enter any decimal number : ";
    cin >> n;
    cout << "binary number of " << n << " is\n";

    for (i = 15; i >= 0; i--)
    {
        bits = 1 << i;
        result = n & bits;
        result == 0 ? cout << "0" : cout << "1";
    }

    return 0;
}