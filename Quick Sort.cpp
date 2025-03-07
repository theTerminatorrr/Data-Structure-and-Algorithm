#include <bits/stdc++.h>
using namespace std;

int partition(vector<int>& A, int l, int h)
{
    int pivot = A[l];
    int i = l, j = h;

    while (i < j)
    {
        while (A[i] <= pivot && i < h) i++;
        while (A[j] > pivot && j > l) j--;

        if (i < j) swap(A[i], A[j]);
    }
    swap(A[l], A[j]);
    return j;
}

void QuickSort(vector<int>& A, int l, int h)
{
    if (l < h)
    {
        int j = partition(A, l, h);
        QuickSort(A, l, j - 1);
        QuickSort(A, j + 1, h);
    }
}

int main()
{
    cout << "Enter the Array Elements (Space-Separated): ";

    vector<int> array;
    int num;

    while (cin >> num)
    {
        array.push_back(num);
        if (cin.peek() == '\n') break;
    }

    QuickSort(array, 0, array.size() - 1);

    cout << "Sorted array after Using Quick Sort: ";
    for (int i = 0; i < array.size(); i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
