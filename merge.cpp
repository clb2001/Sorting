#include <iostream>
#include <cmath>
#include <malloc.h>
#include <stdlib.h>
using namespace std;

void Merge_Sort(int arr[], int size)
{
	void Merge(int arr[], int L[], int R[], int l, int r);// declare Merge
	if (size > 1)
	{
		int mid = size / 2;
		int *left = (int*)malloc(sizeof(int)*mid);
		int *right = (int*)malloc(sizeof(int)*(size - mid));
		for (int i = 0; i < mid; i++)
		{
			left[i] = arr[i];
		}
		for (int j = mid; j < size; j++)
		{
			right[j - mid] = arr[j];
		}
		Merge_Sort(left, mid);
		Merge_Sort(right, size - mid);
		Merge(arr, left, right, mid, size - mid);
		free(left);
		free(right);
	}
}

void Merge(int arr[], int L[], int R[], int l, int r)
{
	int i = 0, j = 0, k = 0;
	while (i < l && j < r)
	{
		if (L[i] <= R[j])
		{
			arr[k++] = L[i++];
		}
		else
		{
			arr[k++] = R[j++];
		}
	}
	while (i < l)
	{
		arr[k++] = L[i++];
	}
	while (j < r)
	{
		arr[k++] = R[j++];
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
	
	Merge_Sort(arr, size);
	
	for (m = 0; m < size; m++)
	{
		cout << arr[m] << " ";
	}
	
	cout << endl << " ";
	return 0;
}