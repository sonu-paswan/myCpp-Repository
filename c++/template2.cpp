#include <bits/stdc++.h>
using namespace std;
template<typename T> //template tag
T areaofSquare(T r) //tempalte function in c++
{
    T area;
    area=r*r;
    return area;
}
int main()
{   double radius;
    cout<<"enter side of square :";
    cin>>radius;
    cout<<"area of square :"<<areaofSquare(radius)<<endl;
    return 0;
}