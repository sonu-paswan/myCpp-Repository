//simple recursion function in c++ language
#include <iostream>
using namespace std;
int factorial(int n)
{
   
    if (n==1||n==0)
    {
        return 1;
    }
    else if(n>1) {
        return n*factorial(n-1);
    }
    else return 0;
}
int main()
{
    int num;
    cout<<"enter number for factorial :"<<endl;
    cin>>num;
    int result ;
    result=factorial(num);
    if(result==0)
    cout<<"enter non negative number!";
    else
    cout<<result;
    
    return 0;
}