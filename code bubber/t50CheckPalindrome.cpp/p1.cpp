#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
#include <bits/stdc++.h>
using namespace std;
/* Link list Node */
struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

// first approach
// class Solution
// {
// private:
//     Node *reverse(Node *head)
//     {

//         if (head == NULL)
//         {
//             return head;
//         }
//         Node *prev = NULL;
//         Node *curr = head;
//         Node *fard = NULL;

//         while (curr != NULL)
//         {
//             fard = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = fard;
//         }
//         return prev;
//     }

// public:
//     // Function to check whether the list is palindrome.
//     bool isPalindrome(Node *head)
//     {
//         // Your code here
//         Node *temp = head;
//         int ans = 0;
//         int c = 0;
//         while (temp != NULL)
//         {
//             int rem = temp->data;
//             ans = (ans * 10) + rem;
//             temp = temp->next;
//         }

//         Node *revhead = reverse(head);
//         temp = revhead;
//         int ans1 = 0;
//         while (temp != NULL)
//         {
//             int rem = temp->data;
//             ans1 = (ans1 * 10) + rem;
//             temp = temp->next;
//         }

//         if (ans == ans1)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }
// };

// second Approach
// class Solution
// {
// public:
//     // Function to check whether the list is palindrome.
//     bool isPalindrome(Node *head)
//     {
//         // Your code here
//         vector<int> ans;
//         Node *temp = head;
//         while (temp != NULL)
//         {
//             int data = temp->data;
//             ans.push_back(data);
//             temp = temp->next;
//         }

//         int as = ans.size();
//         int j=as-1;
//         int i = 0;
//         while (i <= j)
//         {
//             if (ans[i]!=ans[j]){
//                 return false;
//             }
//             i++;
//             j--;
//         }
//         return true; 
//     }
// };

// Third approach
class Solution{
private:
    Node* reverse(Node* head){
        
        if (head==NULL){
            return head;
        }
        Node* prev=NULL;
        Node* curr=head;
        Node* fard=NULL;
        
        while(curr!=NULL){
            fard=curr->next;
            curr->next=prev;
            prev=curr;
            curr=fard;
        }
        return prev;
    }

private:
Node * getmiddle(Node* head){
    
    Node* slow=head;
    Node* fast=head->next;
    
    while(fast!=NULL && fast->next!=NULL ){
        fast=fast->next->next;
        slow=slow->next;
    }
    
    return slow;
}

public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {   
    
        if (head->next==NULL){
            return true;
        }
        
        Node* middle=getmiddle(head);
        
        
        middle->next=reverse(middle->next);
        
        Node* head1=head;
        Node* head2=middle->next;
        
        while(head2!=NULL){
            if (head1->data != head2->data){
                return false;
            }
            head1=head1->next;
            head2=head2->next;
        }
        
        middle->next=reverse(middle->next);
        
        return true;
    
    }
};
int main()
{
    int T, i, n, l, firstdata;
    cin >> T;
    while (T--)
    {

        struct Node *head = NULL, *tail = NULL;
        cin >> n;
        // taking first data of LL
        cin >> firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for (i = 1; i < n; i++)
        {
            cin >> l;
            tail->next = new Node(l);
            tail = tail->next;
        }
        Solution obj;
        cout << obj.isPalindrome(head) << endl;
    }
    return 0;
}