#include<bits/stdc++.h>
using namespace std;

vector <long long> memo;

long long fibonacci(int n)
{
    if (n == 0) return 0;
    if (n == 1) return 1;

    if (memo[n] != -1) return memo[n];

    memo[n] = fibonacci(n - 1) + fibonacci(n - 2);

    return memo[n];
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    memo.resize(n + 1, -1);

    long long result = fibonacci(n);
    cout << "Fibonacci(" << n << ") = " << result << endl;

    return 0;
}

