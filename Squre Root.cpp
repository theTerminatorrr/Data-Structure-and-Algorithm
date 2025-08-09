#include<bits/stdc++.h>
using namespace std;

double findSQRT(double n, double low, double high)
{
    if(high - low < 0.0000001)
        return high;

    double mid = (low+high)/2;

    if ( mid*mid <n )
        return findSQRT(n, mid, high);

    else
        return findSQRT(n, low, mid);
}


int main()
{
    double n;
    cin >> n;

    cout << findSQRT(n, 1.0, n) << endl;
}

