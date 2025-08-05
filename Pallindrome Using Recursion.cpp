#include<bits/stdc++.h>
using namespace std;

bool Pallindrome(string str, int start, int finish)
{
    if ( start==finish or start > finish)
        return true ;
    return str[start] == str[finish] and Pallindrome(str, start+1, finish-1) ;

}

int main()
{
    string str;
    cout << "Enter String: ";
    cin >> str;

    cout << "Result = " << Pallindrome(str, 0, str.length()-1) << endl;

    return 0;
}


