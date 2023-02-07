#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		arr[i] = num;

	}
	int min = 10000,index=0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
			index = i;
		}



	}
	cout << min << " " << index+1;

	return 0;
}