// // -----------------------------------------------------------------------------------------------------------------
// // c
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *next;
//     node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// };

// void itotail(node *&tail, int ele, int d)
// {
//     node *temp = new node(d);
//     if (tail == NULL)
//     {
//         temp->next = temp;
//         tail = temp;
//     }
//     else
//     {
//         node *curr = tail;

//         while (curr->data != ele)
//         {
//             curr = curr->next;
//         }

//         temp->next = curr->next;
//         curr->next = temp;
//         return;
//     }
// }

// void printll(node *tail)
// {
//     if (tail == NULL)
//     {
//         cout << "List is empty" << endl;
//         return;
//     }

//     node *temp =tail ;
//     do{
//         cout<<tail->data<<" ";
//         tail=tail->next;
//     }while (temp != tail);
//     cout << endl;
// }

// int main()
// {
//     node *tail = NULL;

//     int n;
//     cin >> n;
//     int arr[n] = {-1};
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     for (int i = -1; i < n - 1; i++)
//     {
//         itotail(tail, arr[i], arr[i + 1]);
//     }

//     printll(tail);

//     return 0;
// }

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

void itotail(node *&tail, int ele, int d)
{
    node *temp = new node(d);
    if (tail == NULL)
    {
        temp->next = temp;
        tail = temp;
    }
    else
    {
        node *curr = tail;

        while (curr->data != ele)
        {
            curr = curr->next;
        }

        temp->next = curr->next;
        curr->next = temp;
        return;
    }
}

void printll(node *tail)
{
    if (tail == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }

    node *temp =tail ;
    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }while (temp != tail);
    cout << endl;
}

// bool detectloop(node* tail){

//     node* temp=tail;
//     while (temp!=tail && temp!=NULL)
//     {
//         temp=temp->next;
//     }

//     if (temp==NULL){
//         return false;
//     }
//     else{
//         return true;
//     }
// }

bool detectloop2(node* tail){
    map<node*,bool> vist;
    node* temp=tail;
    while(temp!=nullptr){

        if (vist[temp]==true){
            return true;
        }
        vist[temp]=true;
        temp=temp->next;
    }
    return false;
}

node* checkloop(node* tail){

    node* slow=tail;
    node* fast=tail;

    while (slow!=NULL && fast!=NULL)
    {
        fast=fast->next;

        if (fast!=nullptr){
            fast=fast->next;
        }

        slow=slow->next;

        if (slow==fast){
            cout<<"\nSlow ka data "<<slow->data<<endl;
            return slow;
        }
    }

    return NULL;
    
}

node* startofloop(node* tail){

    node* slow = tail;
    node* inter=checkloop(tail);

    if (slow!=inter){
        slow=slow->next;
        inter=inter->next;
    }

    return slow;
}

void removeloop(node* tail){

    node* startnode=startofloop(tail);

    node* temp=startnode;
    while (temp->next!=startnode)
    {
        temp=temp->next;
    }

    temp->next=NULL;
}
int main()

{
    node *tail = NULL;

    int n;
    cin >> n;
    int arr[n] = {-1};
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = -1; i < n - 1; i++)
    {
        itotail(tail, arr[i], arr[i + 1]);
    }

    // printll(tail);

    // cout<<detectloop(tail);
    cout<<detectloop2(tail);

    removeloop(tail);
    cout<<endl;
    cout<<detectloop2(tail);

    return 0;
}