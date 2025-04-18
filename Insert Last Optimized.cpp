#include<bits/stdc++.h>
using namespace std;

class Node
{
    public :
        int value;
        Node* next;
    Node (int value)
    {
        this -> value = value;
        this -> next = NULL;
    }
};

void insert_Last(Node* &head, Node* &tail, int value)
{
    Node *newNode = new Node(value);

    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail -> next = newNode;
    tail = tail -> next;
}

void print_List(Node* head)
{
    while (head != NULL)
    {
        cout << head -> value << endl;
        head = head -> next;
    }
}

int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);

    head -> next = a;
    a -> next = tail;

    insert_Last(head, tail, 40);
    insert_Last(head, tail, 50);
    insert_Last(head, tail, 60);
    insert_Last(head, tail, 70);

    print_List(head);

    cout << "Tail = " << tail -> value << endl;

    return 0;
}

