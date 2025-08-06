#include<bits/stdc++.h>
using namespace std;

int findSum(int arr[], int i, int j)
{
    if (i==j)
        return arr[i];
    return arr[j]+findSum(arr, i, j-1);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i,n; i++)
        cin >> arr[i];
    cout << findSum(arr, 0, n-1) << endl;
}
