// -----------------------------------------------------------------------------------------------------------------
// c
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// A class to represent a node of a linked list
class Node {
    public:
    int data; // the data stored in the node
    Node* next; // the pointer to the next node
    Node* child; // the pointer to the child node

    // A constructor to initialize the node with a given data
    Node(int data) {
        this->data = data;
        this->next = NULL;
        this->child = NULL;
    }
};

// A function to find the middle node of a linked list
Node* findmid(Node* head){
    Node* slow=head;
    Node* fast=head->next;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

// A function to merge two sorted linked lists
Node* mergeLL(Node* left,Node* right){
    if (left==NULL){
        return right;
    }
    if (right==NULL){
        return left;
    }

    Node* ans=new Node(-1);
    Node* temp=ans;
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
    while(right!=NULL){
        temp->next=right;
        temp=right;
        right=right->next;
    }

    ans=ans->next;
    return ans;

}

// A function to sort a linked list using merge sort
Node *sortLL(Node *head){
    // Write your code here.
    if (head==NULL || head->next==NULL){
        return head;
    }

    Node* mid=findmid(head);

    Node* left=head;
    Node* right=mid->next;
    mid->next=NULL;

    left=sortLL(left);
    right=sortLL(right);

    Node* ans=mergeLL(left,right);
    return ans;
}

// A function to print a linked list
void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// The main function of the program
int main() {
    // Create a sample linked list
    Node* head = new Node(5);
    head->next = new Node(8);
    head->next->next = new Node(6);
    head->next->next->next = new Node(7);
    head->next->next->next->next = new Node(10);
    head->next->next->next->next->next = new Node(1);
    head->next->next->next->next->next->next = new Node(4);

    // Print the original linked list
    cout << "Original linked list:" << endl;
    printList(head);

    // Sort and print the linked list
    cout << "Sorted linked list:" << endl;
    head = sortLL(head);
    printList(head);

    return 0;
}
