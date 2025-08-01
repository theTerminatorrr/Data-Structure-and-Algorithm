#include<bits/stdc++.h>
using namespace std;

int Find_Minimum(int arr[], int n)
{
    if ( n==1 )
        return arr[n-1];

    int x = Find_Minimum (arr, n-1);
    int y = arr[n-1];
    return x < y ? x: y;
}

int main()
{
    int arr[] = {0,1,1,2,3,3,0,0,6,0};
    cout << "Minimum = " << Find_Minimum(arr, 10) << endl;
}

