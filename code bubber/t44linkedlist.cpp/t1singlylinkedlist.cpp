// -----------------------------------------------------------------------------------------------------------------
// singly linked list
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;

    // constructor
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // destructor
    ~node()
    {
        int val = this->data;

        // memory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "memory is free :" << val << endl;
    }
};

void insertathead(node *&head, int d)
{
    // new node create
    node *temp = new node(d);
    temp->next = head;
    head = temp;
}

void insertattail(node *&tail, int d)
{
    // new node create
    node *temp = new node(d);
    tail->next = temp;
    // tail = tail->next;
    tail = temp;
}

void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
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
    temp->next = nti;
}

void deletenode(node *&head, node *&tail, int pos)
{
    // deleting first or start node
    if (pos == 1)
    {
        node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        // deleting any niddle node or last node
        node *curr = head;
        node *prev = NULL;

        int cnt = 1;
        while (cnt < pos)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        prev->next = curr->next;
        if (curr->next == NULL)
        {
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}

int main()
{
    // create a new linked list node
    node *node1 = new node(64);
    cout << node1->data << endl;
    // cout << node1->next << endl;

    // head pointed to nodel
    // node *head = node1;
    // insertathead(head, 12);
    // print(head);
    // insertathead(head, 35);
    // print(head);

    // tail pointed to nodel
    node *head = node1;
    node *tail = node1;
    insertattail(tail, 12);
    print(head);
    insertattail(tail, 35);
    print(head);

    // insert the element at position in linked list
    // insertatpost(head,3,58);
    // print(head);

    // insertatpost(tail,head,1,58);
    // print(head);
    insertatpost(tail, head, 4, 58);
    print(head);

    cout << "head data " << head->data << endl;
    cout << "tail data " << tail->data << endl;

    // // delete the element in linked list
    deletenode(head, tail, 4);
    print(head);

    cout << "head data " << head->data << endl;
    cout << "tail data " << tail->data << endl;
    return 0;
}