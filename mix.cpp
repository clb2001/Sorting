#include <iostream>
#include <cmath>
#include <malloc.h>
#include <stdlib.h>
//#include "insert.cpp"

using namespace std;

void Insertion_Sort(int arr[], int low, int high)
{
	for (int j = low + 1; j < high; j++)
	{
		int i = j;
		int num = arr[j];
		while(i > 0 and arr[i-1] > num)
		{
			arr[i] = arr[i-1];
			i--;
		}
		arr[i] = num;
	}
}

void Quick_Sort(int arr[], int low, int high)
{
	if (low < high)
	{
		int i = low, j = high;
		int x = arr[low];
		while (i < j)
		{
			while (i < j && arr[j] >= x)
			{
				j--;
			}
			if (i < j)
			{
				arr[i++] = arr[j];
			}
			while (i < j && arr[i] <= x)
			{
				i++;
			}
			if (i < j)
			{
				arr[j--] = arr[i];
			}
			arr[i] = x;
			Insertion_Sort(arr, low, i);
			Insertion_Sort(arr, i + 1, high);
		}
	}
}

int main()
{
	int i, j, m;
	int size;
	int arr[100];
	
	cin >> size;
	
	for (m = 0; m < size; m++)
	{
		cin >> arr[m];
	}
	
	cout << "size: " << size << " ";
	
	Quick_Sort(arr, 0, size - 1);
	
	for (m = 0; m < size; m++)
	{
		cout << arr[m] << " ";
	}
	
	cout << endl << " ";
	return 0;
}