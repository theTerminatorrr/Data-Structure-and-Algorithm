#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void insertionSort(vector<int>& array)
{
    for (int i = 1; i < array.size(); ++i)
    {
        int val = array[i];
        int j = i;

        while (j > 0 && array[j - 1] > val)
        {
            array[j] = array[j - 1];
            j--;
        }
        array[j] = val;
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

    insertionSort(array);

    cout << "Sorted array: ";
    for (int i = 0; i < array.size(); ++i)
    {
        cout << array[i] << (i == array.size() - 1 ? "" : " ");
    }
    cout << endl;

    return 0;
}

