//c++/c program to draw a pascal triangle
#include <iostream>
using namespace std;
int fac(int);
int combination(int, int);
void printPattern(int);
int fac(int n)   //factorial definition
{
    int factorial = 1;
    while (n)
    {
        factorial = factorial * n;
        n--;
    }
    return factorial;
}
int combination(int x, int y)   //combination definition
{
    int result;
    result = fac(x) / (fac(y) * fac(x - y));
    return result;
}
void printPattern(int line)  //pascal triangle program
{
    int i, j, k = 1, r;
    for (i = 1; i <= line; i++)
    {
        k = 1;
        r = 0;
        for (j = 1; j <= 2 * line - 1; j++)
        {
            if (j >= line + 1 - i && j <= line - 1 + i && k)
            {
                printf("%3d",combination(i - 1, r++));
                k = 0;
            }
            else
            {
                cout << "   ";
                k = 1;
            }
        }
        cout << "\n";
    }
}
int main()
{
    int row;
    cout << "how many rows you want :";
    cin >> row;
    printPattern(row);
    return 0;
}