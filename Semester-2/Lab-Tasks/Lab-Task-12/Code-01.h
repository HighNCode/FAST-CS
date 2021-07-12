#include <iostream>

using namespace std;

class Processor
{
    private:

        string ProcessorName;
        double Price;

    public:

        Processor();
        Processor :: Processor(string, double);
        void setProcessorName(string);
        string getProcessorName();
        void setPrice(double);
        double getPrice();
        void display();
};

class MainMemory
{
    private:

        int Size;
        double Price;

    public:

        MainMemory();
        MainMemory :: MainMemory(int, double);
        void setSize(int);
        int getSize();
        void setPrice(double);
        double getPrice();
        void display();
};

class Motherboard
{
    private:

        string CompName;

    public:

        Motherboard();
        Motherboard :: Motherboard(string);
        void setCompName(string);
        string getCompName();
        void display();
};

class Computer
{
    private:

        Processor Proc;
        MainMemory Ram;
        Motherboard *Mboard;

    public:

        Computer(Processor, MainMemory);
        void display();
};