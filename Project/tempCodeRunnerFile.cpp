#include <iostream>
using namespace std;

//simple banking management in cpp
class Bank
{
private:
    float balance;
    float rate;

public:
    Bank();
    ~Bank();
    void deposit();          //1
    void Withdraw();         //2
    void CompoundInterest(); //3
    void getbalance();       //4
    void menu();             //5
};
Bank::Bank() //constructor
{
    cout << "enter balance : ";
    cin >> balance;
    cout << "enter rate  in perct : ";
    cin >> rate;
}
Bank::~Bank() //destructor
{
    cout << "database stored  in bank has been erased!" << endl;
}
void Bank::deposit()
{
    float deposit;
    cout << "enter  amount to deposit : ";
    cin >> deposit;
    balance = balance + deposit;
}
void Bank::Withdraw()
{
    float withdraw;
    cout << "enter  withdraw amount : ";
    cin >> withdraw;
    if (withdraw <= balance)
    {
        balance = balance - withdraw;
    }
    else
        cout << "withdrawal is not  possible !" << endl;
}
void Bank::CompoundInterest()//compound interest function
{
    float interest_rate = rate / 100.00;
    float amount = balance;
    cout << "enter number of years : ";
    int year;
    cin >> year;
    for (int i = 0; i < year; i++)
    {
        amount = amount * (1 + interest_rate);
    }
    balance = amount;
}
void Bank::getbalance()
{
    cout << "your current balance is : " << balance << endl;
}
void Bank::menu()//menu card 😜
{
    cout << "d->deposit" << endl;
    cout << "w->withdraw" << endl;
    cout << "c->compound_interest" << endl;
    cout << "g->getbalance" << endl;
    cout << "q->quit" << endl;
}
int main()
{
    Bank Bank1;

    char character = 'd';

    while (character != 'q')

    {
        Bank1.menu();
        cin >> character;
        switch (character)
        {
        case 'd':
            Bank1.deposit();
            break;
        case 'w':
            Bank1.Withdraw();
            break;
        case 'c':
            Bank1.CompoundInterest();
            break;
        case 'g':
            Bank1.getbalance();
            break;
        case 'q':
            cout << "menu terminated" << endl;
            break;
        default:
            cout << "invalid input" << endl;
        }
    }

    return 0;
}