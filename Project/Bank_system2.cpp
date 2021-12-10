#include <iostream>
using namespace std;
//best usage of  object
//simple banking management in cpp using oop
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
    cout << "enter rate in perct : ";
    cin >> rate;
}
Bank::~Bank() //destructor
{
    cout << "database stored in bank has been erased!" << endl;
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
void Bank::CompoundInterest() //compound interest function
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
void Bank::menu() //menu card 😜
{
    cout << "d->deposit" << endl;
    cout << "w->withdraw" << endl;
    cout << "c->compound_interest" << endl;
    cout << "g->getbalance" << endl;
    cout << "q->quit" << endl;
}
int main()
{
    Bank myBank;

    char character = 'd';
    myBank.menu();
    while (character != 'q')

    {
        // myBank.menu();
        cout << "select option from menu " << endl;
        cin >> character;
        switch (character)
        {
        case 'd':
            myBank.deposit();
            break;
        case 'w':
            myBank.Withdraw();
            break;
        case 'c':
            myBank.CompoundInterest();
            break;
        case 'g':
            myBank.getbalance();
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