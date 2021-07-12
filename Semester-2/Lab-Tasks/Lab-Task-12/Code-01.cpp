#include <iostream>
#include "20I-2440_CS-A_LabTask12_01.h"

using namespace std;



Processor :: Processor()
{
    ProcessorName = "NULL";
    Price = 0.0;
}

Processor :: Processor(string PN, double P)
{
    ProcessorName = PN;
    Price = P;
}

void Processor :: setProcessorName(string PN)
{
    ProcessorName = PN;
}

string Processor :: getProcessorName()
{
    return ProcessorName;
}

void Processor :: setPrice(double P)
{
    Price = P;
}

double Processor :: getPrice()
{
    return Price;
}

void Processor :: display()
{
    cout << "\n Precessor name : " << ProcessorName;
    cout << "\n Price of processor : " << Price;
}



MainMemory :: MainMemory()
{
    Size = 0;
    Price = 0.0;
}

MainMemory :: MainMemory(int S, double P)
{
    Size = S;
    Price = P;
}

void MainMemory :: setSize(int S)
{
    Size = S;
}

int MainMemory :: getSize()
{
    return Size;
}

void MainMemory :: setPrice(double P)
{
    Price = P;
}

double MainMemory :: getPrice()
{
    return Price;
}

void MainMemory :: display()
{
    cout << "\n Size of main memory : " << Size;
    cout << "\n Price of main memory : " << Price;
}



Motherboard :: Motherboard()
{
    CompName = "NULL";
}

Motherboard :: Motherboard(string C)
{
    CompName = C;
}

void Motherboard :: setCompName(string C)
{
    CompName = C;
}

string Motherboard :: getCompName()
{
    return CompName;
}

void Motherboard :: display()
{
    cout << "\n Company name : " << CompName;
}



Computer :: Computer(Processor P, MainMemory MM)
{
    Proc = P;
    Ram = MM;
    Mboard = new Motherboard;
}

void Computer :: display()
{
    Proc.display();
    Ram.display();
    Mboard -> display();
}



int main()
{
    string procname, compname;
    int memorysize;
    double procprice, memoryprice;

    cout << "\n Enter processor name : ";
    cin >> procname;
    cout << "\n Enter processor price : ";
    cin >> procprice;

    cout << "\n Enter memory size : ";
    cin >> memorysize;
    cout << "\n Enter memory price : ";
    cin >> memoryprice;

    cout << "\n Enter company name : ";
    cin >> compname;


    Processor P(procname, procprice);
    MainMemory M(memorysize, memoryprice);
    Motherboard C(compname);
    Computer Comp(P, M);

    Comp.display();
}