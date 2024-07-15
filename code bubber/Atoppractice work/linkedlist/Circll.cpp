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

    ~node()
    {
        int val = this->data;
        if (this->next == NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for this :" << val<<endl;
    }
};

void insertnode(node*& tail,int ele,int d){
    node* temp=new node(d);
    if (tail==NULL){
        temp->next=temp;
        tail=temp;
    }
    else{

        node* curr=tail;

        while (curr->data!=ele)
        {
            curr=curr->next;
        }

        temp->next=curr->next;
        curr->next=temp;
    }
}

void print(node* tail){

    node* temp=tail;

    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }while(temp!=tail);
    cout<<endl;
    return ;
}

void deletnode(node* &tail,int ele){
    if (tail==NULL){
        cout<<"Linked list is empty->";
        return ;
    }

    else{
        node* pre=tail;
        node* curr=pre->next;

        while(curr->data!=ele){
            pre=curr;
            curr=curr->next;
        }

        pre->next=curr->next;
        if (pre==curr){
            tail==NULL;
        }
        if (curr==tail){
            tail=pre;
        }
        curr->next=NULL;
        delete curr;
    }
}
int main()
{
    node* tail=NULL;

    insertnode(tail,5,3);
    print(tail);

    insertnode(tail,3,2);
    print(tail);

    insertnode(tail,2,7);
    print(tail);

    insertnode(tail,7,9);
    print(tail);

    insertnode(tail,9,25);
    print(tail);

    insertnode(tail,3,5);
    print(tail);

    deletnode(tail,3);
    print(tail);
    return 0;
}