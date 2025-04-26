#include <bits/stdc++.h>
using namespace std;

class Queue
{
    int arr[100];
    int front;
    int rear;

public:
    Queue()
    {
        front = -1;
        rear = -1;
    }

    bool isEmpty()
    {
        return front == -1;
    }

    bool isFull()
    {
        return rear == 99;
    }

    void enqueue(int value)
    {
        if (isFull())
        {
            cout << "Queue is full!" << endl;
            return;
        }
        if (isEmpty())
        {
            front = 0;
        }
        arr[++rear] = value;
    }

    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is empty!" << endl;
            return;
        }
        if (front == rear)   // only one element in queue
        {
            front = rear = -1;
        }
        else
        {
            front++;
        }
    }

    int peek()
    {
        if (isEmpty())
        {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        return arr[front];
    }

    void print_Queue()
    {
        if (isEmpty())
        {
            cout << "Queue is empty!" << endl;
            return;
        }
        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << endl;
        }
    }
};

int main()
{
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.dequeue();
    q.dequeue();

    q.print_Queue();

    return 0;
}
