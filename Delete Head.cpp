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
        cout << " " << head -> value ;
        head = head -> next;
    }
}

void Delete_head(Node* &head)
{
    Node* deleteNode = head;
    head = head -> next;
    delete deleteNode;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int value;
    cout << "Enter values : " ;

    while(true)
    {
        cin >> value;
        if(value == -1)
        {
            break;
        }
        insert_Last(head, tail, value);
    }

    print_List(head);
    cout << endl;
    Delete_head(head);
    cout << "Linked List after Deleting Head : " ;
    print_List(head);

    return 0;
}


