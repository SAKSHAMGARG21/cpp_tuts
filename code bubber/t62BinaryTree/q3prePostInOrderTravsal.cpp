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
    cout << "Enter the data:" << endl;
    cin >> d;
    root = new node(d);

    if (d == -1)
    {
        return NULL;
    }

    cout << "Enter the data for left node " << d << endl;
    root->left = bulidTree(root->left);
    cout << "Enter the data for right node " << d << endl;
    root->right = bulidTree(root->right);

    return root;
}

void levelordertrev(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }

        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

void inordertrav(node *root)
{
    if (root == NULL)
    {
        return;
    }

    inordertrav(root->left);
    cout << root->data << " ";
    inordertrav(root->right);
}

void preordertrav(node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    preordertrav(root->left);
    preordertrav(root->right);
}

void postordertrav(node *root)
{
    if (root == NULL)
    {
        return;
    }

    postordertrav(root->left);
    postordertrav(root->right);
    cout << root->data << " ";
}

int main()
{
    node *root = NULL;

    root = bulidTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    levelordertrev(root);

    cout << "Printing the inordertravsal : ";
    inordertrav(root);
    cout << endl;
    cout << "Printing the preordertravsal : ";
    preordertrav(root);
    cout << endl;
    cout << "Printing the postordertravsal : ";
    postordertrav(root);
    cout << endl;

    return 0;
}
