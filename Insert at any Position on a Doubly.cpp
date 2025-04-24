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

void insert_Any(Node* &head, int index, int value)
{
    Node* newNode = new Node (value);
    Node* temp = head;
    for(int i=1; i<index; i++)
    {
        temp = temp -> next;
    }

    newNode -> next = temp -> next;
    temp -> next -> prev = newNode;
    temp -> next = newNode;
    newNode -> prev = temp;
}

int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);

    head -> next = a;
    a -> prev = head;
    a -> next = tail;
    tail -> prev = a;

    insert_Any(head, 1, 100);
    insert_Any(head, 3, 200);

    Print_Forward(head);

    return 0;
}




