#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	int n,val;
	cin >> n;
	long long summation = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> val;
		summation += val;
	}

	cout << abs(summation);

	return 0;
}
