/*
Name : Waleed Bin Osama
Roll Number : 2OI-2440
Section : CS-A
Lab Task : 15
*/

#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

template <class X, class Y>

class calculator
{
    private:
        X x;
        Y y;

    public:
        calculator();
        calculator(X, Y);
        X add();
        X mul();
        X div();
};

template <class X, class Y>
calculator<X, Y> :: calculator()
{

}

template <class X, class Y>
calculator<X, Y> :: calculator(X num1, Y num2)
{
    x = num1;
    y = num2;
}

template <class X, class Y>
X calculator<X, Y> :: add()
{
    return x + y;
}

template <class X, class Y>
X calculator<X, Y> :: mul()
{
    return x * y;
}

template <class X, class Y>
X calculator<X, Y> :: div()
{
    return x / y;
}

int main()
{
    calculator <int, int> z(20, 10);

    cout << "\n Sum : " << z.add();
    cout << "\n Product : " << z.mul();
    cout << "\n Division : " << z.div();
    cout << "\n";
}