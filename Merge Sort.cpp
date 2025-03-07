#include <bits/stdc++.h>
using namespace std;

void Merge(vector <int> A, int left, int mid, int right)
{
    vector <int> temp;
    int i = left, j = mid + 1;

    while (i <= mid && j <= right)
    {
        if (A[i] <= A[j])
            temp.push_back(A[i++]);
        else
            temp.push_back(A[j++]);
    }

    while (i <= mid) temp.push_back(A[i++]);
    while (j <= right) temp.push_back(A[j++]);

    for (int k = left; k <= right; k++)
        A[k] = temp[k - left];
}

void MergeSort(vector <int> A, int left, int right)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2;

        MergeSort(A, left, mid);
        MergeSort(A, mid + 1, right);

        Merge(A, left, mid, right);
    }
}

int main()
{
    cout << "Enter the Array Elements (Space-Separated): ";

    vector <int> array;
    int num;

    while (cin >> num)
    {
        array.push_back(num);
        if (cin.peek() == '\n') break;
    }

    MergeSort(array, 0, array.size() - 1);

    cout << "Sorted array after Using Merge Sort : ";
    for (int i = 0; i < array.size(); i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
