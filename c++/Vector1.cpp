#include <bits/stdc++.h>
using namespace std;
//vectors in cpp
int main()
{
    vector<int> myVector;
    int getNum;
    cout << "Enter some integers (zero for exit):" << endl;
    do
    {
        cin >> getNum;
        myVector.push_back(getNum); //add element at the end
    } while (getNum);
    cout << "your enter numbers are " << endl;
    for (int i = 0; i < myVector.size(); i++)
    {
        cout << myVector[i] << " ";
    }
    myVector.pop_back(); //delete element from the last

    sort(myVector.begin(), myVector.end());//sorting vector element 

    cout << endl;
    for (int i = 0; i < myVector.size(); i++)
    {
        cout << myVector[i] << " ";
    }

    return 0;
}