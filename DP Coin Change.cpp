#include<bits/stdc++.h>
using namespace std;

int coinChange(vector<int>& coins, int amount)
{
    vector<int> dp(amount + 1, INT_MAX);
    dp[0] = 0;

    for (int i = 1; i <= amount; ++i)
    {
        for (int coin : coins)
        {
            if (i - coin >= 0 && dp[i - coin] != INT_MAX)
            {
                dp[i] = min(dp[i], dp[i - coin] + 1);
            }
        }
    }

    return (dp[amount] == INT_MAX) ? -1 : dp[amount];
}

void printUsedCoins(int amount, const vector<int>&coin_used)
{
    if (coin_used[amount] == -1)
    {
        cout << "No combination of coins can make this amount.\n";
        return;
    }

    cout << "Coins used to make the amount: ";
    while (amount > 0)
    {
        int coin = coin_used[amount];
        cout << coin << " ";
        amount -= coin;
    }
    cout << endl;
}
int main()
{
    vector<int> coins = {1, 10, 25};

    int amount;
    cout << "Enter the amount: ";
    cin >> amount;

    int result = coinChange(coins, amount);

    if (result != -1)
        cout << "Minimum coins required: " << result << endl;
    else
        cout << "Cannot make the amount with given coins." << endl;

    return 0;
}
