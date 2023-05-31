#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

void search_for(int arr[], int item,int size)
{
	int low = 0,  mid;
	mid = ((low + size)+1) / 2;

	bool flag = false;

	while (low < size)
	{
		if (item == arr[mid])
		{
			cout << mid;
			return;
		}
		else if (item < arr[mid])
			size = mid;
		else
			low = mid + 1;
	}

	if (!flag)
		cout << -1;
}
int main()
{
	
	int size;
	cin >> size;

	int* arr = new int[size];

	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}

	int item;
	cin >> item;
	search_for(arr, item, size);

	return 0;
}
