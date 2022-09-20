#include <iostream>
#include <cmath>
using namespace std;

void Bubble_Sort(int size, int arr[])
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - 1 - i; j ++)
		{
			if (arr[j] > arr[j+1])
			{
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
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
	cout << endl;
	
	Bubble_Sort(size, arr);
	
	for (m = 0; m < size; m++)
	{
		cout << arr[m] << " ";
	}
	
	cout << endl << " ";
}