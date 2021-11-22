// runtime polymorphism function overriding

//Accounts can be of 3 types saving , current , FD
//Every Account has 3 methods printinfo, deposit , withdraw

#include <iostream>

class Account
{
protected:
    int balance;
    char name[100];

public:
    Account()
    {
        std::cout << "Account created - ";
    }

    //dynamically linkage of function so virtual is used
    //this will be overriden into child class
    virtual void printinfo() {}
    virtual void deposit(int) {}
};

class SavingAcc : public Account
{
public:
    SavingAcc()
    {
        std::cout << "Saving account";
        this->balance = 2000;
    }
    SavingAcc(int min_amt)
    {
        this->balance = min_amt;
    }
    void printinfo()
    {
        std::cout << "Balance : " << this->balance;
    }
    void deposit(int dep_amt)
    {
        this->balance += dep_amt;
        std::cout << "Amount deposited !! \n";
        std::cout << "Total Balance : " << this->balance;
    }
};

class CurrentAcc : public Account
{
private:
    float overDraftAmt;

public:
    CurrentAcc()
    {
        std::cout << "Current account";
        this->overDraftAmt = 0;
    }
    CurrentAcc(float overDraftAmt)
    {
        this->overDraftAmt = overDraftAmt;
    }
    void printinfo()
    {
        std::cout << "Over Draft Amount : " << this->overDraftAmt;
    }
    void deposit(int dep_amt)
    {
        this->balance += dep_amt;
        std::cout << dep_amt << "Amount deposited !! \n";
        std::cout << "Total balance : " << this->balance;
    }
};

int main()
{
    int choice;
    int dep_amt;
    Account *aobj;

    std::cout << "Which account do you want: \n1. Saving 2. Current \n";
    std::cin >> choice;
    switch (choice)
    {
    case 1:
    {
        SavingAcc s;
        aobj = &s;
    }
    break;

    case 2:
    {
        CurrentAcc a;
        aobj = &a;
    }
    break;
    }

    while (1)
    {
        std::cout << "\n\n Select operation: \n1.Print 2. Deposit 3. Exit: \n";
        std::cin >> choice;
        switch (choice)
        {
        case 1:
            aobj->printinfo();
            break;
        case 2:
            std::cout << "Enter deposit amount: ";
            std::cin >> dep_amt;
            aobj->deposit(dep_amt);
            break;
        case 3:
            std::exit(0);
        }
    }
}