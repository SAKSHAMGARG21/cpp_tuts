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

// first approach From unsorted linked list
// node *removeDuplicates(node *&head)
// {
//     if (head == NULL)
//     {
//         return NULL;
//     }

//     node *curr = head;

//     while (curr != NULL)
//     {
//         node *temp = curr->next;
//         node *prev = curr;

//         while (temp != NULL)
//         {
//             if ((temp != NULL) && temp->data == prev->data)
//             {
//                 node *nextnode = temp->next;
//                 prev->next = nextnode;
//                 delete temp;     // Move the delete operation after updating pointers
//                 temp = nextnode; // Move to the next node after deletion
//             }
//             else
//             {
//                 temp = temp->next;
//                 prev = prev->next;
//             }
//         }

//         curr = curr->next;
//     }

//     return head;
// }

// second Approach to remove element form the linked list
void removeDuplicates(node* head) {
    if (head == NULL) {
        return;
    }

    map<int, bool> visited;
    node* curr = head;
    node* prev = NULL;

    while (curr != NULL) {
        if (visited[curr->data]) {
            // If the current node has duplicate data
            if (prev != NULL) {
                prev->next = curr->next;
                delete curr; 
                curr = prev->next;  // Move curr to the next node after deletion
            } 
            // else {
            //     // If the first node has duplicate data
            //     node* temp = curr;
            //     curr = curr->next;
            //     head = curr;  // Update head to the new start of the list
            //     delete temp;
            // }
        } else {
            visited[curr->data] = true;
            prev = curr;
            curr = curr->next;
        }
    }
}

// node* removeDuplicates(node* head) {
//     if (head == NULL) {
//         return NULL;
//     }

//     unordered_set<int> visited;
//     node* curr = head;
//     node* prev = NULL;

//     while (curr != NULL) {
//         if (visited.find(curr->data) != visited.end()) {
//             // If the current node has duplicate data
//             // unordered_set<int>::iterator it=visited.find(1);
//             // unordered_set<int>::iterator it2=visited.end();
//             // cout<<*it<<endl;
//             // // cout<<*it2<<endl;

//             prev->next = curr->next;
//             delete curr;
//             curr = prev->next;  // Move curr to the next node after deletion
//         } else {
//             visited.insert(curr->data);
//             prev = curr;
//             curr = curr->next;
//         }
//     }
//     return head;
// }

int main()
{
    // tail pointed to nodel
    node *head = NULL;
    node *tail = NULL;
    insertattail(head, tail, 1);
    insertattail(head, tail, 1);
    insertattail(head, tail, 5);
    insertattail(head, tail, 4);
    insertattail(head, tail, 2);
    insertattail(head, tail, 5);
    print(head);

    removeDuplicates(head);
    print(head);

    // cout << "head data " << head->data << endl;
    // cout << "tail data " << tail->data << endl;
    return 0;
}


// split the linked list in to parts from middle
