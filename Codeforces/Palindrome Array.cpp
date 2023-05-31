#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int* arr = new int[n];

	// take elements from user
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	// bubble sort algorithm 
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr[i] > arr[j])
				swap(arr[i], arr[j]);

		}
	}
	// loop to print array elements after sorting
	for (int i = 0; i < n; i++)
	{
		cout<< arr[i]<<;
	}

	return 0;
}