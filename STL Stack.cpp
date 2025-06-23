#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack <int> st;
    int n;
    cout << "Enter N : ";
    cin >> n;

    cout << "Enter values : ";
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        st.push (x);
    }

    cout << "Your Stack : " ;
    while (!st.empty())
    {
        cout << st.top() <<" ";
        st.pop();
    }
    return 0;
}

