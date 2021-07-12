/*
    Name : Waleed Bin Osama
    Roll Number : 20I-2440
    Section : CS-A
    Lab Task : 10
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

class Set
{
    private:

        int size, *array;

    public:

        friend void operator + (Set, Set);
        friend void operator - (Set, Set);

        Set()
        {
            size = 0;

            array = new int [size];

            for(int x = 0; x < size; x++)
            {
                    array[x] = 0;
            }
        }

        Set (int s)
        {
            size = s;

            array = new int [size];

            for(int x = 0; x < size; x++)
            {
                array[x] = rand() % 10 + 1;
            }
        }

        void output() const
        {
            cout << " ";
        }

        ~Set()
        {
            cout << "\n\n Destructor called.";
        }
};

void operator + (Set obj1, Set obj2)
{
    int temp;

    cout << "{";

    for(int x = 0; x < obj1.size; x++)
    {
        cout << " " << obj1.array[x];
    }

    for(int x = 0; x < obj2.size; x++)
    {
        temp = 1;

        for(int y = 0; y < obj1.size; y++)
        {
            if(obj1.array[y] == obj2.array[x])
            {
                break;
            }

            else
            {
                temp++;

                if(temp == obj1.size)
                {
                    cout << " " << obj2.array[x];
                }
            }
        }
    }

    cout << " }";
}

void operator - (Set obj1, Set obj2)
{

}

int main()
{
    srand(0);
    
    Set S;
    Set S1(4);
    Set S2(5);

    S1 + S2;
}