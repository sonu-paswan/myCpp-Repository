//sorting an array simple algorithm in ascending order
//it is only useful for positive numbers
#include <bits/stdc++.h>
using namespace std;

int arr[1000000]={0};
int main()
{   int count;
    cin>>count;
    for(int i=0;i<count;i++)
    {
        int a;
        cin>>a;
        arr[a]++;
    }
    for(int j=0;j<1000000;j++)
    {
        while(arr[j])
        {
            cout<<j<<"\t";
            arr[j]--;
        }
    }
    return 0;
}