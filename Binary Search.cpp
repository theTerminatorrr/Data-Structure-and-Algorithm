#include <bits/stdc++.h>
using namespace std;

int BinarySearch (vector <int> &array, int n, int x)
{
    int left, right, mid;
    left = 0;
    right = n-1;

    while(left <= right)
    {
        mid = (left + right) / 2;

        if(array[mid] == x)
        {
            return mid;
        }
        if(array[mid] < x)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1;
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

    sort(array.begin(), array.end());

    cout << "Sorted Array :";
    for(int i=0; i<array.size(); i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    int x;
    cout << "Enter the Element to Search : ";
    cin >> x;

    int result = BinarySearch(array, array.size(), x);

    if (result != -1)
        cout << "Element found at Index: " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}

