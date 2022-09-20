#include <iostream>
#include <cmath>
#include <malloc.h>
#include <stdlib.h>
using namespace std;

void Select_sort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int min = arr[i];
        int k = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                k = j;
            }
        }
        arr[k] = arr[i];
        arr[i] = min;
    }
}

int main()
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "size: "<< size << endl;
    Select_sort(arr, size);
    for (int j = 0; j < size; j++)
    {
        cout << arr[j] << " ";
    }
    return 0;
}