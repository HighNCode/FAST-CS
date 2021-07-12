/*
    Name : Waleed Bin Osama
    Roll Number : 20I-2440
    Section : CS-A
    Lab Task : 10
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

class Matrix
{
    private:

        int rows, columns, **matrix;

    public:

        Matrix()
        {
            rows = 0;
            columns = 0;

            matrix = new int* [columns];

            for(int x = 0; x < rows; x++)
            {
                matrix[x] = new int [columns];
            }

            for(int x = 0; x < rows; x++)
            {
                for(int y = 0; y < columns; y++)
                {
                    matrix[x][y] = 0;
                }
            }
        }

        Matrix (int r, int c)
        {
            rows = r;
            columns = c;

            matrix = new int* [columns];

            for(int x = 0; x < rows; x++)
            {
                matrix[x] = new int [columns];
            }

            for(int x = 0; x < rows; x++)
            {
                for(int y = 0; y < columns; y++)
                {
                    matrix[x][y] = rand() % 10 + 1;
                }
            }
        }

        void setRows(int r)
        {
            rows = r;
        }

        int getRows()
        {
            return rows;
        }

        void setCol(int c)
        {
            columns = c;
        }

        int getCol()
        {
            return columns;
        }

        Matrix& operator ++ ()
        {
            for(int x = 0; x < rows; x++)
            {
                for(int y = 0; y < columns; y++)
                {
                    this -> matrix[x][y] = ++matrix[x][y];
                }
            }

            return *this;
        }

        Matrix& operator ++ (int)
        {
            for(int x = 0; x < rows; x++)
            {
                for(int y = 0; y < columns; y++)
                {
                    this -> matrix[x][y] = matrix[x][y]++;
                }
            }

            return *this;
        }

        Matrix& operator -- ()
        {
            for(int x = 0; x < rows; x++)
            {
                for(int y = 0; y < columns; y++)
                {
                    this -> matrix[x][y] = --matrix[x][y];
                }
            }

            return *this;
        }

        Matrix& operator -- (int)
        {
            for(int x = 0; x < rows; x++)
            {
                for(int y = 0; y < columns; y++)
                {
                    this -> matrix[x][y] = matrix[x][y]--;
                }
            }

            return *this;
        }

        void output () const
        {
            for(int x = 0; x < rows; x++)
            {
                for(int y = 0; y < columns; y++)
                {
                    cout << matrix[x][y] << " ";
                }

                cout << endl;
            }
        }

        ~Matrix()
        {
            for(int x = 0; x < rows; x++)
            {
                delete[] matrix[x];
            }

            cout << "\n\n Destructor called.";
        }
};

int main()
{
    srand(0);
    char opt;
    int r, c;

    cout << "\n Enter the number of rows : ";
    cin >> r;
    cout << "\n Enter the number of columns : ";
    cin >> c;

    Matrix M;
    Matrix M1(3, 3);
    Matrix M2(r, c);


    cout << "\n\n Press enter if you want to output the intial matrix.";
    cin.get() >> opt;

    cout << "\n Intial matrix is : \n";
    M2.output();


    cout << "\n\n Press enter if you want to overload pre-fix increment operator.";
    cin.get() >> opt;

    M = ++M2;
    M.output();


    cout << "\n\n Press enter if you want to overload post-fix increment operator.";
    cin.get() >> opt;

    M = M2++;
    M.output();


    cout << "\n\n Press enter if you want to overload pre-fix decrement operator.";
    cin.get() >> opt;

    M = --M2;
    M.output();


    cout << "\n\n Press enter if you want to overload post-fix decrement operator.";
    cin.get() >> opt;

    M = M2--;
    M.output();
}