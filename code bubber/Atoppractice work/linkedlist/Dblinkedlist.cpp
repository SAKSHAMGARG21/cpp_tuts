// -----------------------------------------------------------------------------------------------------------------
// c
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* prev;
    node* next;

    node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }

    ~node(){
        int val=this->data;
        if (this->next==NULL){
            delete this->next;
        }

        cout<<"Memory is free for this value :"<<val;
    }
};

void itohead(node* &head,node* &tail,int d){
    node* temp=new node(d);
    if (head==NULL){
        temp->next=head;
        head=temp;
        tail=temp;
    }
    else{
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
}

void itotail(node* &head,node*&tail,int d){
    node* temp=new node(d);
    if (head==NULL && tail==NULL){
        temp->next=head;
        head=temp;
        tail=temp;
    }else{
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
    }
}

void printll(node* head){
    node* temp=head;

    while( temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return ;
}

void itopos(node* &head,node* &tail,int d,int pos){
    if (pos==1){
        itohead(head,tail,d);
        return ;
    }

    node* temp=head;

    int cnt=1;
    while(cnt<pos-1){
        temp=temp->next;
        cnt++;
    }

    if (temp->next==NULL){
        itotail(head,tail,d);
        return ;
    }

    node* nti=new node(d);
    nti->next=temp->next;
    temp->next->prev=nti;
    temp->next=nti;
    nti->prev=temp;
    
}

void deletell(node* head,node* tail,int pos){

    if (pos==1){
        node* temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
    else{

        node* curr=head;
        node* pre=NULL;
        int cnt=1;
        while( cnt<pos){
            pre=curr;
            curr=curr->next;
            cnt++;
        }

        curr->prev=NULL;
        pre->next=curr->next;
        if (curr->next==NULL){
            tail=pre;
        }
        else{
            curr->next->prev=pre;
            curr->next=NULL;
        }
        delete curr;
    }
}

int main()
{
    node *head = NULL;
    node *tail = NULL;

    // itohead(head,tail,10);
    // itohead(head,tail,13);
    // itohead(head,tail,15);
    // itohead(head,tail,12);
    // itohead(head,tail,18);

    itotail(head, tail, 10);
    itotail(head, tail, 13);
    itotail(head, tail, 15);
    itotail(head, tail, 12);
    itotail(head, tail, 18);

    printll(head);
    cout<<endl;

    itopos(head,tail,29,6);
    cout<<"After inserting to the postion: ";
    printll(head);
    cout<<endl;

    deletell(head,tail,4);
    cout<<"After deleting the list: ";
    printll(head);

    return 0;
}