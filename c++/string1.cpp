// c++ program to understand string
#include <iostream>
#include <string>
#include <string.h>
using namespace std;
int main()
{
    string name1 = "pirates";
    cout<<"first string is "<<name1<<endl;
    string name2 = " of caribian";
    cout<<"second string is"<<name2<<endl;
    string full_name = name1.append(name2);
    cout << "combined is " << full_name;
    cout << "\nsize of string is " << full_name.length();
    return 0;
}