/*
    Name : Waleed Bin Osama
    Roll Number : 20I-2440
    Section : CS-A
    Lab Task : 09
*/

#include <iostream>

using namespace std;

class Account
{
    private:

        static int base;
        double Balance;
        long accountNumber;

    public:

        Account ()
        {
            base++;
            base = base + 100000;
            Balance = 0;
            this-> accountNumber = base;
        }

        Account (double bal)
        {
            if (bal < 0)
            {
                cout << "\n Balance is negative.";
                exit (0);
            }

            else
            {
                base++;
                base = base + 100000;
                this-> Balance = Balance + bal;
                this-> accountNumber = base;

                CheckBalance ();
            }
        }

        void CheckBalance () const
        {
            cout << "\n Account number is : " << accountNumber;
            cout << "\n Balance is : " << Balance;
        }

        void deposit (double amount)
        {
            if (amount > 0.0)
            {
                cout << "\n Amount credited successfully.";

                Balance = Balance + amount;
               
                CheckBalance ();
            }

            else 
                cout << "\n Transaction is invalid.";
        }

        void withdraw (double amount)
        {
            if (Balance >= amount)
            {
                cout << "\n Amount debited successfully.";

                Balance = Balance - amount;
                
                CheckBalance ();
            }
            else
                cout << "\n Transaction is invalid.";
        }

        ~Account()
        {
            cout << "\n Account is closed.";
            
            CheckBalance ();
        }
};

int Account :: base = 0;
 
int main()
{
    Account A1;

    Account A2 (69.69);

    A2.deposit (120.25);
    A2.withdraw (150.50);
}