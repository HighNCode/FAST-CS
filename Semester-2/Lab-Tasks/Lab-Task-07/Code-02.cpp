/*
    Name : Waleed Bin Osama
    Roll Number : 20I-2440
    Section : CS-A
    Lab Task : 08
    Question : 02
*/

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class Holiday
{
    private:

        string name;
        int day;
        string month;

    public:

        Holiday()
        {
            name = "";
            day = 0;
            month = "";
        }

        Holiday(string &n, int d, string &m)
        {
            name = n;
            day = d;
            month = m;
        }

        bool setName(string &s)
        {
            if(s.length() <= 50)
            {
                name = s;
                return true;
            }

            return false;
        }

        string getName()
        {
            return name;
        }

        bool setDay(int u)
        {
            if(u >= 0)
            {
                day = u;
                return true;
            }

            return false;
        }

        int getDay()
        {
            return day;
        }

        bool setMonth(string &p)
        {
            if(p.length() <= 10)
            {
                month = p;
                return true;
            }

            return false;
        }

        string getMonth()
        {
            return month;
        }
};

bool inSameMonth(Holiday &a, Holiday &b)
{
    if(a.getMonth() == b.getMonth())
    {
        return true;
    }

    return false;
}

double avgDate(Holiday arr[], int size)
{
    double sum = 0, avg;

    for(int x = 0; x < size; x++)
    {
        sum = sum + arr[x].getDay();
    }

    avg = sum / size;

    return avg;
}

int main()
{
    string n;
    int d;
    string m;

    int size;
    Holiday arr[size];

    Holiday H1;

    cout << "\n Enter default name : ";
    cin >> n;
    cout << "\n Enter default day : ";
    cin >> d;
    cout << "\n Enter default month : ";
    cin >> m;

    Holiday H2(n, d, m);

    Holiday H3;

    cout << "\n Enter new name : ";
    cin >> n;
    H3.setName(n);

    while(H3.setName(n) == 0)
    {
        cout << "\n Enter new name with characters less than 50 : ";
        cin >> m;  
        H3.setMonth(m);
    }

    cout << "\n Enter new day : ";
    cin >> d;
    H3.setDay(d);

    while(H3.setDay(d) == 0)
    {
        cout << "\n Enter new day greater than zero : ";
        cin >> d;
        H3.setDay(d);
    }

    cout << "\n Enter new month : ";
    cin >> m;  
    H3.setMonth(m);

    while(H3.setMonth(m) == 0)
    {
        cout << "\n Enter new month with characters less than 10 : ";
        cin >> m;  
        H3.setMonth(m);
    }

    if(inSameMonth(H2, H3) == 0)
    {
        cout << "\n The months are different.";
    }

    cout << "\n The months are same.";

    cout << "\n Enter the size of the array : ";
    cin >> size;

    for(int x = 0; x < size; x++)
    {
        cout << "\n Enter the array values for day : ";
        cin >> d;
        arr[x].setDay(d);
    }
    
    cout << "\n The average of days are : " << avgDate(arr, size);
}