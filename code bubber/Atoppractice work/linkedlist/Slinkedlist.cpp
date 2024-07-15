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

//     ~node()
//     {
//         int val = this->data;

//         if (this->next == NULL)
//         {

//             delete next;
//             this->next = NULL;
//         }
//         cout << "memory is free" << val << endl;
//     }
// };

// void itohead(node *&head, node *&tail, int d)
// {

//     node *temp = new node(d);
//     if (head == NULL)
//     {
//         head = temp;
//         tail = temp;
//     }
//     else
//     {
//         temp->next = head;
//         head = temp;
//     }
// }

// void itotail(node *&head, node *&tail, int d)
// {
//     node *temp = new node(d);
//     if (tail == NULL)
//     {
//         head = temp;
//         tail = temp;
//     }
//     else
//     {
//         tail->next = temp;
//         tail = temp;
//     }
// }

// void printll(node *head)
// {

//     node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
// }

// void itopos(node *&head, node *&tail, int d, int pos)
// {

//     if (pos == 1)
//     {
//         itohead(head, tail, d);
//         return;
//     }

//     node *temp = head;
//     int cnt = 1;

//     while (cnt < pos - 1)
//     {
//         temp = temp->next;
//         cnt++;
//     }

//     if (temp->next == NULL)
//     {
//         itotail(head, tail, d);
//         return;
//     }

//     node *nti = new node(d);
//     nti->next=temp->next;
//     temp->next= nti;
// }

// void deletell(node *head, node *tail, int pos)
// {

//     node *temp = head;
//     if (head == NULL)
//     {
//         head = head->next;
//         temp->next=NULL;
//         delete temp;
//         return;
//     }
//     else
//     {
//         node* curr=head;
//         node* prev=NULL;
//         int cnt = 1;

//         while (cnt < pos)
//         {
//             prev=curr;
//             curr= curr->next;
//             cnt++;
//         }

//         prev->next=curr->next;
//         if (curr->next == NULL)
//         {
//             tail = prev;
//         }

//         curr->next=nullptr;
//         delete curr;
//     }
// }



// int main()
// {
//     node *head = NULL;
//     node *tail = NULL;

//     // itohead(head,tail,10);
//     // itohead(head,tail,13);
//     // itohead(head,tail,15);
//     // itohead(head,tail,12);
//     // itohead(head,tail,18);

//     itotail(head, tail, 10);
//     itotail(head, tail, 13);
//     itotail(head, tail, 15);
//     itotail(head, tail, 12);
//     itotail(head, tail, 18);

//     printll(head);
//     cout<<endl;

//     itopos(head,tail,29,3);
//     cout<<"After inserting to the postion: ";
//     printll(head);
//     cout<<endl;

//     deletell(head,tail,4);
//     cout<<"After deleting the list: ";
//     printll(head);



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


void itotail(node *&head, node *&tail, int d)
{
    node *temp = new node(d);
    if (head == NULL && tail == NULL)
    {
        head = temp;
        tail = temp;
        return;
    }
    else
    {
        tail->next = temp;
        tail = temp;
        return;
    }
}

void printll(node *head)
{
    if (head == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }

    else
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
}

node *reverselist(node *head)
{

    if (head == NULL)
    {
        cout << "List is empty" << endl;
        // return;
        return NULL;
    }

    node *prev = NULL;
    node *curr = head;
    node *fard = NULL;
    while (curr != NULL)
    {
        fard = curr->next;
        curr->next = prev;
        prev = curr;
        curr = fard;
    }

    return prev;
}

node *reversell(node *head, node *curr, node *prev)
{
    if (curr == NULL)
    {
        head = prev;
        return head;
    }

    node *fard = curr->next;
    reversell(head, fard, curr);
    curr->next = prev;
    return fard;
}

node *kreverse(node *head, int k)
{
    if (head == NULL)
    {
        return NULL;
    }

    node *fard = NULL;
    node *curr = head;
    node *back = NULL;

    int cnt = 1;
    node *temp = head;
    while (temp != NULL && cnt <= k)
    {
        cnt++;
        temp = temp->next;
    }

    if (cnt - 1 == k)
    {
        cnt = 1;
        while (curr != NULL && cnt <= k)
        {
            fard = curr->next;
            curr->next = back;
            back = curr;
            curr = fard;
            cnt++;
        }

        if (fard != NULL)
        {
            head->next = kreverse(fard, k);
        }

        return back;
    }

    else
    {
        return head;
    }
}

void removeduplicate(node *head)
{

    node *curr = head;

    while (curr != NULL)
    {

        if ((curr->next != NULL) && curr->data == curr->next->data)
        {

            node *ntonext = curr->next->next;
            node *ntodel = curr->next;
            delete ntodel;
            curr->next = ntonext;
        }
        else
        {
            curr = curr->next;
        }
    }
}

node *solve(node *head, node *head1)
{
    if (head->next == NULL)
    {
        head->next = head1;
        return head;
    }

    node *curr1 = head;
    node *next1 = curr1->next;
    node *curr2 = head1;
    node *next2 = curr2->next;

    while (next1 != NULL || curr2 != NULL)
    {

        if (curr1->data <= curr2->data && curr2->data <= next1->data)
        {

            curr1->next = curr2;
            next2 = curr2->next;
            curr2->next = next1;

            curr1 = curr2;
            curr2 = next2;
        }
        else
        {
            curr1 = curr1->next;
            next1 = next1->next;
            if (next1 == NULL)
            {
                curr1->next = curr2;
                return head;
            }
        }
    }

    return head;
}
node *mergesort(node *head, node *head1)
{
    if (head == NULL)
    {
        return head1;
    }
    if (head1 == NULL)
    {
        return head;
    }

    if (head->data <= head1->data)
    {
        return solve(head, head1);
    }
    else
    {
        return solve(head1, head);
    }
}

void removeduplicate2(node *head)
{

    map<int, bool> vist;

    node *prev = NULL;
    node *curr = head;
    while (curr != nullptr)
    {
        if (vist[curr->data] == true)
        {
            if (prev != NULL)
            {
                prev->next = curr->next;
                delete curr;
                curr = prev->next;
            }
        }
        else
        {
            vist[curr->data] = true;
            prev = curr;
            curr = curr->next;
        }
    }
}

node *mergesort2(node *first, node *second)
{

    if (first == NULL)
    {
        return second;
    }
    if (second == NULL)
    {
        return first;
    }

    node *left = first;
    node *right = second;

    node *ans = new node(-1);
    node *temp = ans;
    while (left != NULL && right != NULL)
    {

        if (left->data < right->data)
        {
            temp->next = left;
            temp = left;
            left = left->next;
        }
        else
        {
            temp->next = right;
            temp = right;
            right = right->next;
        }
    }

    while (left != NULL)
    {
        temp->next = left;
        temp = left;
        left = left->next;
    }
    while (right != NULL)
    {
        temp->next = right;
        temp = right;
        right = right->next;
    }

    return ans->next;
}

node *getmid(node *head)
{
    node *slow = head;
    node *fast = head->next;

    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }

    return slow;
}
node *sortll(node *head)
{

    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    node *mid = getmid(head);

    node *left = head;
    node *right = mid->next;
    mid->next = NULL;

    left = sortll(left);
    right = sortll(right);

    node *ans = mergesort2(left, right);
    return ans;
}

int main()
{
    node *head = NULL;
    node *tail = NULL;
    node *head1 = NULL;
    node *tail1 = NULL;

    int n;
    cin >> n;
    int arr[n];
    // int arr1[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr1[i];
    // }

    for (int i = 0; i < n; i++)
    {
        itotail(head, tail, arr[i]);
    }
    // for (int i = 0; i < n; i++)
    // {
    //     itotail(head1, tail1, arr1[i]);
    // }

    // printll(head);
    // printll(head1);

    // node* curr=head;
    // node* prev=NULL;
    // node* revs=reversell(head,curr,prev);
    // cout<<"list after reverse:";
    // printll(revs);

    // node *krevs = kreverse(head, 3);
    // cout << "after kreverse" << endl;
    // printll(krevs);

    // removeduplicate(head);
    // printll(head);

    // removeduplicate2(head);
    // printll(head);

    // node *merghead = mergesort(head, head1);
    // printll(merghead);

    node *sum = sortll(head);
    printll(sum);
    return 0;
}