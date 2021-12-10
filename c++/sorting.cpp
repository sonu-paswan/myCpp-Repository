//program to sort numbers is ascending order
#include <iostream>
using namespace std;
#define MAX 5
void swap(int *p, int *q) 
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}
int main()
{
    int a[MAX], i, j;
    int n;
    cout << "how many numbers you want : ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "your entered number is :";
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    for (i = 0; i < n; i++) 
    {
        for (j = i+1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                swap(a + i, a + j);
            }
        }
    }
    cout << "\nascending order of numbers is \n";
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}