// C++ program to convert decimal number to binary number
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> myVec;
    int n, i, bits, result;
    cout << "enter any decimal number : ";
    cin >> n;
    cout << "binary number of " << n << " is\n";
    bool flag=true;
    for (i = 15; i >= 0; i--)
    {
        bits = 1 << i;
        result = n & bits;
        // result == 0 ? cout << "0" : cout << "1";
        if (result != 0 )
        {   flag=false;
            myVec.push_back(1);
        }
        if(result==0 && flag==false){
            myVec.push_back(0);
        }
    }
    for (int i = 0; i < myVec.size(); i++)
    {
        cout << myVec[i];
    }

    return 0;
}