//program to understand problem with hybrid inheritance
#include <iostream>
using namespace std;
class Grandfather
{
public:
    int G;
    void callGrandpa(void)
    {
        cout << "Calling Grand pa" << endl;
    }
};
class Father : public Grandfather
{
public:
    int F;
    void callFather(void)
    {
        cout << "calling Father " << endl;
    }
};
class Mother : public Grandfather
{
public:
    int M;
    void callMother(void)
    {
        cout << "calling Mother" << endl;
    }
};
class Son : public Father, public Mother
{
public:
    int S;
    void callSon(void)
    {
        cout << "calling son" << endl;
    }
};
int main()
{
    Grandfather Vichitravirya;
    Father Pandu;
    Mother Kunti;
    Son Arjun;
    //This will show error// Son Aditya ; #Aditya.callGrandpa();#

    //This will show error// Son Aditya ;#Aditya.G;# *request for member 'G' is ambiguous*

    cout <<"Size of Father object: "<<sizeof(Father) << endl;
    cout <<"Size of Son object: "<< sizeof(Son) << endl;
    //Arjun.callGrandpa();

    return 0;
}