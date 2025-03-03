#include <bits/stdc++.h>
using namespace std;

void BubbleSort(vector<int>& A)
{
    int n = A.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (A[j] < A[j + 1])
            {
                swap(A[j], A[j + 1]);
            }
        }
    }
}

int main()
{
    cout << "Enter the Array Elements (space-separated): ";

    vector<int> array;
    int num;

    while (cin >> num)
    {
        array.push_back(num);
        if (cin.peek() == '\n') break;
    }

    BubbleSort(array);

    cout << "Sorted array after Using Bubble Sort : ";
    for (int i = 0; i < array.size(); i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
