#include<bits/stdc++.h>
using namespace std;

int main()
{
    int denominations[] = {1000, 500, 100, 50, 20, 10, 5, 2, 1};
    int n = sizeof(denominations) / sizeof(denominations[0]);

    int V;
    cout << "Enter the amount : ";
    cin >> V;

    int totalCoins = 0;

    cout << "\nDenomination\tCount\n";
    cout << "-----------------------\n";

    for (int i = 0; i < n; i++)
    {
        int count = V / denominations[i];
        V = V % denominations[i];
        //V = V - (count*denominations[i]);
        cout << denominations[i] << "\t\t" << count << "\n";
        totalCoins += count;
        if (V == 0)
            break;
    }

    cout << "-----------------------\n";
    cout << "Total coins/notes used: " << totalCoins << "\n";

    return 0;
}

