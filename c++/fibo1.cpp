//C++ program to print fibonacci series using non tail recursion
#include <iostream>
using namespace std;
void fib(int);
int main()
{
    int n;
    cout << "numbers of terms in fibonacci series : ";
    cin >> n;
    fib(n);

    return 0;
}
void fib(int n)
{
    static int f1 = 0, f2 = 1;
    int temp;
    if (n < 2)
    {
        f1 = 0;
        f2 = 1;
    }
    else
    {
        fib(n - 1);
        temp = f2;
        f2 = f1 + f2;
        f1 = temp;
    }
    cout << f1 << " ";
}