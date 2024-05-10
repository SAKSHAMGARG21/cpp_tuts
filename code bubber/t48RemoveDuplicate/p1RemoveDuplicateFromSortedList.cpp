// // -----------------------------------------------------------------------------------------------------------------
// // singly linked list
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

void insertattail(node *&head,node *&tail, int d)
{

    if (tail == NULL)
    {
        node *newnode = new node(d);
        head=newnode;
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

// From sorted linked list
node *removeDuplicates(node *&head)
{
    if (head == NULL)
    {
        return NULL;
    }

    node *curr = head;

    while (curr != NULL)
    {

        if ((curr->next != NULL) && curr->data == curr->next->data)
        {
            node *nextNode = curr->next->next;
            node *nodetodle = curr->next;
            delete nodetodle;
            curr->next = nextNode;
        }
        else
        {
            curr = curr->next;
        }
    }

    return head;
}
int main()
{
    // tail pointed to nodel
    node *head = NULL;
    node *tail = NULL;
    insertattail(head,tail, 1);
    insertattail(head,tail, 2);
    insertattail(head,tail, 2);
    insertattail(head,tail, 4);
    insertattail(head,tail, 5);
    insertattail(head,tail, 5);
    print(head);

    removeDuplicates(head);
    print(head);

    // cout << "head data " << head->data << endl;
    // cout << "tail data " << tail->data << endl;
    return 0;
}



/* C++ Program to remove duplicates from a sorted linked
 * list */

// #include <bits/stdc++.h>
// using namespace std;

// /* Link list node */
// class Node {
// public:
// 	int data;
// 	Node* next;
// };

// /* The function removes duplicates from a sorted list */
// void removeDuplicates(Node* head)
// {
// 	/* Pointer to traverse the linked list */
// 	Node* current = head;

// 	/* Pointer to store the next pointer of a node to be
// 	* deleted*/
// 	Node* next_next;

// 	/* do nothing if the list is empty */
// 	if (current == NULL)
// 		return;

// 	/* Traverse the list till last node */
// 	while (current->next != NULL) {
// 		/* Compare current node with next node */
// 		if (current->data == current->next->data) {
// 			/* The sequence of steps is important*/
// 			next_next = current->next->next;
// 			free(current->next);
// 			current->next = next_next;
// 		}
// 		else /* This is tricky: only advance if no deletion
// 			*/
// 		{
// 			current = current->next;
// 		}
// 	}
// }

// /* UTILITY FUNCTIONS */
// /* Function to insert a node at the beginning of the linked
// * list */
// void push(Node** head_ref, int new_data)
// {
// 	/* allocate node */
// 	Node* new_node = new Node();

// 	/* put in the data */
// 	new_node->data = new_data;

// 	/* link the old list of the new node */
// 	new_node->next = (*head_ref);

// 	/* move the head to point to the new node */
// 	(*head_ref) = new_node;
// }

// /* Function to print nodes in a given linked list */
// void printList(Node* node)
// {
// 	while (node != NULL) {
// 		cout << " " << node->data;
// 		node = node->next;
// 	}
// }

// /* Driver program to test above functions*/
// int main()
// {
// 	/* Start with the empty list */
// 	Node* head = NULL;

// 	/* Let us create a sorted linked list to test the
// 	functions Created linked list will be
// 	11->11->11->13->13->20 */
// 	push(&head, 20);
// 	push(&head, 13);
// 	push(&head, 13);
// 	push(&head, 11);
// 	push(&head, 11);
// 	push(&head, 11);

// 	cout << "Linked list before duplicate removal " << endl;
// 	printList(head);

// 	/* Remove duplicates from linked list */
// 	removeDuplicates(head);

// 	cout << "\nLinked list after duplicate removal "
// 		<< endl;
// 	printList(head);                 

// 	return 0;
// }

// This code is contributed by rathbhupendra
