#include<bits/stdc++.h>
using namespace std;

int Series(int n)
{
    if ( n==0 )
        return 0;
    return n*n*n*n*n + Series( n-1 );
}

int main()
{
    int n;
    cout << "Enter N: ";
    cin >> n;
    cout << "Sum = " << Series(n) << endl;
}
