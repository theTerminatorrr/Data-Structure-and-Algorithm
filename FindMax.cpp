#include<bits/stdc++.h>
using namespace std;

int findMax(int arr[], int start, int end)
{
    if (start == end ) return arr[start];

    int mid = (start + end)/2;
    int leftMax = findMax(arr, start, mid);
    int rightMax = findMax(arr, mid+1, end);

    return (leftMax > rightMax)? leftMax : rightMax;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];

    cout << findMax(arr, 0, n-1) << endl;
}



