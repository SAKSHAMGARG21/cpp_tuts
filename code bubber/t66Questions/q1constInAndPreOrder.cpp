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

int findPosition(int in[], int startIndex, int element, int n)
{

    for (int i = startIndex; i < n; i++)
    {
        if (in[i] == element)
        {
            return i;
        }
    }

    return -1;
}

Node *solve(int in[], int pre[], int &index, int startIndex, int endIndex, int n)
{

    if (index >= n || startIndex > endIndex)
    {
        return NULL;
    }

    int element = pre[index++];
    Node *root = new Node(element);

    int pos = findPosition(in, startIndex, element, n);

    root->left = solve(in, pre, index, startIndex, pos - 1, n);
    root->right = solve(in, pre, index, pos + 1, endIndex, n);

    return root;
}

Node *buildTree(int in[], int pre[], int n)
{
    int preIndex = 0;
    Node *ans = solve(in, pre, preIndex, 0, n - 1, n);

    return ans;
}

void printTree(Node *root)
{

    if (root == NULL)
    {
        return;
    }

    printTree(root->left);
    cout << root->data << " ";
    printTree(root->right);
}

int main()
{

    int pre[] = {1, 2, 4, 3, 5};
    int in[] = {4, 2, 1, 5, 3};

    Node *ans = buildTree(in, pre, 4);

    printTree(ans);
    return 0;
}