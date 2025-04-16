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

void insert_Any(Node* &head, int position, int value)
{
   Node* newNode = new Node(value) ;
   Node* temp = head;
   for(int i=1; i<position; i++)
   {
       temp = temp -> next;
   }
   newNode -> next = temp -> next;
   temp -> next = newNode;
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

    insert_Any(head, 1, 100);
    insert_Any(head, 3, 200);
    insert_Any(head, 5, 300);

    print_List(head);
    return 0;

}
