// -----------------------------------------------------------------------------------------------------------------
// c
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

node *bulidTree(node *root)
{
    int d;
    cout << "Enter the data:";
    cin >> d;
    root = new node(d);

    if (d == -1)
    {
        return NULL;
    }

    cout << "Enter the data for left node " << d << endl;
    root->left = bulidTree(root->left);
    cout<<"Enter the data for right node "<< d<<endl;
    root->right=bulidTree(root->right);

    return root;
}


int main()
{
    node* root=NULL;

    root = bulidTree(root);

    return 0;
}