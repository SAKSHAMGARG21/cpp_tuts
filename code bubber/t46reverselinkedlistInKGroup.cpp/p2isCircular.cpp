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

        while (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "memory is free :" << val << endl;
    }
};

void insertnode(node *&tail, int ele, int d)
{

    // empty list
    if (tail == NULL)
    {
        node *newnode = new node(d);
        tail = newnode;
        newnode->next = newnode;
    }
    else
    {
        // if list is not empty

        node *curr = tail;

        while (curr->data != ele)
        {
            curr = curr->next;
        }

        node *temp = new node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void print(node* tail){

    node* temp=tail;

    if (tail==NULL){
        cout<<"list is empty"<<endl;
        return;
    }
    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }while(tail!=temp);
    cout<<endl;
}

void deletnode(node* &tail,int ele){

    // empty
    if (tail==NULL){
        cout<<"list is empty"<<endl;
        return;
    }

    else{
        
        node* prev=tail;
        node* curr=prev->next;

        while(curr->data!=ele){
            prev=curr;
            curr=curr->next;
        }

        prev->next=curr->next;
        // 1 NODE linked list
        if (curr==prev){
            tail=NULL;
        }

        // >=2 node
        else if (tail==curr){
            tail=prev;
            // tail=curr->next;
        }
        curr->next=NULL;
        delete curr;    
    }
}

// bool isCircular(node* head){
//     // Write your code here

//     if (head==NULL){
//         return false;
//     }
//     else{
//         node* temp=head->next;
//         while(temp!=NULL && temp!=head){
//             temp=temp->next;
//         }
//         if (temp==head){
//             return true;
//         }
//         return false;
//     }
// }

bool isCircular(node* head){
    // Write your code here
    map<node*, bool> visited;
    node* temp=head;
    while(temp!=NULL){
        if (visited[temp]==true){
            return true;
        }
        visited[temp]=true;
        temp=temp->next;
    }
    return false;
}
int main()
{

    node* tail=NULL;

    insertnode(tail,5,3);
    print(tail);

    // insertnode(tail,3,2);
    // print(tail);

    // insertnode(tail,2,7);
    // print(tail);

    // insertnode(tail,7,9);
    // print(tail);

    // insertnode(tail,9,25);
    // print(tail);

    // insertnode(tail,3,5);
    // print(tail);

    // deletnode(tail,3);
    // print(tail);

    if (isCircular(tail)){
        cout<<"true";
    }
    else{
        cout<<"flase";
    }
    return 0;
}