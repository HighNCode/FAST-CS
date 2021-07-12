/*
    Name : Waleed Bin Osama
    Roll Number : 20I-2440
    Section : A
    Lab Task : 05
*/

#include <iostream>
#include <iomanip>

using namespace std;

struct Problem01
{
    int num, age, house, street, code;
    string name, city, country;

    void input()
    {
        cout << "\n Enter roll number : ";
        cin >> num;
        cin.ignore();
        cout << "\n Enter student's name : ";
        getline(cin, name);
        cout << "\n Enter student's age(11-14) : ";
        cin >> age;

        while (age < 11 || age > 14)
        {
            cout << "\n Enter student's age(11-14) : ";
            cin >> age;
        }

        cout << "\n Enter house nunmber : ";
        cin >> house;
        cout << "\n Enter street number : ";
        cin >> street;
        cout << "\n Enter city name : ";
        cin >> city;
        cout << "\n Enter postal code : ";
        cin >> code;
        cout << "\n Enter country name : ";
        cin >> country;
    }
};

struct Problem02
{
    int num, phys, chem, maths;
    string name;
    double percentage;

    void input()
    {
        cout << "\n Enter roll no : ";
        cin >> num;
        cin.ignore();
        cout << "\n Enter student's name : ";
        getline(cin, name);
        cout << "\n Enter chemistry marks : ";
        cin >> chem;
        cout << "\n Enter maths marks : ";
        cin >> maths;
        cout << "\n Enter physics marks : ";
        cin >> phys;
    }

    void calculate()
    {
        percentage = (double(chem + maths + phys) / 300) * 100;
        
        cout << "Percentage of " << name << " is " << fixed << setprecision(2) << percentage << endl;
    }   
};

struct Problem03
{
    int hours;
    int mins;
    int secs;

    struct Problem03 time(struct Problem03 start, struct Problem03 stop)
    {
        hours = start.hours - stop.hours;
        mins = start.mins - stop.mins;
        secs = start.secs - stop.secs;

        cout << "\n The difference of time is " << hours << ":" << mins << ":" << secs << ".";
    }
};

struct Problem04
{
    int feets, inches;

    struct Problem04 add(int a, int b, int x, int y)
    {
        feets = a + b;
        inches = x + y;

        while (inches >= 12)
        {
            feets = feets + 1;
            inches = inches - 12;
        }

        cout << "\n The total distance is " << feets << "'" << inches << ".";
    }
};

int main()
{
    /*
    Problem01 S[10];

    for (int x = 0; x < 2; x++)
    {    
        cout << "\n The information of student " << x + 1 << ".";

        S[x].input();
    }
    */

    /*
    Problem02 M[2];

    for (int x = 0; x < 2; x++)
    {
        cout << "\n The information of student " << x + 1 << ".";
        M[x].input();
    }

    cout << "\n The percentages of students.";

    for (int x = 0; x < 2; x++)
    {
        M[x].calculate();
    }

    cout << endl;
    */

    /*
    Problem03 T, T1, T2;

    cout << "\n Enter hours of start time : ";
    cin >> T1.hours;
    cout << "\n Enter minutes of start time : ";
    cin >> T1.mins;
    cout << "\n Enter seconds of start time : ";
    cin >> T1.secs;

    cout << "\n Enter hours of stop time : ";
    cin >> T2.hours;
    cout << "\n Enter minutes of stop time : ";
    cin >> T2.mins;
    cout << "\n Enter seconds of stop time : ";
    cin >> T2.secs;

    T.time(T1, T2);
    */

    /*
    int D1F, D1I, D2F, D2I;

    cout << "\n Enter feets of distance 1 : ";
    cin >> D1F;
    cout << "\n Enter inches of distance 1 : ";
    cin >> D1I;

    cout << "\n Enter feets of distance 2 : ";
    cin >> D2F;
    cout << "\n Enter inches of distance 2 : ";
    cin >> D2I;

    Problem04 D;

    D.add(D1F, D2F, D1I, D2I);
    */
}