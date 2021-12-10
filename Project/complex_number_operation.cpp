#include <iostream>
using namespace std;
//complex operation using object oriented programming(oop)
class complex
{
private:
    int a1, b1;
    int a2, b2;

public:
    complex();
    ~complex();
    void showComplex();
    void AddComlplex();
    void SubComplex();
    void MulComplex();
    void DivComplex();
    void updateComplex();
    void menu();
};
complex::complex() //constructor
{
    cout << "enter complex A(a+bi)" << endl;

    cin >> a1 >> a2;

    cout << "enter complex B(c+di)" << endl;

    cin >> b1 >> b2;
}
complex::~complex() //destrutor
{
    cout << "complex information is erased" << endl;
}
void complex::showComplex()
{
    cout << "complex A " << endl;
    cout << a1 << " " << a2 << "i" << endl;
    cout << "complex  B " << endl;
    cout << b1 << " " << b2 << "i" << endl;
}
void complex::AddComlplex()
{
    int real, img;
    real = a1 + b1;
    img = a2 + b2;
    cout << "after addition " << endl;
    cout << real << " " << img << "i" << endl;
}
void complex::SubComplex()
{
    int real, img;
    real = a1 - b1;
    img = a2 - b2;
    cout << "addition of complex" << endl;
    cout << real << " " << img << "i" << endl;
}
void complex::MulComplex()
{
    int real, img;
    real = a1 * b1 - a2 * b2;
    img = a1 * b2 + b1 * a2;
    cout << "multiplication of complex" << endl;
    cout << real << " " << img << "i" << endl;
}
void complex::DivComplex()
{
    float real, img;
    real = (float)(a1 * b1 + a2 * b2) / (b1 * b1 + b2 * b2);
    img = (float)(b1 * a2 - a1 * b2) / (b1 * b1 + b2 * b2);
    cout << "division of complex" << endl;
    cout << real << " " << img << "i" << endl;
}
void complex::updateComplex()
{
    int a, b, c, d;
    cout << "enter new complex A(a+bi)" << endl;
    cin >> a >> b;
    cout << "enter new complex B(c+di)" << endl;
    cin >> c >> d;
    a1 = a;
    a2 = b;
    b1 = c;
    b2 = d;
}
void complex::menu()
{
    cout << "s->show complex" << endl;
    cout << "+ for add complex" << endl;
    cout << "- for substract complex" << endl;
    cout << "* for multiply complex" << endl;
    cout << "/ for divide complex" << endl;
    cout << "u-> for update in complex" << endl;
    cout << "e->exit" << endl;
}
int main()
{
    complex num;
    char variable = 's';
    num.menu();
    while (variable != 'e')
    {
        // num.menu();
        cout << "select option from menu" << endl;
        cin >> variable;
        switch (variable)
        {
        case 's':
            num.showComplex();
            break;
        case '+':
            num.AddComlplex();
            break;
        case '-':
            num.SubComplex();
            break;
        case '*':
            num.MulComplex();
            break;
        case '/':
            num.DivComplex();
            break;
        case 'u':
            num.updateComplex();
            break;
        case 'e':
            cout << "exit" << endl;
        default:
            cout << "invalid input" << endl;
            break;
        }
    }

    return 0;
}