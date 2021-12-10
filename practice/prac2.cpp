#include<iostream>
// #include<string>
using namespace std;

void swap(char * &a, char * &b)
{
char *temp = a;
a = b;
b = temp;
}

int main()
{
char *str1 = "Sonu";
char *str2 = "Avinash";
swap(str1, str2);
cout<<"str1 is "<<str1<<endl;
cout<<"str2 is "<<str2<<endl;
return 0;
}
