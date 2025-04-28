#include<bits/stdc++.h>
using namespace std;

string reverseString(const string& str) {
    stack<char> s;
    string reversed = "";

    for (char c : str) {
        s.push(c);
    }

    while (!s.empty()) {
        reversed += s.top();
        s.pop();
    }

    return reversed;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    string reversed = reverseString(input);
    cout << "Reversed string: " << reversed << endl;

    return 0;
}
