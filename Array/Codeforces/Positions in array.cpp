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
	for (int i = 0; i < n; i++)
	{
		if (arr[i] <= 10)
			cout << "A[" << i << "] = " << arr[i] << endl;


	}

	return 0;
}