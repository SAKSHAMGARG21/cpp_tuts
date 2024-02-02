#include <iostream>
#include <bits/stdc++.h>
using namespace std;

template<class T>
class node
{
public:
    T data;
    node *next;

    // constructor
    node(T data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertathead(node<int> *&head, int d)
{
    // new node create
    node<int> *temp = new node<int>(d);
    temp->next = head;
    head = temp;
}

void insertattail(node<int> *&head, node<int> *&tail, int d)
{

    if (tail == NULL)
    {
        node<int> *newnode = new node<int>(d);
        head = newnode;
        tail = newnode;
    }
    else
    {
        // new node create
        node<int> *temp = new node<int>(d);
        tail->next = temp;
        // tail = tail->next;
        tail = temp;
    }
}

void print(node<int> *head)
{
    node<int> *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

node<int>* solve(node<int>* first,node<int>* second){


    if (first->next==NULL){
        first->next=second;
        return first;
    }

    node<int>* curr1=first;
    node<int>* next1=curr1->next;
    node<int>* curr2=second;
    node<int>* next2=curr2->next;


    while(next1!=NULL && curr2!=NULL){
        if (curr2->data >= curr1->data && curr2->data<=next1->data){

            curr1->next=curr2;
            next2=curr2->next;
            curr2->next=next1;

            curr1=curr2;
            curr2=next2;

        }
        else{
            curr1=curr1->next;
            next1=next1->next;

            if (next1==NULL){
                curr1->next=curr2;
                return first;
            }
        }
    }
    return first;
}
node<int>* sortTwoLists(node<int>* first, node<int>* second)
{
    // Write your code here.

    if (first==NULL){
        return second;
    }
    if (second==NULL){
        return first;
    }

    if (first->data<=second->data){
        return solve(first,second);
    }
    else{
        return solve(second,first);
    }

}

int main()
{
    // tail pointed to nodel
    node<int> *head = NULL;
    node<int> *tail = NULL;
    insertattail(head, tail, 1);
    insertattail(head, tail, 3);
    insertattail(head, tail, 5);

    node<int> *head1=NULL;
    node<int> *tail1=NULL;
    insertattail(head1, tail1, 2);
    insertattail(head1, tail1, 4);
    insertattail(head1, tail1, 5);

    
    node<int>* newhead=sortTwoLists(head,head1);
    print(newhead);
    return 0;
}
