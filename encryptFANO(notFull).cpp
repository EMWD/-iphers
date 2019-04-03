#include "pch.h"
#include <iostream>
using namespace std;


void swapCHAR(char *x, char *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
void swapINT(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void goSort(char arr[],int arr2[], int n)
{
	int i, j;
	bool swapped;
	for (i = 0; i < n - 1; i++)
	{
		swapped = false;
		for (j = 0; j < n - i - 1; j++)
		{
			if (arr2[j] > arr2[j + 1])
			{
				swapCHAR(&arr[j], &arr[j + 1]);
				swapINT(&arr2[j], &arr2[j + 1]);
				swapped = true;
			}
		}
		if (swapped == false)
			break;
	}
}

//void goEncr(char arr[], int arr2[], string encr, int size)
//{
//	for (int i = 0; i < size*10; i++)
//	{
//		string encr += "1";
//	}
//	
//}

void printArray(char arr[], int arr2[] , int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout <<  arr[i]  << "-------" << arr2[i]<< endl;

}

int main()
{
	cout << "Input count of number"<< endl;
	int size;
	cin >> size;
	char *arr = new char[size]; int *arr2 = new int[size];
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
		cin >> arr2[i];
	}

	goSort(arr, arr2, size);


	cout << "Sorted: " << endl;
	printArray(arr, arr2 ,size);

	delete[] arr; 	delete[] arr2;
		return 0;
}


