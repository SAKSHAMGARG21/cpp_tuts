// -----------------------------------------------------------------------------------------------------------------
// c
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *insertinput(Node *&root, int data)
{
    if (root == NULL)
    {
        root = new Node(data);
        return root;
    }

    if (data > root->data)
    {
        root->right = insertinput(root->right, data);
    }
    else
    {
        root->left = insertinput(root->left, data);
    }

    return root;
}

void takeInput(Node *&root)
{
    int n,data;
    // cin>>n;
    cin >> data;
    // int i=0;
    while (data!=-1)
    {
        insertinput(root, data);
        cin >> data;
        // i++;
    }
}

void levelordertrev(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
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

void inordertrav(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    inordertrav(root->left);
    cout << root->data << " ";
    inordertrav(root->right);
}
void preordertrav(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    preordertrav(root->left);
    preordertrav(root->right);
}
void postordertrav(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    postordertrav(root->left);
    postordertrav(root->right);
    cout << root->data << " ";
}

Node *minValue(Node *root)
{
    Node *temp = root;

    while (temp->left != NULL)
    {
        temp = temp->left;
    }

    return temp;
}

Node *maxValue(Node *root)
{
    Node *temp = root;

    while (temp->right != NULL)
    {
        temp = temp->right;
    }

    return temp;
}

Node *DeleteNodeBST(Node *&root, int val)
{

    if (root == NULL)
    {
        return root;
    }

    if (root->data == val)
    {
        // 0 child
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }

        // 1 child
        if (root->left != NULL && root->right == NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }

        if (root->left == NULL && root->right != NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }

        // 2 child

        if (root->left != NULL && root->right != NULL)
        {
            int mini = minValue(root->right)->data;
            root->data = mini;
            root->right = DeleteNodeBST(root->right, mini);
            return root;
        }
    }
    else if (root->data > val)
    {
        root->left = DeleteNodeBST(root->left, val);
        return root;
    }

    else
    {
        root->right = DeleteNodeBST(root->right, val);
        return root;
    }
}

int main()
{
    Node *root = NULL;

    cout << "Enter the data in BST " << endl;
    takeInput(root);

    cout << "Printing the data in BST " << endl;
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

    cout << "Min value is " << minValue(root)->data << endl;
    cout << "Max value is " << maxValue(root)->data << endl;

    root = DeleteNodeBST(root, 30);

    cout << "Printing the data in BST " << endl;
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