#include <bits/stdc++.h>
using namespace std;
int main()
{
    string Str1;
    cout<<"Enter string :";
    getline(cin,Str1);
    cout<<"Initail string is :"<<Str1<<endl;
    Str1.push_back('S');//push_back() function adds character to last in string object 
    cout<<"now string after push_back is :"<<Str1<<endl;
    Str1.pop_back();//pop_back() function deletes a character from last 
    cout<<"now final string after pop_back is :"<<Str1;
    return 0;
}