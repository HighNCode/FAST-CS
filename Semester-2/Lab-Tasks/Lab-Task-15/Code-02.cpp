/*
Name : Waleed Bin Osama
Roll Number : 2OI-2440
Section : CS-A
Lab Task : 14
*/

#include <iostream>
#include <fstream>

using namespace std;

class PhoneDirectory
{
    private:

        string name;
        int num;
        string email;
        fstream file;

    public:

        void filing()
        {
            file.open("phonedir.txt", ios::app);

            if (!file)
            {
                cout << "\n\n Error in creating file.";
                exit(0);
            }

            cout << "\n\n File created successfully.";

            file.close();
        }

        void write()
        {
            
            cout << "\n Enter your name : ";
            getline(cin, name);
            cout << "\n Enter your contact number : ";
            cin >> num;
             cout << "\n Enter your email : ";
            getline(cin, email);
            file.open("phonedir.txt", ios::app);

            file << name << " " << num << " "<< email << endl;
        
            file.close();
        }

        void read()
        {
            file.open("Student.txt", ios::app);

            file >> name >>num>>email;

            cout << "\n Registeration Number : " << reg;
            cout << "\n         Student Name : " << name;
            cout << "\n     Program of Study : " << prog;
            cout << "\n       Contact Number : " << num;

            file.close();
        }
};

int main()
{
    Student SF;
    Student S[3];

    SF.filing();

    for(int x = 0; x < 3; x++)
    {
        cout << "\n Info of Student " << x + 1;
        S[x].write();
    }

    for(int x = 0; x < 3; x++)
    {
        cout << "\n Info of Student " << x + 1;
        S[x].read();
    }
}