/*
    Name : Waleed Bin Osama
    Roll Number : 20I-2440
    Section : CS-A
    Lab Task : 09
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

        void operator = (const Matrix & mat)
        {
            rows = mat.rows;
            columns = mat.columns;

            matrix = new int* [columns];

            for(int x = 0; x < rows; x++)
            {
                matrix[x] = new int [columns];
            }

            for(int x = 0; x < rows; x++)
            {
                for(int y = 0; y < columns; y++)
                {
                    matrix[x][y] = mat.matrix[x][y];
                }
            }
        }

        bool operator == (const Matrix & mat)
        {
            if((rows == mat.rows) && (columns == mat.columns))
            {
                for(int x = 0; x < rows; x++)
                {
                    for(int y = 0; y < columns; y++)
                    {
                        if(matrix[x][y] == mat.matrix[x][y])
                        {
                            return true;
                        }
                    }
                }
            }
            
            return false;
        }

        Matrix& operator * (int temp)
        {
            for(int x = 0; x < rows; x++)
            {
                for(int y = 0; y < columns; y++)
                {
                    this -> matrix[x][y] = this -> matrix[x][y] * temp;
                }
            }

            return *this;
        }

        Matrix& operator / (int temp)
        {
            for(int x = 0; x < rows; x++)
            {
                for(int y = 0; y < columns; y++)
                {
                    this -> matrix[x][y] = this -> matrix[x][y] / temp;
                }
            }

            return *this;
        }

        Matrix& operator * (const Matrix & mat)
        {
            if(columns == mat.rows)
            {
                for(int x = 0; x < rows; x++)
                {
                    for(int y = 0; y < columns; y++)
                    {
                        this -> matrix[x][y] *= mat.matrix[x][y];
                    }
                }
            }

            else
            {
                cout << "\n Multiplication is not possible.";
            }

            return *this;
        }

        Matrix& operator / (const Matrix & mat)
        {
            if((rows == mat.rows) && (columns == mat.columns))
            {
                for(int x = 0; x < rows; x++)
                {
                    for(int y = 0; y < columns; y++)
                    {
                        this -> matrix[x][y] /= mat.matrix[x][y];
                    }
                }
            }
            
            else
            {
                cout << "\n Division is not possible.";
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
    int temp = 2;

    Matrix M;

    Matrix M1(3, 3);
    Matrix M2(3, 3);

    cout << "\n\n Press enter if you want to overload assignment operator.";
    cin.get() >> opt;

    M = M2;
    M.output();


    cout << "\n\n Press enter if you want to overload equal to operator.";
    cin.get() >> opt;

    if(M == M2)
        cout << "\n Both objects are equal.";
    
    else
        cout << "\n Both objects are not equal.";


    cout << "\n\n Press enter if you want to overload scalar multiplication operator.";
    cin.get() >> opt;

    cout << "\n Matrix 1 : \n";
    M1 * temp;
    M1.output();

    cout << "\n Matrix 2 : \n";
    M2 * temp;
    M2.output();


    cout << "\n\n Press enter if you want to overload scalar division operator.";
    cin.get() >> opt;

    cout << "\n Matrix 1 : \n";
    M1 / temp;
    M1.output();

    cout << "\n Matrix 2 : \n";
    M2 / temp;
    M2.output();


    cout << "\n\n Press enter if you want to overload matrix multiplication operator.";
    cin.get() >> opt;

    M * M2;
    M.output();


    cout << "\n\n Press enter if you want to overload matrix division operator.";
    cin.get() >> opt;

    M1 / M2;
    M1.output();
}