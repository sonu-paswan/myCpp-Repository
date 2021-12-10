#include <bits/stdc++.h>
using namespace std;
//puppy and sum codechef 17/07/21
int sum(int, int);
int sum(int);
int sum(int count, int number)
{
    int SUM = 0;
    int counting = count;
    while (counting)
    {
        SUM = sum(number);
        number = SUM;
        counting--;
    }

    return SUM;
}
int sum(int num)
{
    int temp = 0;
    for (int i = 1; i <= num; i++)
    {
        temp = temp + i;
    }
    return temp;
}
int main()
{
    int term, num, count;
    cin >> count;

    for (int j = 0; j < count; j++)
    {
        cin >> term >> num;
        cout << "\n";
        cout << sum(term, num);
    }
    return 0;
}