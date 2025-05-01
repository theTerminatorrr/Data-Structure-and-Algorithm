#include<bits/stdc++.h>
using namespace std;

void InsertionSort(string arr[],int n)
{
    for(int i=1; i<n; i++)
    {
        string temp = arr[i];
        int j = i-1;

        while(j>=0 && arr[j].length()>temp.length())
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1] =  temp;
    }
}

int main()
{
    string arr[]= {"apple","bat","carrot","dog"};
    int n = sizeof(arr)/sizeof(arr[0]);

    InsertionSort(arr,n);

    for(int i =0; i<n; i++) cout << arr[i] << " ";

}
