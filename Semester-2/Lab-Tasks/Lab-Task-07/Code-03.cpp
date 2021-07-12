/*
    Name : Waleed Bin Osama
    Roll Number : 20I-2440
    Section : CS-A
    Lab Task : 08
    Question : 03
*/

#include <iostream>

using namespace std;

class Point
{
    private:
        int x;
        int y;

    public:
        Point()
        {
            x = 0;
            y = 0;

            cout << x << y << endl;
        }

        Point(int x1, int y1)
        {
            x = x1;
            y = y1;

            cout << x << y << endl;
        }

        Point(Point &copy)
        {
            x = copy.x;
            y = copy.y;

            cout << x << y << endl;
        }

        ~Point()
        {
            cout << "\n Destructor Called.";
        }

        void setx(int x1)
        {
            x = x1;
        }

        int getx()
        {
            return x;
        }

        void sety(int y1)
        {
            y = y1;
        }

        int gety()
        {
            return y;
        }
};

int main()
{
    Point P1;

    Point P2(10, 20);

    Point P3(30, 40);

    Point P4(P3);

    Point P5 = P3;

    Point *PointVar = new Point(P3);
}