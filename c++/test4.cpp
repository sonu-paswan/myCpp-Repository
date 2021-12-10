// program to show Collatz conjecture in C++
 #include <bits/stdc++.h>

using namespace std;

int main()
{
    clock_t tStart = clock();
    long long num, count = 0;
    cout << "enter positive number :";
    cin >> num;
    while (num != 1)
    {
        if (num % 2 == 0)
        {
            num = num / 2;
            count++;
        }
        else
        {
            num = num * 3 + 1;
            count++;
        }
        cout << num << "\t";
    }
    cout << "\n";
    cout << "number of step :" << count << endl;
    cout << "Time taken:" << (double)(clock() - tStart) / CLOCKS_PER_SEC;
    return 0;
}
