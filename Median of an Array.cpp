#include<bits/stdc++.h>
using namespace std;

void Bubblesort(vector<int> &array, int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-1-i; j++)
        {
            if(array[j]>array[j+1])
            {
                swap (array[j], array[j+1]);
            }
        }
    }
}
int Median(vector<int> &array, int n)
{
    int low =0;
    int high = n-1;

    int mid1 =(low+high)/2;
    int mid2 = (array[n/2] + array[(n-1)/2]+1) /2 ;

    if(n%2 !=0)
    {
        cout << "Median : " << array[mid1] << endl;
    }
    else
        cout << "Median : " << array[mid2] << endl;

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

    int n = array.size();

    Bubblesort(array, n);

    cout << "Array after Bubble Sorting : ";
    for (int i=0; i<n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    Median(array, n);
}
