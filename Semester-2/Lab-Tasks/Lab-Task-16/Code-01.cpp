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

template <class Temp>
Temp power(Temp base, Temp exponent)
{
    return pow(base, exponent);
}

template <class Temp>
Temp root(Temp number)
{
    return sqrt(number);
}

template <class Temp>
Temp sin(Temp number)
{
    return sin(number);
}

template <class Temp>
Temp cos(Temp number)
{
    return cos(number);
}

template <class Temp>
Temp tan(Temp number)
{
    return tan(number);
}

int main()
{
    int result1;
    double result2;

    result1 = power<int>(4, 2);
    cout << "\n\n Power Template Function : " << result1;

    result1 = root<int>(9);
    cout << "\n\n Square root Template Function : " << result1;

    result2 = sin<float>(0.0023);
    cout << "\n\n Sin Template Function : " << result2;

    result2 = cos<float>(0.0023);
    cout << "\n\n Sin Template Function : " << result2;

    result2 = tan<float>(0.0023);
    cout << "\n\n Sin Template Function : " << result2;
}