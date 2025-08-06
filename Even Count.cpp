#include<bits/stdc++.h>
using namespace std;

int evenCount(int arr[], int start, int end)
{
    if (start == end)
    {
        if( arr[start]%2 == 0)
            return 1;
        return 0;
    }

    int mid = (start + end)/2;
    int leftCount = evenCount(arr, start, mid);
    int rightCount = evenCount(arr, mid+1, end);

    return leftCount + rightCount;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];

    cout << evenCount(arr, 0, n-1) << endl;
}


