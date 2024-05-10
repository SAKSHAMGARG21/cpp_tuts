// -----------------------------------------------------------------------------------------------------------------
// c
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;

    node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};

node* buildtree(node* root){

    int n;
    cout<<"Enter the data :"<<endl;
    cin>>n;
    root=new node(n);

    if (n == -1){
        return NULL;
    }

    cout<<"Enter the data for left node "<<n<<endl;
    root->left=buildtree(root->left);
    cout<<"Enter the data for right node "<<n<<endl;
    root->right=buildtree(root->right);

    return root;
}

int heighoftree(node* root){

    if (root==NULL){
        return 0;
    }

    int left=heighoftree(root->left);
    int right=heighoftree(root->right);

    int ans=max(left,right)+1;
    return ans;
}
void levelordertrav(node* root){

    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){

        node* temp=q.front();
        q.pop();

        if (temp==NULL){
            cout<<endl;
            if (!q.empty()){
                q.push(NULL);
            }
        }
        else{

            cout<<temp->data<<" ";
            if (temp->left){
                q.push(temp->left);
            }
            if (temp->right){
                q.push(temp->right);
            }
        }
    }
}


void inorder(node *root, int &count) {
    if (root == nullptr) {
        return;
    }

    inorder(root->left, count);

    // Leaf node
    if (root->left == nullptr && root->right == nullptr) {
        count++;
    }

    inorder(root->right, count);
}

int noOfLeafNodes(node *root) {
    int cnt = 0;
    inorder(root, cnt);
    return cnt;
}
int main()
{
    node* root=NULL;
    root=buildtree(root);
    int ans=heighoftree(root);
    cout<<ans<<endl;
    levelordertrav(root);
    cout<<noOfLeafNodes(root)<<endl;
    return 0;
}