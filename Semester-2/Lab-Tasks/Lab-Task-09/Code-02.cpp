/*
    Name : Waleed Bin Osama
    Roll Number : 20I-2440
    Section : CS-A
    Lab Task : 10
*/

#include <iostream>

using namespace std;

class Operations
{
    private:

        int operand1, operand2;

    public:

        void getData();
        void sum();
        void product();
};

inline void Operations :: getData()
{
    cout << "\n Enter number 1 : ";
    cin >> operand1;

    cout << "\n Enter number 2 : ";
    cin >> operand2;
}

inline void Operations :: sum()
{
    cout << "\n The addition of operands is " << operand1 + operand2;
}

inline void Operations :: product()
{
    cout << "\n The product of operands is " << operand1 * operand2;
}

int main()
{
    cout << "\n This function is an inline function.";

    Operations O;

    O.getData();
    O.sum();
    O.product();
}