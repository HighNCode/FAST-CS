/*
    Name : Waleed Bin Osama
    Roll Number : 20I-2440
    Section : CS-A
    Lab Task : 11
*/

#include <iostream>
#include <cstdlib>

using namespace std;

class Matrix
{
    private:

        int rows, columns, sells, ***matrix;

    public:

        Matrix ();
        Matrix (int r, int c, int s);
        void input (int r, int c, int s);
        Matrix& operator + (const Matrix & mat);
        void output () const;
        ~Matrix ();
};


Matrix :: Matrix ()
{
    rows = 0;
    columns = 0;
    sells = 0;

    matrix = new int** [rows];

    for(int x = 0; x < rows; x++)
    {
        matrix[x] = new int* [columns];

        for(int y = 0; y < columns; y++)
        {
            matrix[x][y] = new int [sells];
        }
    }

    for(int x = 0; x < rows; x++)
    {
        for(int y = 0; y < columns; y++)
        {
            for(int z = 0; z < sells; z++)
            {
                matrix[x][y][z] = 0;
            }
        }
    }
}

Matrix :: Matrix (int r, int c, int s)
{
    rows = r;
    columns = c;
    sells = s;

    matrix = new int** [rows];

    for(int x = 0; x < rows; x++)
    {
        matrix[x] = new int* [columns];

        for(int y = 0; y < columns; y++)
        {
            matrix[x][y] = new int [sells];
        }
    }

    for(int x = 0; x < rows; x++)
    {
        for(int y = 0; y < columns; y++)
        {
            for(int z = 0; z < sells; z++)
            {
                matrix[x][y][z] = rand() % 10 + 1;
            }
        }
    }
}

void Matrix :: input (int r, int c, int s)
{
    rows = r;
    columns = c;
    sells = s;

    matrix = new int** [rows];

    for(int x = 0; x < rows; x++)
    {
        matrix[x] = new int* [columns];

        for(int y = 0; y < columns; y++)
        {
            matrix[x][y] = new int [sells];
        }
    }

    for(int x = 0; x < rows; x++)
    {
        for(int y = 0; y < columns; y++)
        {
            for(int z = 0; z < sells; z++)
            {
                cout << "\n Enter element of row " << x + 1 << ", column " << y + 1 << " and cell " << z + 1 << " : ";
                cin >> matrix[x][y][z];
            }
        }
    }
}

Matrix& Matrix :: operator + (const Matrix & mat)
{
    for(int x = 0; x < rows; x++)
    {
        for(int y = 0; y < columns; y++)
        {
            for(int z = 0; z < sells; z++)
            {
                this -> matrix[x][y][z] += mat.matrix[x][y][z];
            }
        }
    }

    return *this;
}

void Matrix :: output () const
{
    cout << endl;

    for(int x = 0; x < rows; x++)
    {
        for(int y = 0; y < columns; y++)
        {
            for(int z = 0; z < sells; z++)
            {
                cout << matrix[x][y][z] << " ";
            }

            cout << "  ";
        }

        cout << endl;
    }
}

Matrix :: ~Matrix ()
{
    for(int x = 0; x < columns; x++)
    {
        for(int y = 0; y < sells; y++)
        {
            delete[] matrix[x][y];
        }

        delete[] matrix[x];
    }

    delete[] matrix;

    cout << "\n\n Destructor called.";
}


int main()
{
    srand(0);
    
    char opt;
    int rows, columns, sells;

    cout << "\n Enter rows : ";
    cin >> rows;
    cout << "\n Enter columns : ";
    cin >> columns;
    cout << "\n Enter cells : ";
    cin >> sells;

    Matrix M;
    Matrix M1(rows, columns, sells);
    Matrix M2;


    cout << "\n\n Press enter if you want to output first matrix.";
    cin.get() >> opt;
    cin.get() >> opt;

    M1.output();


    cout << "\n\n Press enter if you want to take inputs of second matrix.";
    cin.get() >> opt;

    M2.input(rows, columns, sells);
    M2.output();


    cout << "\n\n Press enter if you want to overload matrix addition operator.";
    cin.get() >> opt;
    cin.get() >> opt;

    M1 + M2;
    M1.output();
}