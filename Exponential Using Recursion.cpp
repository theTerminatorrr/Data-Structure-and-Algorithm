#include<bits/stdc++.h>
using namespace std;

int exponential( int b, int e)
{
    if (e==0)
        return 1 ;
    return b * exponential(b, e-1);

}

int main()
{
    int b;
    cin >> b;
    int e;
    cin >> e;

    cout << exponential( b, e);

    return 0;
}


