/*
	Name : Waleed Bin Osama
	Roll No : 20I-2440
	Section : A
	Lab Task : 2
	*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void Task01();
void Task03(int*, int);
void Task04(int*[]);

int main()
{
	//Task01();

	/*
	int *ptr, size;

	cout << "\n Enter the size of the array : ";
	cin >> size;

	Task03(ptr, size);
	*/

	/*
	int arr1[6], arr2[6], arr3[6], arr4[6], arr5[6], *ptr[5];

	ptr[0] = arr1;
	ptr[1] = arr2;
	ptr[2] = arr3;
	ptr[3] = arr4;
	ptr[4] = arr5;

	Task04(ptr);
	*/
}

void Task01()
{
	int arr[5];
	int *ptr;

	ptr = arr;

	for(int x = 0; x < 5; x++)
	{
		cout << "\n Enter " << x + 1 << " number : ";
		cin >> *(ptr + x);
	}

	cout << "\n Array in Reverse order is : ";

	for(int y = 4; y >= 0; y--)
	{
		cout << *(ptr + y);
	}
}

void Task03(int *p, int s)
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

void Task04(int *p[])
{
	int sum;

	for(int x = 0; x < 5; x++)
	{
		sum = 0;

		for(int y = 0; y < 6; y++)
		{
			*(p[x] + y) = rand() % 100 + 1;
			sum = sum + *(p[x] + y);
		}

		cout << "\n Sum of " << x + 1 << " array is : " << sum;
	}
}
