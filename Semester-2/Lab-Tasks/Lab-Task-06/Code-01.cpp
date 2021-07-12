/*
    Name : Waleed Bin Osama
    Roll Number : 20I-2440
    Section : A
    Lab Task : 07_1
*/

#include <iostream>

using namespace std;

class students
{
    private:
        int Age, Standard;
        string FirstName, LastName;

    public:
        students()
        {
            Age = 0;
            Standard = 0;
            FirstName = "";
            LastName = "";
        }

        students(int x, int y, string a, string b)
        {
            Age = x;
            Standard = y;
            FirstName = a;
            LastName = b;
        }

        void SetAge(int x)
        {
            Age = x;
        }

        int GetAge()
        {
            return Age;
        }


        void SetStandard(int y)
        {
            Standard = y;
        }

        int GetStandard()
        {
            return Standard;
        }


        void SetFirstName(string a)
        {
            FirstName = a;
        }

        string GetFirstName()
        {
            return FirstName;
        }


        void SetLastName(string b)
        {
            LastName = b;
        }

        string GetLastName()
        {
            return LastName;
        }


        string ToString()
        {
            return to_string(Age) + ", " + FirstName + ", " + LastName + ", " + to_string(Standard);
        }
};

int main()
{
    int age, standard;
    string firstname, lastname;


    students S(19, 13, "Waleed", "Osama");
    cout << "\n Parameterized values : ";
    cout << S.ToString();


    cout << "\n\n Enter new age : ";
    cin >> age;
    S.SetAge(age);
    cout << " Updated age is : ";
    cout << S.GetAge();


    cout << "\n\n Enter new standard : ";
    cin >> standard;
    S.SetStandard(standard);
    cout << " Updated standard is : ";
    cout << S.GetStandard();


    cout << "\n\n Enter new first name : ";
    cin >> firstname;
    S.SetFirstName(firstname);
    cout << " Updated first name is : ";
    cout << S.GetFirstName();


    cout << "\n\n Enter last name age : ";
    cin >> lastname;
    S.SetLastName(lastname);
    cout << " Updated last name is : ";
    cout << S.GetLastName();


    cout << "\n\n Updated values : ";
    cout << S.ToString();
}