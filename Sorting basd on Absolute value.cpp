#include<bits/stdc++.h>
using namespace std;

void Insertion_Sort(int arr[], int n)
{
    for(int i=1; i<n; i++)
    {
        int key = arr[i];
        int j = i-1;

        while(j>=0 && arr[j]*arr[j]>key*key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main()
{
    int arr[5] = {5, -1, 2, -3, -9};

    int n = sizeof(arr) / sizeof(int);

    Insertion_Sort(arr,n);

    for(int i=0; i<n; i++)
    {
        cout << arr[i] ;
        cout << " ";
    }
}


