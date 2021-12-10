#include <iostream>
#include <string>
//virtual function hackerrank 
using namespace std;
class person
{
public:
    string name;
    int age;
    virtual void getdata()=0;
    virtual void putdata()=0;
};
class professor : public person
{
private:
    int publication;
    int cur_id = 1;

public:
   
    void getdata()
    {
        cin>>name;
        cin >> age;
        cin >> publication;
    }
    void putdata()
    {
        cout << name << " " << age << " " << publication << " " << cur_id << endl;
    }
};
class student : public person
{
private:
    int marks[6];
    int cur_id = 2;

public:
    void getdata()
    {
        cin>>name;
        cin >> age;
        for (int i = 0; i < 6; i++)
        {
            cin >> marks[i];
        }
    }
    int sum = 0;

    void putdata()
    {
        for (int j = 0; j < 6; j++)
        {
            sum = sum + marks[j];
        }
        cout << name << " " << age << " " << sum << " " << cur_id << endl;
    }
};
int main()
{
    int count, val;
    cin >> count;
    person *ptr[count];
    for (int i = 0; i < count; i++)
    {
        cin >> val;
        if (val == 1)
        {
            ptr[i]=new professor;//late binding
            ptr[i]->getdata();
        }
        else
        {
            ptr[i]=new student;//late binding
            ptr[i]->getdata();
        }
    }
    for(int i=0;i<count;i++)
    {
        ptr[i]->putdata();
    }
    for(int j=0;j<count;j++)
    {
        delete ptr[j];
    }

    return 0;
}