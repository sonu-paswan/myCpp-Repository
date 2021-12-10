#include <iostream>
#include <vector> //vector is C++ stl container
using namespace std;
//Binary to gray code converter in c++

void Gray_Code(vector<int> V)  //gray code conversion
{
    cout<<"Gray  code of given binary code is "<<endl;
    cout<<V[0];
    int a;
    for(int i=1;i<V.size();i++){
        a=V[i-1]^V[i];
        cout<<a;
    }
    cout<<endl;
}
void binTodec(int n)  //decimal to binary conversion
{
    int remain=0;
    int a=n;
    vector <int> myVec,myVec2;
    while(n)
    {
        remain=n%2;
        myVec.push_back(remain);
        n=n/2;

    }
    int j=0;
    for(int i=myVec.size()-1;i>=0;i--)
    {
        myVec2.push_back(myVec[i]);
        j++;
    }
    cout<<"binary code of "<<a<<endl;
    for(int i=0;i<myVec2.size();i++){
        cout<<myVec2[i];
    }
    cout<<endl;
    Gray_Code(myVec2);
}
int main()
{   int num;
    cout<<"enter any positive integer :";
    cin>>num;
    binTodec(num);
    return 0;
}
