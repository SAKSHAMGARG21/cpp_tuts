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
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void itotail(node *&head, node *&tail, int d)
{
    node *temp = new node(d);
    if (head == NULL && tail == NULL)
    {
        head = temp;
        tail = temp;
        return;
    }
    else
    {
        tail->next=temp;
        tail=temp;
        return ;
    }
}

void printll(node* head){
    if (head==NULL){
        cout<<"List is empty"<<endl;
        return ;
    }

    else{
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
}
int main()
{
    node *head = NULL;
    node *tail = NULL;

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        itotail(head, tail, arr[i]);
    }

    // printll(head);

    





    return 0;
}