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
        cout << " ";
    }
}

void insert_Tail(Node* &head, Node* &tail, int value)
{
    Node* newNode = new Node (value);

    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail -> next = newNode;
    newNode -> prev = tail;
    tail = newNode;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int value;
    cout << "Enter values : ";
    while(true)
    {
        cin >> value;
        if(value == -1)
        {
            break;
        }

        insert_Tail(head, tail, value);
    }
    cout << "Your given Linked List :  " ;
    Print_Forward(head);

    return 0;
}




