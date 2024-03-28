// -----------------------------------------------------------------------------------------------------------------
// c
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// A class to represent a node of a linked list
class Node
{
public:
    int data;    // the data stored in the node
    Node *next;  // the pointer to the next node
    Node *child; // the pointer to the child node

    // A constructor to initialize the node with a given data
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->child = NULL;
    }
};

// A function to merge two sorted linked lists
Node *merge(Node *down, Node *right)
{
    if (down == NULL)
    {
        return right;
    }
    if (right == NULL)
    {
        return down;
    }

    Node *mergedList = new Node(-1);
    Node *temp = mergedList;

    while (down != NULL && right != NULL)
    {
        if (down->data < right->data)
        {
            temp->child = down;
            temp = down;
            down = down->child;
        }
        else
        {
            temp->child = right;
            temp = right;
            right = right->child;
        }
    }

    while (down != NULL)
    {
        temp->child = down;
        temp = down;
        down = down->child;
    }
    while (right != NULL)
    {
        temp->child = right;
        temp = right;
        right = right->child;
    }

    return mergedList->child;
}

// A function to flatten a linked list
Node *flattenLinkedList(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    Node *down = head;
    Node *right = flattenLinkedList(head->next);

    Node *ans = merge(down, right);
    return ans;
}

// A function to print a linked list
void printList(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->child;
    }
    cout << endl;
}

// The main function of the program
int main()
{
    // Create a sample linked list
    Node *head = new Node(5);
    head->next = new Node(4);
    head->next->next = new Node(19);
    head->next->next->next = new Node(28);
    head->child = new Node(7);
    head->child->child = new Node(8);
    head->next->child = new Node(20);
    head->next->next->child = new Node(22);
    head->next->next->next->child = new Node(35);
    head->next->next->next->child->child = new Node(43);
    head->next->next->next->child->child->child = new Node(23);

    // Print the original linked list
    cout << "Original linked list:" << endl;
    Node *temp = head;
    while (temp != NULL)
    {
        printList(temp);
        temp = temp->next;
    }

    // Flatten and print the linked list
    cout << "Flattened linked list:" << endl;
    head = flattenLinkedList(head);
    printList(head);

    return 0;
}
