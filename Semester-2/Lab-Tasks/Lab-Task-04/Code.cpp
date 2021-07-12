/*
    Name : Waleed Bin Osama
    Roll Number : 20I-2440
    Section : A
    Lab Task : 04
*/

#include <iostream>

using namespace std;

int Problem02(int);
int Problem03A(int);
int Problem03B(int);
int Problem04(string, int, int);
int Problem05(int);

int main()
{
    /*
    int num;

    cout << "\n Enter the number you want to convert from base 10 to base 2 : ";
    cin >> num;

    cout << "\n The binary form is : " << Problem02(num);
*/

/*
    int num;

    cout << "\n Enter the number of terms : ";
    cin >> num;

    cout << "\n The nth term of fabinocci series is : " << Problem03A(num);
*/

/*
    int num;

	cout << "\n Enter the number of terms : ";
    cin >> num;

    Problem03B(num);
*/

/*
    string str;
	int num1, num2;

	cout << "\n Enter a string : ";
	getline(cin, str);

	num1 = 0;
	num2 = str.length() - 1;

	if(Problem04(str, num1, num2))
		cout << "\n This is a palindrome.";

	else
		cout << "\n This is not a palindrome.";
*/

/*
    int num;

    cout << "\n Enter the number you want to reverse: ";
    cin >> num;

    cout << "\n The reverse form is : " << Problem05(num);
*/

    return 0;
}

int Problem02(int x)
{
    if(x == 0)
        return 0;
    else
        return (x % 2 + 10 * Problem02(x / 2));
}

int Problem03A(int x)
{
    int term0 = 0, term1 = 1, termnext;

    for(int y = 0; y < x; y++)
    {
        if(y == 0)
        {
            cout << "\n fib(" << y << ") = " << term0;
            continue;
        }

        if(y == 1)
        {
            cout << "\n fib(" << y << ") = " << term1;
            continue;
        }

        termnext = term0 + term1;
        term0 = term1;
        term1 = termnext;

        cout << "\n fib(" << y << ") = " << termnext;
    }
    return 0;
}

int Problem03B(int x)
{
	if(x <= 0)
		return 0;

	else if(x == 1)
		return 1;

	else
		return Problem03B(x-1) + Problem03B(x-2);
}

int Problem04(string x, int y, int z)
{
	if(y >= z)
		return 1;

	if(x[y] != x[z])
		return 0;

	return Problem04(x, y + 1, z - 1);
}

int Problem05(int x)
{
    int rem;

    if(x == 0)
        return 0;
    else
    {
        rem = x % 10;
        cout << rem;
        Problem05(x / 10);
    }
    return 0;
}