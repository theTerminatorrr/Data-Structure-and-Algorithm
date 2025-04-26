#include<bits/stdc++.h>
using namespace std;

class Stack
{
    int arr[100];
    int top;

public:

    Stack()
    {
        top = -1;
    }

    bool isFull()
    {
        if (top == 99)
        {
            return true;
        }
        else
            return false;
    }

    bool isEmpty()
    {
        return top == -1;
    }

    void push (int value)
    {
        if (isFull())
        {
            cout << "Stack is full!" << endl;
            return;
        }
        top++;
        arr[top] = value;
    }

    void pop()
    {
        if(isEmpty())
        {
            cout << "Stack is empty!" << endl;
            return;
        }
        top--;
    }

    int peek ()
    {
        if (isEmpty())
        {
            cout << "Stack is empty!" << endl;
            return -1;
        }
        return arr[top];
    }

    void print_Stack()
    {
        if(isEmpty())
        {
            cout << "Stack is empty!" << endl;
            return;
        }
        for (int i=top; i>=0; i--)
        {
            cout << arr[i] << endl;
        }
    }
};

int main()
{
    Stack st;

    st.push(15);
    st.push(12);
    st.push(10);
    st.push(7);
    st.push(5);

    st.pop();
    st.pop();

    st.print_Stack();
}

