/*
	Name : Waleed Bin Osama
	Roll No : 20I-2440
	Section : A
	Lab Task : 03
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void Task01(int*, int);
void Task02A(int**, int, int[]);
void Task02B(int**, int, int[]);
void Task02C(int**, int, int[]);
void Task03(int**, int**, int**, int, int);

int main()
{
/*
	int *ptr, size;

	cout << "\n Enter the size of the array : ";
	cin >> size;

	Task01(ptr, size);
*/
	
/*
	int **ptr, size = 5, cols[size];

	for(int x = 0; x < size; x++)
	{
		cout << "\n Enter the columns for row " << x + 1 << " : ";
		cin >> cols[x];
	}

	Task02A(ptr, size, cols);
*/

/*
	int **ptr, size, cols[size];

	cout << "\n Enter the size of the array : ";
	cin >> size;
	
	for(int x = 0; x < size; x++)
	{
		cout << "\n Enter the columns for row " << x + 1 << " : ";
		cin >> cols[x];
	}

	Task02B(ptr, size, cols);
*/

/*
	int **ptr, size, cols[size];

	cout << "\n Enter the size of the array : ";
	cin >> size;
	
	for(int x = 0; x < size; x++)
	{
		cout << "\n Enter the columns for row " << x + 1 << " : ";
		cin >> cols[x];
	}

	Task02C(ptr, size, cols);
*/

/*
	int **matrixA, **matrixB, **matrixC, n, m;

	cout << "\n Enter the rows for the array : ";
	cin >> n;
	
	cout << "\n Enter the cols for the array : ";
	cin >> m;
	
	Task03(matrixA, matrixB, matrixC, n, m);
*/
}

void Task01(int *p, int s)
{
	p = new int [s];

	for(int x = 0; x < s; x++)
	{
		*(p + x) = rand() % 10 + 1;
	}

	cout << "\n Numbers in array :";

	for(int x = 0; x < s; x++)
	{
		cout << endl << *(p + x);
	}

	cout << "\n Squares of array : ";

	for(int x = 0; x < s; x++)
	{
		cout << endl << (*(p + x)) * (*(p + x));
	}
}

void Task02A(int **p, int s, int c[])
{
	int sum;
	
	p = new int *[s];
	
	for(int x = 0; x < s; x++)
	{
		sum = 0;
		p[x] = new int [c[x]];
		
		for(int y = 0; y < c[x]; y++)
		{
			*(*(p + x) + y) = rand() % 10 + 1;
			sum = sum + p[x][y];
		}
		
		cout << "\n Sum for row " << x + 1 << " is : " << sum;
	}
}

void Task02B(int **p, int s, int c[])
{
	p = new int *[s];
	
	for(int x = 0; x < s; x++)
	{
		p[x] = new int [c[x]];
		
		for(int y = 0; y < c[x]; y++)
		{
			*(*(p + x) + y) = rand() % 10 + 1;
		}
	}
}

void Task02C(int **p, int s, int c[])
{
	p = new int *[s];
	
	for(int x = 0; x < s; x++)
	{
		p[x] = new int [c[x]];
	}
	
	for(int y = 0; y < s; y++)
	{
		delete[] p[y];
	}
	
	delete[] p;
}

void Task03(int **A, int **B, int **C, int r, int c)
{	
	A = new int *[r];
	B = new int *[r];
	C = new int *[r];
	
	for(int x = 0; x < r; x++)
	{
		A[x] = new int [c];
		B[x] = new int [c];
		C[x] = new int [c];
		
		for(int y = 0; y < c; y++)
		{
			*(*(A + x) + y) = rand() % 10 + 1;
			*(*(B + x) + y) = rand() % 10 + 1;
			
			*(*(C + x) + y) = *(*(A + x) + y) + *(*(B + x) + y);
			cout << *(*(C + x) + y) << endl;
		}
	}
	
	for(int x = 0; x < r; x++)
	{
		delete[] A[x];
	}
	
	delete[] A;
	
	for(int y = 0; y < r; y++)
	{
		delete[] B[y];
	}
	
	delete[] B;
}
