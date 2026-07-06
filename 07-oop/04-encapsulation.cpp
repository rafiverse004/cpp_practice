#include <iostream>
using namespace std;

class BankAccount
{
private:
    int balance = 0;

public:
    void deposit(int amount)
    {
        balance += amount;
    }

    int getBalance()
    {
        return balance;
    }
};

int main()
{
    BankAccount acc;

    acc.deposit(1000);

    cout << acc.getBalance() << endl;

    return 0;
}