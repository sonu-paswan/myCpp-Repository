#include <bits/stdc++.h>
using namespace std;
void Swap(int &a, int &b)
{
    int palti=a;
    a=b;
    b=palti;

}
int main()
{
    int num1,num2;
    cin>>num1>>num2;
    Swap(num1,num2);
    cout<<num1<<" "<<num2;
    return 0;
}