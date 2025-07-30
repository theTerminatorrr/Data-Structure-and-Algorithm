#include<bits/stdc++.h>
using namespace std;

int Fast_exponential( int b, int e)
{
    if (e==0)
        return 1 ;
    int prod = Fast_exponential(b, e/2);
    if (e%2 == 0)
        return prod * prod ;

    return prod * prod * b;

}

int main()
{
    int b;
    cin >> b;
    int e;
    cin >> e;

    cout << Fast_exponential( b, e);

    return 0;
}



