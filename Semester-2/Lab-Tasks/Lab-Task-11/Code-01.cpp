/*
    Name : Waleed Bin Osama
    Roll Number : 20I-2440
    Section : CS-A
    Lab Task : 11
*/

#include <iostream>
#include <cstring>

using namespace std;

class String
{
    private:

        char string[20] = "";

    public:

        void input ();
        void output ();
        void operator = (String);
        bool operator == (String);
        bool operator != (String);
        bool operator < (String);
        bool operator > (String);
        bool operator <= (String);
        bool operator >= (String);
        void operator + (String);
        void operator += (String);
};


void String :: input ()
{
	cout << "\n Enter the string : ";
	cin >> string;
}

void String :: output ()
{
	cout << "\n " << string;
}

bool String :: operator == (String temp)
{
	if (strcmp(string, temp.string) == 0)
		return true;

	else
		return false;
}

void String :: operator = (String temp)
{
	strcpy (temp.string, string);

	cout << temp.string;
}

bool String :: operator != (String temp)
{
	if (strcmp(string, temp.string) == 0)
		return false;

	else
		return true;
}

void String :: operator + (String temp)
{
	strcat(string, temp.string);
}

void String :: operator += (String temp)
{
	strcat(string, temp.string);
}

bool String :: operator > (String temp)
{
	int len1, len2;

	len1 = strlen (string);
	len2 = strlen (temp.string);

	if (len2 < len1)
		return true;

	else
		return false;
}

bool String ::operator<( String temp )
{
	int len1, len2;

	len1 = strlen (string);
	len2 = strlen (temp.string);

	if (len2 > len1)
		return true;

	else
		return false;
}

bool String :: operator <= (String temp)
{
	int len1, len2;

	len1 = strlen (string);
	len2 = strlen (temp.string);

	if (len2 >= len1)
		return true;

	else
		return false;
}

bool String :: operator >= (String temp)
{
	int len1, len2;

	len1 = strlen (string);
	len2 = strlen(temp.string);

	if(len2 <= len1)
		return true;

	else
		return false;
}


int main()
{
	String S1;
    String S2;

	S1.input();
	S1.output();

	S2.input();
	S2.output();

	if (S1 == S2)
		cout << "\n Strings are equal.";

	if(S1 != S2)
		cout << "\n Strings are not equal.";

	if(S1 > S2)
		cout<<"\n String 1 is greater than string 2.";

    if(S1 < S2)
		cout<<"\n String 2 is greater.";

	if(S1 >= S2)
		cout << "\n String 1 is greater than or equal to string 2.";

	if(S1 <= S2)
		cout << "\n String 2 is greater than or equal to string 1.";

	S1 = S2;
    S1.output();

	S1 + S2;
    S1.output();

	S1 += S2;
    S1.output();
}