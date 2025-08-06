#include<bits/stdc++.h>
using namespace std;

int combination( int n, int r)
{
    if (r==0 or r==n)
        return 1 ;
    return combination(n-1, r-1) + combination(n-1, r) ;

}

int main()
{
    int n, r;
    cin >> n >> r;

    cout << "Combination = " <<combination( n, r) << endl;

    return 0;
}


