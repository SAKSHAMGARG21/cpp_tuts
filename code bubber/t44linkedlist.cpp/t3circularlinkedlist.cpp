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




























// #include<iostream>
// #include<map>
// using namespace std;

// class Node {
//     public:
//     int data;
//     Node* next;

//     //constrcutor
//     Node(int d) {
//         this->data = d;
//         this->next = NULL;
//     }

//     ~Node() {
//         int value = this->data;
//         if(this->next != NULL) {
//             delete next;
//             next = NULL;
//         }
//         cout << " memory is free for node with data " << value << endl;
//     }

// };

// void insertNode(Node* &tail, int element, int d) {
    

//     //empty list
//     if(tail == NULL) {
//         Node* newNode = new Node(d);
//         tail = newNode;
//         newNode -> next = newNode;
//     }
//     else{
//         //non-empty list
//         //assuming that the element is present in the list

//         Node* curr = tail;

//         while(curr->data != element) {
//             curr = curr -> next;
//         }
        
//         //element found -> curr is representing element wala node
//         Node* temp = new Node(d);
//         temp -> next = curr -> next;
//         curr -> next = temp;

//     }

// }    

// void print(Node* tail) {

//     Node* temp = tail;

//     //empty list
//     if(tail == NULL) {
//         cout << "List is Empty "<< endl;
//         return ;
//     }

//     do {
//         cout << tail -> data << " ";
//         tail = tail -> next;
//     } while(tail != temp);

//     cout << endl;
// } 

// void deleteNode(Node* &tail, int value) {

//     //empty list
//     if(tail == NULL) {
//         cout << " List is empty, please check again" << endl;
//         return;
//     }
//     else{
//         //non-empty

//         //assuming that "value" is present in the Linked List
//         Node* prev = tail;
//         Node* curr = prev -> next;

//         while(curr -> data != value) {
//             prev = curr;
//             curr = curr -> next;
//         }

//         prev -> next = curr -> next;

//         //1 Node Linked List
//         if(curr == prev) {
//             tail = NULL;
//         }

//         //>=2 Node linked list
//         else if(tail == curr ) {
//             tail = prev;
//         }

//         curr -> next = NULL;
//         delete curr;

//     }

// }

// bool isCircularList(Node* head) {
//     //empty list
//     if(head == NULL) {
//         return true;
//     }

//     Node* temp = head -> next;
//     while(temp != NULL && temp != head ) {
//         temp = temp -> next;
//     }

//     if(temp == head ) {
//         return true;
//     }

//     return false;

// }

// bool detectLoop(Node* head) {

//     if(head == NULL)
//         return false;

//     map<Node*, bool> visited;

//     Node* temp = head;

//     while(temp !=NULL) {

//         //cycle is present
//         if(visited[temp] == true) {
//             return true;
//         }

//         visited[temp] = true;
//         temp = temp -> next;

//     }
//     return false;

// }


// int main() {

//     Node* tail = NULL;

//    insertNode(tail, 5, 3);
//     print(tail);

//   //  insertNode(tail, 3, 5);
//    // print(tail);

// /*
//     insertNode(tail, 5, 7);
//     print(tail);

//     insertNode(tail, 7, 9);
//     print(tail);

//     insertNode(tail, 5, 6);
//     print(tail);
    
//     insertNode(tail, 9, 10);
//     print(tail);

//     insertNode(tail, 3, 4);
//     print(tail);*/
   

//     deleteNode(tail, 3);
//     print(tail);

//     // if(isCircularList(tail)) {
//     //     cout << " Linked List is Circular in nature" << endl;
//     // }
//     // else{
//     //     cout << "Linked List is not Circular " << endl;
//     // }

//     return 0;
// }