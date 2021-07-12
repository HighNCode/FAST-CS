/*
    Name : Waleed Bin Osama
    Roll Number : 20I-2440
    Section : CS-A
    Lab Task : 13
*/

#include <iostream>

using namespace std;

class Customer
{
    private:

        string Name;
        int CNIC;

    public:

        Customer()
        {
            Name = " ";
            CNIC = 0;
        }

        Customer(string N, int C)
        {
            Name = N;
            CNIC = C;
        }
};

class Account
{
    private:

        int Number;
        int Balance;

    public:

        Account()
        {
            Number = 0;
            Balance = 0;
        }

        Account(int N, int B)
        {
            Number = N;
            Balance = B;
        }

        int getBalance()
        {
            return Balance;
        }
};

class SBP
{
    public:

        Customer C;
        Account A;
        double InterestRate;
        double WithdrawalLimit;

    public:

        SBP()
        {
            Customer(" ", 0);
            Account(0, 0);
            InterestRate = 0.0;
            WithdrawalLimit = 0.0;
        }

        SBP(string name, int cnic, int number, int balance, double IR, double WL)
        {
            Customer(name, cnic);
            Account(number + 1, balance);
            InterestRate = IR;
            WithdrawalLimit = WL;
        }

        double getInterestRate()
        {
            double interest;

            interest = A.getBalance() * (InterestRate / 100);
            
            return interest;
        }

        double getWithdrawalLimit()
        {
            return WithdrawalLimit;
        }
};

class HBL : public SBP
{
    public:

        double getRate()
        {
            InterestRate = 5.0;

            return InterestRate;
        }

        double getLimit()
        {
            WithdrawalLimit = 5000;

            return WithdrawalLimit;
        }
};

class MCB : public SBP
{
    public:

        double getRate()
        {
            InterestRate = 7.0;

            return InterestRate;
        }

        double getLimit()
        {
            WithdrawalLimit = 7000;

            return WithdrawalLimit;
        }
};

int main()
{
    SBP *obj = new SBP[5];
    string name;
    int cnic, number, balance;
    double rate, limit;
    char opt;
    HBL H;
    MCB M;

    for(int x = 0; x < 5; x++)
    {
        cout << "\n Enter name : ";
        cin >> name;

        cout << "\n Enter cnic : ";
        cin >> cnic;

        cout << "\n Enter account number : ";
        cin >> number;

        cout << "\n Enter available balance : ";
        cin >> balance;

        cout << "\n There are two banks.";
        cout << "\n\t 1. HBL";
        cout << "\n\t 2. MCB";

        cout << "\n\n Enter you bank option : ";
        cin >> opt;

        switch(opt)
        {
            case '1':
                obj[x] = SBP(name, cnic, number, balance, H.getRate(), H.getLimit());
            break;

            case '2':
                obj[x] = SBP(name, cnic, number, balance, M.getRate(), M.getLimit());
            break;
        }
    }
}