#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node* next;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

void insert_Last(Node* &head, Node* &tail, int value)
{
    Node *newNode = new Node(value);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void print_List(Node* head)
{
    while (head != NULL)
    {
        cout << " " << head->value;
        head = head->next;
    }
    cout << endl;
}

void Delete_Tail(Node* &head, Node* &tail)
{
    Node* temp = head;
    while (temp->next != tail)
    {
        temp = temp->next;
    }

    delete tail;
    temp->next = NULL;
    tail = temp;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int value;
    cout << "Enter values (-1 to stop): ";

    while (true)
    {
        cin >> value;
        if (value == -1)
        {
            break;
        }
        insert_Last(head, tail, value);
    }

    cout << "Original List:";
    print_List(head);

    Delete_Tail(head, tail);

    cout << "Linked List after Deleting Tail:";
    print_List(head);

    return 0;
}

