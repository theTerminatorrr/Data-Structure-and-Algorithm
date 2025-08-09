#include<bits/stdc++.h>
using namespace std;

// Brute Force...
int subArraySumBF( int arr[], int n)
{
    int maximumSubArraySum = INT_MIN;
    for( int start = 0; start < n; start++)
    {
        for( int end = start; end < n; end++)
        {
            int subArraySum = 0;
            for( int i = start; i <= end; i++)
                subArraySum += arr[i];
            maximumSubArraySum = max(maximumSubArraySum, subArraySum);
        }
    }
    return maximumSubArraySum;
}


int crossingSum ( int arr[], int start, int end)
{
    int mid = (start+end)/2;
    int sum = 0, leftSum = INT_MIN, leftSum = INT_MIN;
    for(int i=mid; i>=0; i--){
        sum+= arr[mid];
        if(sum>leftSum)
            leftSum = sum;
    }
    sum =0;
    for(int i=mid+1; i<=end; i++){
        sum+= arr[i];
        if(sum>rightSum)
            rightSum = sum;
    }
    return leftSum + rightSum;
}

//Divide and Conquer...
int subArraySumDC( int arr[], int start, int end)
{
    if( start == end ) return arr[start];

    int mid = ( start + end ) / 2;

    int leftsubArraySum = subArraySumDC (arr, start, mid);
    int rightsubArraySum = subArraySumDC (arr, mid+1,  end);
    int crossingSum = crossingSum(arr, start,  end);

    if ( leftsubArraySum > rightsubArraySum and leftsubArraySum > crossingSum)
        return leftsubArraySum;
    if ( rightsubArraySum > leftsubArraySum and rightsubArraySum > crossingSum)
        return rightsubArraySum;
    return crossingSum;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i,n; i++)
        cin >> arr[i];
    cout << subArraySumDC(arr, 0, n-1) << endl;
}


