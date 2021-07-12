/*
    Name : Waleed Bin Osama
    Roll Number : 20I-2440
    Section : CS-A
    Lab Task : 10
*/

#include <iostream>

using namespace std;

class Money
{
    private:

        int d, c;

    public:

        Money()
        {
            d = 0;
            c = 0;
        }

        Money(int dollar, int cents)
        {
            d = dollar;
            c = cents;
        }

        Money& operator= (const Money& right)
        {
            this -> d = right.d;
            this -> c = right.c;

            return *this;
        }

        bool operator== (const Money& right)
        {
            if((d == right.d) && (c == right.c))
                return true;

            else
                return false;
        }

        Money& operator+ (const Money& right)
        {
            this -> d += right.d;
            this -> c += right.c;

            while(c > 99)
            {
                this -> d++;
                this -> c -= 100;
            }

            return *this;
        }

        Money& operator- (const Money& right)
        {
            if(d >= right.d)
            {
                this -> d = this -> d - right.d;
                this -> c = this -> c - right.c;
            }

            else
            {
                this -> d = right.d - this -> d;
                this -> c = right.c - this -> c;
            }            
 
            return *this;
        }

        Money& operator*= (int temp)
        {
            this -> d *= temp;
            this -> c *= temp;

            return *this;
        }

        Money& operator/= (int temp)
        {
            this -> d /= temp;
            this -> c /= temp;

            return *this;
        }

        void output() const
        {
            cout << "\n There will be " << d << " dollars and " << c << " cents.";
        }

        ~Money()
        {
            cout << "\n\n Destructor called.";
        }
};

int main()
{
    char opt;
    int temp = 15;

    Money M;

    Money M1(20, 40);
    Money M2(10, 30);

    cout << "\n\n Press enter if you want to overload assignment operator.";
    cin.get() >> opt;

    M = M2;
    M.output();


    cout << "\n\n Press enter if you want to overload equal to operator.";
    cin.get() >> opt;

    if(M == M2)
        cout << "\n Both objects are equal.";
    
    else
        cout << "\n Both objects are not equal.";


    cout << "\n\n Press enter if you want to overload addition operator.";
    cin.get() >> opt;

    M = M1 + M2;
    M.output();


    cout << "\n\n Press enter if you want to overload subtraction operator.";
    cin.get() >> opt;

    M = M1 - M2;
    M.output();


    cout << "\n\n Press enter if you want to overload multiplication operator.";
    cin.get() >> opt;

    M1 *= temp;
    M1.output();

    M2 *= temp;
    M2.output();


    cout << "\n\n Press enter if you want to overload division operator.";
    cin.get() >> opt;

    M1 /= temp;
    M1.output();

    M2 /= temp;
    M2.output();
}