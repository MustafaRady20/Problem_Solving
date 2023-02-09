#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main()
{
	int size;
	cin >> size;
	int* arr = new int[size];

	// take elements from user
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}

	// bubble sort algorithm 
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (arr[j] > arr[j+1])
				swap(arr[j], arr[j+1]);

		}
	}

	// loop to print array elements after sorting
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}