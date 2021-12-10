#include <iostream>
using namespace std;
//banking  system using oop in cpp
class Bank
{
private:
    float balance;
    float total_balance;
    float Amount;
    float SI;

public:
    Bank(){};
    Bank(float B)
    {
        balance = B;
        total_balance = balance;
    }
    void deposit(float Deposit)
    {
        total_balance = total_balance + Deposit;
    }
    void withdraw(float WD)
    {
        if (WD <= total_balance)
        {
            total_balance = total_balance - WD;
        }
        else
        {
            cout << "withdrawal is not applicable " << endl;
        }
    }
    void Simple_interest(int year, float interest_rate) //for rate in percenrtage
    {

        SI = total_balance + (total_balance * year * interest_rate) / 100.0;
    }

    void Simple_interest(int year, double rate) //function overloading
    {

        SI = total_balance + total_balance * year * rate; //for rate in value(other than perct)
    }
    void CompoundInterest(int year, float rate) //rate in percentage
    {
        Amount = total_balance;
        float interest_rate = rate / 100.00;
        for (int i = 0; i < year; i++)
        {
            Amount = Amount * (1 + interest_rate);
        }
    }
    void ShowCompoundInterest()
    {
        cout<<"Compound Interest Calculation"<<endl;
        cout << "Compound Interest received  : " << Amount - total_balance << endl;
        cout << "Total Amount after compound Interest : " << Amount << endl;
    }
    void ShowSimpleInterest()
    {
        cout<<"Simple Inerest calculation"<<endl;
        cout << "Interest on current balance  is : " << SI - total_balance << endl;
        cout<<"total amount after simple  interest : "<<SI<<endl;
    }
    void showBalance()
    {

        cout << "current balance is " << total_balance << endl;
    }
};
int main()
{
    cout << "enter initial balance" << endl;
    float balance;
    cin >> balance;
    Bank Bank1(balance);
    cout << "rupees to deposit " << endl;
    float deposit;
    cin >> deposit;
    Bank1.deposit(deposit);
    cout << "amout to withdrow " << endl;
    float withdraw;
    cin >> withdraw;
    Bank1.withdraw(withdraw);
    Bank1.showBalance();
    cout << "enter year and rate(in perct) for Interest " << endl;
    int year;
    float rate;
    cin >> year >> rate;
    Bank1.Simple_interest(year,rate);
    Bank1.ShowSimpleInterest();
    cout<<endl;
    Bank1.CompoundInterest(year, rate);
    Bank1.ShowCompoundInterest();
    return 0;
}