#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main()
{
	int n,last_index;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	last_index = n - 1;
	// loop tp reverse the array
	for (int i = 0; i < n/2; i++)
	{
		swap(arr[i], arr[last_index]);
		last_index--;
	}

	for (int i = 0; i < n; i++)
	{
		cout<< arr[i] <<" ";
	}

	return 0;
}