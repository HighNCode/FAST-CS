/*
    Name : Waleed Bin Osama
    Roll Number : 20I-2440
    Section : CS-A
    Lab Task : 10
*/

#include <iostream>

using namespace std;

class Increment{

    private:

        double real;
        double imaginary;

    public:
        
        bool operator!() const;

        Increment()
        {
            real = 0;
            imaginary = 0;
        }

        Increment(double r, double i)
        {
            real = r;
            imaginary = i;
        }
        
        void setReal(double r)
        {
            real = r;
        }

        double getReal() const
        {
            return real;
        }

        void setImaginary(double i)
        {
            imaginary = i;
        }

        double getImaginary() const
        {
            return imaginary;
        }

        ~Increment()
        {
            cout << "\n Destructor is called.";
        }
};

bool Increment :: operator !() const
{
    if (real == 0 && imaginary == 0)
        return true;
    
    else 
        return false;
}

int main()
{
    Increment I;
    Increment I1(3, 4);
    Increment I2;

    int real, imaginary;
    bool ans;

    cout << "\n Enter the real part : ";
    cin >> real;
    I2.setReal(real);
    
    cout<<"\n\n Enter the imaginary part : ";
    cin>>imaginary;
    I2.setImaginary(imaginary);
    
    ans =! I2;

    if(ans == 0)
        cout << "\n They are not equal.";
    else
        cout<<"\n They are equal.";

}