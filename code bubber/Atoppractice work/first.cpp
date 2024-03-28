// -----------------------------------------------------------------------------------------------------------------
// c
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class node {
    public:
    int data;
    node* next;

    node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void print(node* head){
    node* temp=head;
    // if (head==NULL){
    //    cout<<"list is empty"<<endl; 
    // }
    // else{
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    // }
}

void insertattail(node* &head,node* &tail,int d){
    node* temp=new node(d);
    if (head==NULL){
        head=temp;
        tail=temp;
    }
    else{
        tail->next=temp;
        tail=temp;
    }
}


// node* findmid(node* head){
//     node* slow=head;
//     node* fast=head->next;

//     while(fast->next!=NULL){
//         fast=fast->next;
//         if (fast->next!=NULL){
//             fast=fast->next;
//         }
//         slow=slow->next;
//     }
//     return slow;
// }

node* findmid(node* head){
    node* slow=head;
    node* fast=head->next;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

node* mergesort(node* left,node* right){
    if(left==NULL){
        return right;
    }
    if (right==NULL){
        return left;
    }
    node* ans=new node(-1);
    node* temp=ans;
    while(left!=NULL && right!=NULL){
        if (left->data < right->data){
            temp->next=left;
            temp=left;
            left=left->next;
        }
        else{
            temp->next=right;
            temp=right;
            right=right->next;
        }
    }

    while(left!=NULL){
        temp->next=left;
        temp=left;
        left=left->next;
    }

    while (right!=NULL)
    {
        temp->next=right;
        temp=right;
        right=right->next;
    }
    return ans->next;
    
}

node* sortll(node* head){
    if (head==NULL || head->next==NULL){
        return head;
    }

    node* mid=findmid(head);
    node* left=head;
    node* right=mid->next;
    mid->next=NULL;

    left=sortll(left);
    right=sortll(right);

    node* ans=mergesort(left,right);
    return ans;
}

int main()
{

    node* head=NULL;
    node* tail=NULL;

    int n,d;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>d;
        insertattail(head,tail,d);
    }
    cout<<"original list"<<endl;
    print(head);

    cout<<"sorted list:"<<endl;
    head=sortll(head);
    print(head);

    return 0;
}