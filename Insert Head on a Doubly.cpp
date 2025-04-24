#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node* next;
    Node* prev;

    Node(int value)
    {
        this -> value = value;
        this -> next = NULL;
        this -> prev = NULL;
    }
};

void Print_Forward(Node* head)
{
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp -> value;
        temp = temp -> next;
        cout << endl;
    }
}

void insert_Head(Node* &head, Node* &tail, int value)
{
    Node* newNode = new Node (value);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode -> next = head;
    head -> prev = newNode;
    head = newNode;
}

int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);

    head -> next = a;
    a -> prev = head;
    a -> next = b;
    b -> prev = a;

    insert_Head(head, tail, 100);
    insert_Head(head, tail, 200);

    Print_Forward(head);

    return 0;
}


