//concept of  virtual functions in cpp
#include <iostream>
using namespace std;
class A
{
    // In class A compiler creates pointer name *VPTR and array VTABLE[f1][f3][f4]
    //VTABE is also a array of pointers which points to virtual functions
public:
    void f1() { cout << "f1 of base class" << endl; }
    virtual void f2() { cout << "f2 of base class" << endl; }
    virtual void f3() { cout << "f3 of base class" << endl; }
    virtual void f4() { cout << "f4 of base class" << endl; }
};
//if object of class B is created
//[f2]->f2() of class B
//[f3]->f3() of class A  (because there is no function overriding in class B for f3 )
//[f4]->f4() of class A  (because there is no function overriding in class B for f4 )
class B : public A
{
    // compiler also creates VTABLE[f2][f3][] for class B
public:
    void f1() { cout << "f1 of derived class" << endl; };
    void f2() { cout << "f2 of derived class" << endl; };
    void f4(int x) { cout << "f4 of derived class" << endl; }
};
int main()
{
    A objA,*p;
    p=&objA;
    cout<<"object of class A"<<endl;
    p->f1();//early binding
    p->f2();//late binding
    p->f3();//late binding
    p->f4();//late binding 
    //p->f4(5);//early binding (error) 
    A *ptr;
    B objB;
    ptr=&objB;
    cout<<"object of class B"<<endl;
    ptr->f1();//early binding
    ptr->f2();//late binding
    ptr->f3();//late binding
    ptr->f4();//late binding
    //ptr->f4(5);//early binding(error)
    return 0;
}

//note :- pointer VPTR points to VTABLE of that class of which object is created
//late binding means using VTABLE arrays to bind functions