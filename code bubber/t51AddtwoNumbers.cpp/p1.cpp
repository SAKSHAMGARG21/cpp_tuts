#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int data;
    cin>> data;
    
    Node* head = new Node(data);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> data;
        tail->next = new Node(data);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}

class Solution
{
    private:
    void insertathead(Node* &head,int d){
        Node* temp=new Node(d);
        if (head==NULL){
            head=temp;
            return ;
        }
        else{
            temp->next=head;
            head=temp;        
        }
    }
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

    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        // first approch 100 test cases
        // Node* temp1=first;
        // Node* temp2=second;
        // long long int ans=0;
        // while(temp1!=NULL){
        //     int rem=temp1->data;
        //     ans=(ans*10)+rem;
        //     temp1=temp1->next;
        // }
        // long long int ans1=0;
        // while(temp2!=NULL){
        //     int rem=temp2->data;
        //     ans1=(ans1*10)+rem;
        //     temp2=temp2->next;
        // }
        
        // long long int mans=ans+ans1;
        // // cout<<mans<<endl;
        // Node* head=NULL;
        // Node* ansnode=NULL;
        // int fans=0;
        // while(mans!=0){
        //     int rem=mans%10;
        //     ansnode=insertathead(head,rem);
        //     mans/=10;
        // }
        // return ansnode;
        

        // second apprach
        // Node* Rhead1=reverse(first);
        // Node* Rhead2=reverse(second);
        // int cry=0;
        // int tans=0;
        // Node* head=NULL;
        // while(Rhead1!=NULL && Rhead2!=NULL){
        //     int data1=Rhead1->data;
        //     int data2=Rhead2->data;
        //     int sum=data1+data2+cry;
            
        //     tans=sum%10;
        //     insertathead(head,tans);
        //     cry=sum/10;
            
        //     Rhead1=Rhead1->next;
        //     Rhead2=Rhead2->next;
        // }
        
        // while(Rhead1!=NULL){
        //     int data1=Rhead1->data;
        //     int sum=data1+cry;
        //     tans=sum%10;
        //     insertathead(head,tans);
        //     cry=sum/10;
        //     Rhead1=Rhead1->next;
        // }
        
        // while(Rhead2!=NULL){
        //     int data2=Rhead2->data;
        //     int sum=data2+cry;
        //     tans=sum%10;
        //     insertathead(head,tans);
        //     cry=sum/10;
        //     Rhead2=Rhead2->next;
        // }
        
        // while(cry!=0){
        //     int sum=cry;
        //     tans=sum%10;
        //     insertathead(head,tans);
        //     cry=sum/10;
        // }
        
        // return head;
        
        // third approach;
        Node* Rhead1=reverse(first);
        Node* Rhead2=reverse(second);
        int cry=0;
        int tans=0;
        Node* head=NULL;
        while(Rhead1!=NULL || Rhead2!=NULL || cry!=0){
            
            int data1=0;
            int data2=0;
            if (Rhead1!=NULL)
                data1=Rhead1->data;
            if (Rhead2!=NULL)
                data2=Rhead2->data;

            int sum=data1+data2+cry;
            
            tans=sum%10;
            insertathead(head,tans);
            cry=sum/10;
            
            if (Rhead1!=NULL)
                Rhead1=Rhead1->next;
                
            if (Rhead2!=NULL)
                Rhead2=Rhead2->next;
        }
        return head;
    }
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}
