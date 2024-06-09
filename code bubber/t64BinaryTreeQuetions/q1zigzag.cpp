// #include <bits/stdc++.h>
// using namespace std;
// #define MAX_HEIGHT 100000

// // Tree Node
// struct Node {
//     int data;
//     Node* left;
//     Node* right;
// };

// // Utility function to create a new Tree Node
// Node* newNode(int val) {
//     Node* temp = new Node;
//     temp->data = val;
//     temp->left = NULL;
//     temp->right = NULL;

//     return temp;
// }

// // Function to Build Tree
// Node* buildTree(string str) {
//     // Corner Case
//     if (str.length() == 0 || str[0] == 'N') return NULL;

//     // Creating vector of strings from input
//     // string after spliting by space
//     vector<string> ip;

//     istringstream iss(str);
//     for (string str; iss >> str;) ip.push_back(str);

//     // Create the root of the tree
//     Node* root = newNode(stoi(ip[0]));

//     // Push the root to the queue
//     queue<Node*> queue;
//     queue.push(root);

//     // Starting from the second element
//     int i = 1;
//     while (!queue.empty() && i < ip.size()) {

//         // Get and remove the front of the queue
//         Node* currNode = queue.front();
//         queue.pop();

//         // Get the current node's value from the string
//         string currVal = ip[i];

//         // If the left child is not null
//         if (currVal != "N") {

//             // Create the left child for the current node
//             currNode->left = newNode(stoi(currVal));

//             // Push it to the queue
//             queue.push(currNode->left);
//         }

//         // For the right child
//         i++;
//         if (i >= ip.size()) break;
//         currVal = ip[i];

//         // If the right child is not null
//         if (currVal != "N") {

//             // Create the right child for the current node
//             currNode->right = newNode(stoi(currVal));

//             // Push it to the queue
//             queue.push(currNode->right);
//         }
//         i++;
//     }

//     return root;
// }

// class Solution{
//     public:
//     //Function to store the zig zag order traversal of tree in a list.
//       vector<int> zigZagTraversal(Node *root)
//     {
//         vector<int> result;
//         if (root == NULL)
//             return result;

//         queue<Node *> q;
//         q.push(root);

//         bool leftToRight = true;

//         while (!q.empty())
//         {

//             int size = q.size();
//             vector<int> ans(size);

//             // Level Process
//             for (int i = 0; i < size; i++)
//             {

//                 Node *frontNode = q.front();
//                 q.pop();

//                 // normal insert or reverse insert
//                 int index = leftToRight ? i : size - i - 1;
//                 ans[index] = frontNode->data;

//                 if (frontNode->left)
//                     q.push(frontNode->left);

//                 if (frontNode->right)
//                     q.push(frontNode->right);
//             }

//             // direction change karni h
//             leftToRight = !leftToRight;

//             for (auto i : ans)
//             {
//                 result.push_back(i);
//             }
//         }
//         return result;
//     }
// };
// int main() {

//     int t;
//     scanf("%d ", &t);
//     while (t--) {
//         string s, ch;
//         getline(cin, s);

//         Node* root = buildTree(s);

//         vector<int> ans;
//         Solution ob;
//         ans = ob.zigZagTraversal(root) ;

//         for (int i = 0; i < ans.size(); i++)
//             cout << ans[i] << " ";

//         cout << endl;
//     }
//     return 0;
// }

#include <iostream>
#include <vector>
#include <queue>
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
        this->left = nullptr;
        this->right = nullptr;
    }
};

// node* buildtree(vector<int>& arr, int& idx) {
//     if (idx >= arr.size()) {
//         return nullptr;
//     }

//     node* root = new node(arr[idx]);
//     idx++;
//     root->left = buildtree(arr, idx);
//     root->right = buildtree(arr, idx);
//     return root;
// }

node *buildordertrav(node *root, vector<int> arr)
{
    if (root == NULL)
    {
        return nullptr;
    }
    queue<node *> q;
    int i = 0;
    int size = arr.size();
    root = new node(arr[i]);
    q.push(root);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if(temp!=NULL)
        {
            i++;
            if (i < size)
            {
                temp->left = new node(arr[i]);
                q.push(temp->left);
            }
            i++;
            if (i < size)
            {
                temp->right = new node(arr[i]);
                q.push(temp->right);
            }
        }
    }
    return root;
}

void levelordertrav(node *root)
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

void zigzag(node *root)
{
    if (root == nullptr)
        return;

    queue<node *> q;
    q.push(root);
    bool ltr = true;

    while (!q.empty())
    {
        int size = q.size();
        vector<int> ans(size);

        for (int i = 0; i < size; i++)
        {
            node *frontnode = q.front();
            q.pop();

            int idx = ltr ? i : size - i - 1;
            ans[idx] = frontnode->data;

            if (frontnode->left)
                q.push(frontnode->left);
            if (frontnode->right)
                q.push(frontnode->right);
        }

        ltr = !ltr;

        for (auto i : ans)
            cout << i << " ";
        cout << endl;
    }
}

int sumkthLevel(node *root, int k)
{
    if (root == nullptr)
    {
        return 0;
    }
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    int sum = 0, lvl = 0;
    while (!q.empty())
    {

        node *temp = q.front();
        q.pop();
        if (temp != nullptr)
        {
            if (lvl == k)
            {
                sum += temp->data;
            }

            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
        else if (!q.empty())
        {
            q.push(NULL);
            lvl++;
        }
    }
    return sum;
}

int main()
{
    int n;
    // cout << "Enter number of nodes: ";
    cin >> n;

    vector<int> arr(n);
    // cout << "Enter node values (-1 for null nodes): "<<endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int idx = 0;
    node *root = buildordertrav(root, arr);
    levelordertrav(root);

    cout << "Zigzag traversal: " << endl;
    zigzag(root);

    cout << "sum kth level" << endl;
    cout << sumkthLevel(root, 2);

    return 0;
}
