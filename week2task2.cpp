#include <iostream>
using namespace std;

class BankAccount
{
private:
    string name;
    int accountNumber;
    double balance;

public:

    // Default Constructor
    BankAccount()
    {
        name = "Unknown";
        accountNumber = 0;
        balance = 0;
    }

    // Parameterized Constructor
    BankAccount(string n, int acc, double bal)
    {
        setName(n);
        setAccountNumber(acc);
        setBalance(bal);
    }

    // Copy Constructor
    BankAccount(const BankAccount &obj)
    {
        name = obj.name;
        accountNumber = obj.accountNumber;
        balance = obj.balance;
    }

    // Setter for Name
    void setName(string n)
    {
        if(n != "")
        {
            name = n;
        }
        else
        {
            cout << "Invalid Name" << endl;
        }
    }

    // Setter for Account Number
    void setAccountNumber(int acc)
    {
        if(acc >= 10000 && acc <= 99999)
        {
            accountNumber = acc;
        }
        else
        {
            cout << "Invalid Account Number" << endl;
        }
    }

    // Setter for Balance
    void setBalance(double bal)
    {
        if(bal >= 0)
        {
            balance = bal;
        }
        else
        {
            cout << "Invalid Balance" << endl;
        }
    }

    // Getter Functions
    string getName()
    {
        return name;
    }

    int getAccountNumber()
    {
        return accountNumber;
    }

    double getBalance()
    {
        return balance;
    }

    // Display Function
    void displayAccountInfo()
    {
        cout << "Account Holder Name: " << name << endl;
        cout << "Account Number:      " << accountNumber << endl;
        cout << "Balance:             " << balance << endl;
    }
};

int main()
{
    // Using Parameterized Constructor
    BankAccount acc1("Ahmed", 11227, 86700);

    // Using Copy Constructor
    BankAccount acc2 = acc1;

    cout << "Account 1 Info" << endl;
    acc1.displayAccountInfo();

    cout << endl;

    cout << "Account 2 Info (Copy)" << endl;
    acc2.displayAccountInfo();

    return 0;
}