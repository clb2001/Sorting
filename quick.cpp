#include <iostream>
#include <cmath>
#include <malloc.h>
#include <stdlib.h>
using namespace std;

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
			Quick_Sort(arr, low, i - 1);
			Quick_Sort(arr, i + 1, high);
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