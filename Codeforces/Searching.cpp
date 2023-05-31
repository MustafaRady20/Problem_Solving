#include<iostream>
using namespace std;


int search(int arr[], int x, int n) {

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
            return i;
    }
    return -1;

}


int main()
{
    // declare variables
    int n, x;
    // number of elements 
    cin >> n;
    // Dynamic array
    int* arr = new int[n];
    // insert elements into array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // the item which we search for
    cin >> x;
    
    cout << search(arr, x, n);
    return 0;

}