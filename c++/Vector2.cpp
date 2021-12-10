#include <bits/stdc++.h>
using namespace std;
//vectors in cpp
template <typename T>
void display(vector<T> &V)
{
   for(unsigned i=0;i<V.size();i++)
   {
       cout<<V[i]<<" ";
   }
}
int main()
{   vector <int > myVEC1{1,2,3,4,5};//vector initialization
    cout<<"Vecotr one is :";
    display(myVEC1);
    cout<<endl;
    vector <int > myVEC2{9,8,7,6,0};
    cout<<"Vector two is :";
    display(myVEC2);
    cout<<endl;
    cout<<"After swaping"<<endl;

    myVEC1.swap(myVEC2);//swaping vectors 
    cout<<"Now vector one is :";
    display(myVEC1);
    return 0;
}