/*
    Name : Waleed Bin Osama
    Roll Number : 20I-2440
    Section : CS-A
    Lab Task : 08
    Question : 01
*/

#include <iostream>

using namespace std;

class Complex
{
    private:

        double real, imaginary;

    public:

        Complex()
        {
            real = 0.0;
            imaginary = 0.0;
        }

        Complex(double r, double i)
        {
            real = r;
            imaginary = i;
        }

        Complex(Complex &copy)
        {
            real = copy.real;
            imaginary = copy.imaginary;
        }

        void setReal(double r)
        {
            real = r;
        }

        double getReal()
        {
            return real;
        }

        void setImaginary(double i)
        {
            imaginary = i;
        }

        double getImaginary()
        {
            return imaginary;
        }

        Complex addComplex(double r)
        {
            this->real = this->real + r;
            return *this;
        }

        Complex addComplex(Complex &c1)
        {
            this->real = this->real + c1.real;
            this->imaginary = this->imaginary + c1.imaginary;

            return *this;
        }

        Complex subComplex(double r)
        {
            this->real = this->real - r;
            return *this;
        }

        Complex subComplex(Complex &c1)
        {
            this->real = this->real - c1.real;
            this->imaginary = this->imaginary - c1.imaginary;

            return *this;
        }

        Complex mulComplex(double n)
        {
            this->real = this->real * n;
            this->imaginary = this->imaginary * n;

            return *this;
        }

        Complex mulComplex(Complex &c1)
        {
            int r = 0, i = 0;

            r = ((this->real * c1.real) - (this->imaginary * c1.imaginary));
            i = ((this->real * c1.imaginary) - (this->imaginary * c1.real));

            this->real = r;
            this->imaginary = i;

            return *this;
        }
};

int main()
{
    int n = 2, r = 1;

    Complex C1;

    Complex C2(1, 1);

    Complex C3(1, 1); 

    Complex C4(5, 3);
    
    Complex C5(4, 3);

    cout << "\n\n After Initializing by default constructor : " << C1.getReal() << " + " << C1.getImaginary() << "i";

    cout << "\n\n After Initializing by parameterized constructor : " << C2.getReal() << " + " << C2.getImaginary() << "i";

    cout << "\n\n (r = 1)";
    C2.addComplex(r);
    cout << "\n\n After adding r to complex number : " << C2.getReal() << " + " << C2.getImaginary() << "i";

    C2.addComplex(C3);
    cout << "\n\n After adding two complex numbers : " << C2.getReal() << " + " << C2.getImaginary() << "i";

    C2.subComplex(r);
    cout << "\n\n After subtracting r from complex number : " << C2.getReal() << " + " << C2.getImaginary() << "i";

    C2.subComplex(C3);
    cout << "\n\n After subtracting two complex numbers : " << C2.getReal() << " + " << C2.getImaginary() << "i";

    cout << "\n\n (n = 2)";
    C2.mulComplex(n);
    cout << "\n\n After multiplying n to complex number : " << C2.getReal() << " + " << C2.getImaginary() << "i";

    C4.mulComplex(C5);
    cout << "\n\n After multiplying two complex numbers : " << C4.getReal() << " + " << C4.getImaginary() << "i";
}