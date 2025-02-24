#include<bits/stdc++.h>
using namespace std;

vector<int> arr;
int n, target;

int LinearSearch()
{
    cout << "Enter element to Search : ";
    cin >> target;

    for(int i=0; i<=n; i++)
    {
        if(arr[i]==target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    cout << "Enter the Array Elements (space-separated): ";

    int num;
    vector<int> array;

    while (cin >> num)
    {
        array.push_back(num);
        if (cin.peek() == '\n') break;
    }

    arr = array;
    n = arr.size();

    int result = LinearSearch();

    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;

}

