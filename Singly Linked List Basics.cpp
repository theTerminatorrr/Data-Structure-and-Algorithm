#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* next;

    node(int value)
    {
        data=value;
        next=NULL;
    }
};

node* head=NULL;

void insert_head(int value)
{
    node* newItem= new node(value);

    newItem->next=head;
    head=newItem;
}

void print_list()
{
    if(head==NULL)
    {
        cout<<"Linked List is Empty"<<endl;
        return;
    }

    node* current=head;

    while(current!=NULL)
    {
        cout<<current->data<<" ";
        current=current->next;
    }

    cout<<endl;
}

void insert_last(int value)
{
    node* newItem= new node(value);
    node* last=head;

    while(last->next!=NULL)
    {
        last=last->next;
    }

    last->next= newItem;
}

void insert_any(int target, int value)
{
    node* newItem= new node(value);

    node* prev= head;

    while(prev->data!=target)
    {
        prev=prev->next;
    }
    newItem->next=prev->next;
    prev->next=newItem;
}

void delete_first()
{
    if(head==NULL)
    {
        cout<<"Nothing left to delete"<<endl;
        return;
    }

    node* current;
    current=head;
    head=head->next;

    delete current;
}

void delete_last()
{
    if(head==NULL)
    {
        cout<<"Nothing left to delete"<<endl;
        return;
    }

    node* current=head;
    node* prev=NULL;

    while(current->next!=NULL)
    {
        prev=current;
        current=current->next;
    }

    if(prev!=NULL)
    {
        prev->next=NULL;
    }

    else
    {
        head=NULL;
    }

    delete current;

}

int main()
{
    insert_head(10);
    insert_head(20);
    insert_head(30);
    print_list();

    insert_last(40);
    print_list();


    insert_any(20,50);
    print_list();

    delete_first();
    print_list();

    delete_first();
    print_list();

    delete_last();
    print_list();
}
