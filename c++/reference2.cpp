#include <bits/stdc++.h>
using namespace std;
char s[50] = "Hello   Men";
char &replace(int i) // return reference 
{
    return s[i];
}
int main()
{

    replace(6) = 'X';

    cout << s << endl;

    return 0;
}