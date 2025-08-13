#include<bits/stdc++.h>
using namespace std;

int findSumDC(int arr[], int i, int j)
{
    // Base case
    if (i == j)
        return arr[i];
    // Divide
    int mid = (i+j)/2;
    // Conquer
    int leftSum = findSumDC(arr, i, mid);
    int rightSum = findSumDC(arr, mid+1, j);
    // Combine
    return leftSum + rightSum;
}

int crossingSum(int arr[], int start, int end)
{
    int mid = (start+end)/2;
    int sum = 0, leftSum = INT_MIN, rightSum = INT_MIN;
    for (int i = mid; i >= start; i--)
    {
        sum += arr[i];
        if (sum > leftSum)
            leftSum = sum;
    }
    sum = 0;
    for (int i = mid+1; i <= end; i++)
    {
        sum += arr[i];
        if (sum > rightSum)
            rightSum = sum;
    }
    return leftSum + rightSum;
}

int subarraySumDC(int arr[], int start, int end)
{
    if (start == end)
        return arr[start];

    int mid = (start + end)/2;
    int leftSubarraySum = subarraySumDC(arr, start, mid);
    int rightSubarraySum = subarraySumDC(arr, mid+1, end);
    int crossingSubarraySum = crossingSum(arr, start, end);

    if (leftSubarraySum > rightSubarraySum and leftSubarraySum > crossingSubarraySum)
        return leftSubarraySum;

    if (rightSubarraySum > leftSubarraySum and rightSubarraySum > crossingSubarraySum)
        return rightSubarraySum;
    return crossingSubarraySum;
}

int main()
{
    int n;
    cout << "Enter amount of element : ";
    cin >> n;
    int arr[n];
    cout << "Enter Elements : ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << subarraySumDC(arr, 0, n-1) << endl;
}
