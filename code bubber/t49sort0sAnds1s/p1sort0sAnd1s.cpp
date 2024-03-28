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
};

void insertathead(node *&head, int d)
{
    // new node create
    node *temp = new node(d);
    temp->next = head;
    head = temp;
}

void insertattail(node *&head, node *&tail, int d)
{

    if (tail == NULL)
    {
        node *newnode = new node(d);
        head = newnode;
        tail = newnode;
    }
    else
    {
        // new node create
        node *temp = new node(d);
        tail->next = temp;
        // tail = tail->next;
        tail = temp;
    }
}

void print(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}


// this is first approach
// node* sortList(node *head){
//     // Write your code here.

//     int zerocnt=0;
//     int onecnt=0;
//     int twocnt=0;
//     node* temp=head;
//     while(temp!=NULL){
//         if (temp->data==0){
//             zerocnt++;
//         }
//         else if (temp->data==1){
//             onecnt++;
//         }
//         else{
//             twocnt++;
//         }
//         temp=temp->next;
//     }

//     temp=head;

//     while(temp!=NULL){
//         if (zerocnt!=0){
//             temp->data=0;
//             zerocnt--;
//         }
//         else if (onecnt!=0){
//             temp->data=1;
//             onecnt--;
//         }
//         else{
//             temp->data=2;
//             twocnt--;
//         }
//         temp=temp->next;
//     }

//     return head;
// }

// this is second approach

void insertatTail(node* &tail,node* curr){
    tail->next=curr;
    tail=curr;
}
node* sortList(node *head){
    // Write your code here.


    node* zerohead=new node(-1);
    node* zerotail=zerohead;
    node* onehead=new node(-1);
    node* onetail=onehead;
    node* twohead=new node(-1);                
    node* twotail=twohead;

    node* curr=head;
    while(curr!=NULL){
        int value=curr->data;
        if (value==0){
            insertatTail(zerotail,curr);
        }
        else if (value==1){
            insertatTail(onetail,curr);
        }
        else{
            insertatTail(twotail,curr);
        }
        curr=curr->next;
    }

    if(onehead->next!=NULL){
        zerotail->next=onehead->next;
    }
    else{
        zerotail->next=twohead->next;
    }

    onetail->next=twohead->next;
    twotail->next=NULL;

    // setup head
    head=zerohead->next;
    
    delete zerohead;
    delete onehead;
    delete twohead;
    
    return head;
}

int main()
{
    // tail pointed to nodel
    node *head = NULL;
    node *tail = NULL;
    // insertattail(head, tail, 1);
    // insertattail(head, tail, 1);
    // insertattail(head, tail, 5);
    // insertattail(head, tail, 4);
    // insertattail(head, tail, 2);
    // insertattail(head, tail, 5);

    int n;
    cin>>n;
    int val;
    for (int i = 0; i < n; i++)
    {
        cin>>val;
        insertattail(head,tail,val);
    }
    
    node* newhead=sortList(head);
    print(newhead);
    return 0;
}
