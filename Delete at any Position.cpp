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

void Delete_any(Node* &head, int index)
{
    Node* temp = head;
    for (int i=1; i<index; i++)
    {
        temp = temp -> next;
    }
    Node* deleteNode = temp -> next;
    temp -> next = temp -> next -> next;
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
    Delete_any(head, 2);
    cout << "Linked List after Deleting : " ;
    print_List(head);

    return 0;
}



