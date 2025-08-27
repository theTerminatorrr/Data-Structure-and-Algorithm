#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str1, str2;

    cout << "Enter first string: ";
    getline(cin, str1);

    cout << "Enter second string: ";
    getline(cin, str2);

    int minLength = min(str1.length(), str2.length());
    int matchCnt = 0;

    for (int i = 0; i < minLength; i++)
    {
        if (str1[i] == str2[i])
        {
            matchCnt++;
        }
    }

    cout << "Number of matching characters at the same position: " << matchCnt << endl;

    return 0;
}

