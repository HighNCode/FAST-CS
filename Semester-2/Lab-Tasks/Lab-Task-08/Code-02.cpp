/*
    Name : Waleed Bin Osama
    Roll Number : 20I-2440
    Section : CS-A
    Lab Task : 09
*/

#include <iostream>

using namespace std;

class Fraction
{
    private:

        int numer, denom;

        void normalize ()
        {
            int HCF;

            while (denom == 0)
            {
                cout << "\n Enter a valid denominator : ";
                cin >> denom;
            }

            if (numer < 0 && denom < 0)
            {
                numer = abs (numer);
                denom = abs (denom);
            }

            if (numer > 0 && denom < 0)
            {
                numer = -abs (numer);
                denom = abs (denom);
            }

            HCF = gcd (abs(numer), abs(denom));

            numer = numer / HCF;
            denom = denom / HCF;
        }

        int gcd (int n, int m)
        {
            int gcd;

            while (n != m)
            {
                if (n > m)
                {
                    n = n - m;
                    gcd = n;
                }

                else
                {
                    m = m - n;
                    gcd = m;
                }
            }

            return gcd;
        }

    public:

        Fraction ()
        {
            numer = 0;
            denom = 1;
        }

        Fraction (int num, int den)
        {
            numer = num;
            denom = den;

            normalize ();
        }

        Fraction (const Fraction &fract)
        {
            numer = fract.numer;
            denom = fract.denom;
        }

        ~Fraction ()
        {
            cout << "\n Destructor Called. \n\n";
        }

        void setNumer (int num)
        {
            numer = num;
        }

        int getNumer () const
        {
            return numer;
        }

        void setDenom (int den)
        {
            denom = den;
            normalize ();
        }

        int getDenom () const
        {
            return denom;
        }

        void print () const
        {
            cout << getNumer () << "/" << getDenom ();
        }
};

int main ()
{
    int N, D;

    Fraction F1;

    Fraction F2 (10, 20);

    Fraction F3 (30, 40);

    Fraction F4 (F3);

    Fraction *FractionVar = new Fraction(F3);

    cout << "\n Enter value of numerator : ";
    cin >> N;
    cout << "\n Enter value of denominator : ";
    cin >> D;

    F2.setNumer (N);
    F2.setDenom (D);

    F2.print();
}