/*
    Name : Waleed Bin Osama
    Roll Number : 20I-2440
    Section : CS-A
    Lab Task : 13
*/

#include <iostream>

using namespace std;

class Member
{
    private:

        string Name;
        int Age;
        int Number;
        string Address;
        int Salary;

    public:

        Member()
        {
            Name = " ";
            Age = 0;
            Number = 0;
            Address = " ";
            Salary = 0;
        }

        Member(string Nm, int Ag, int Nb, string Ad, int Sr)
        {
            Name = Nm;
            Age = Ag;
            Number = Nb;
            Address = Ad;
            Salary = Sr;
        }

        void printSalary()
        {
            cout << "\n Name : " << Name;
            cout << "\n Age : " << Age;
            cout << "\n Number : " << Number;
            cout << "\n Address : " << Address;
            cout << "\n Salary : " << Salary;
        }
        
};

class Employee : public Member
{
    private:

        string Specialization;
    
    public:

        Employee()
        {
            Member();
            Specialization = " ";
        }

        Employee(string Sp) : Member("Waleed", 19, 0336, "Lahore", 1000)
        {
            Specialization = Sp;
        }
};

class Manager : public Member
{
    private:

        string Department;
    
    public:

        Manager()
        {
            Member();
            Department = " ";
        }

        Manager(string Dp) : Member("Hadiya", 9, 0336, "Islamabad", 5000)
        {
            Department = Dp;
        }
};

int main()
{
    Employee E("Computer Expert");
    Manager M("IT");

    E.printSalary();
    M.printSalary();
}