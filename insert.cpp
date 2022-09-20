#include <iostream>
#include <cmath>
using namespace std;

void Insertion_Sort(int size, int arr[])
{
	for (int j = 1; j < size; j++)
	{
		int i = j;
		int num = arr[j];
		while(i > 0 and arr[i-1] > num)
		{
			//just need to compare, not to sort
			arr[i] = arr[i-1];
			i--;
			//cout << "j: " << j <<" i: " << i << endl;
		}
		//cout << arr[j] << endl;
		arr[i] = num;
	}
}

int main()
{
	int m;
	int size;
	int arr[100];
	
	cin >> size;
	
	for (m = 0; m < size; m++)
	{
		cin >> arr[m];
	}
	
	cout << "size: " << size << " ";
	cout << endl;
	
	Insertion_Sort(size, arr);
	
	for (m = 0; m < size; m++)
	{
		cout << arr[m] << " ";
	}
	
	cout << endl << " ";
}