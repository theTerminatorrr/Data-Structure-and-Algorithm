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

void insert_Head(Node* &head, int value)
{
   Node* newNode = new Node(value) ;
   newNode -> next = head;
   head = newNode;
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
    Node* b = new Node(30);

    head -> next = a;
    a -> next = b;

    insert_Head (head, 100);
    insert_Head (head, 150);
    insert_Head (head, 200);

    print_List(head);
    return 0;

}


