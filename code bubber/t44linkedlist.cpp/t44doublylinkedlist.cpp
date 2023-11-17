// -----------------------------------------------------------------------------------------------------------------
// c
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *prev;

public:
//constructor 
    node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

// void print(node *head)
// {
//     node *temp = head;

//     while (temp != NULL)
//     {
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }

void print(node *tail)
{
    node *temp = tail;

    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int getlen(node* head){
    int len=0;
    node* temp=head;

    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}

void insertathead(node* &head,int d){
    node* temp=new node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
}
void insertattail(node* &tail,int d){
    node* temp=new node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}

void insertatpost(node *&tail, node *&head, int pos, int d)
{

    // inserting at start
    if (pos == 1)
    {
        insertathead(head, d);
        return;
    }

    node *temp = head;
    int cnt = 1;

    while (cnt < pos - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // inserting at end
    if (temp->next == NULL)
    {
        insertattail(tail, d);
        return;
    }

    // creating a node for postion
    node *nti = new node(d);
    nti->next = temp->next;
    temp->next->prev=nti;
    temp->next = nti;
    nti->prev=temp;
}


int main()
{
    node *node1 = new node(11);

    node *head = node1;
    node *tail = node1;

    print(head);

    // printing the length of the linked list
    // cout<<getlen(head)<<endl;

    // insert at head
    // insertathead(head,10);
    // print(head);
    // insertathead(head,14);
    // print(head);
    // insertathead(head,12);
    // print(head);

    // insert at tail
    insertattail(tail,10);
    print(head);
    insertattail(tail,14);
    print(head);
    insertattail(tail,12);
    print(head);

    // insert the element at the position in the linked list
    insertatpost(tail,head,1,54);
    print(head);

    return 0;
}