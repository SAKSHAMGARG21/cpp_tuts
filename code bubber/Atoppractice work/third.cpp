#include <iostream>
#include <queue>
using namespace std;

// A Binary Tree Node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Generate array of ancestors
void generateArray(Node* root, int ancestors[]) {
    // There will be no ancestor of root node
    ancestors[root->data] = -1;

    // Level order traversal to generate 1st ancestor
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();
        if (temp->left) {
            ancestors[temp->left->data] = temp->data;
            q.push(temp->left);
        }
        if (temp->right) {
            ancestors[temp->right->data] = temp->data;
            q.push(temp->right);
        }
    }
}

// Calculate Kth ancestor
int kthAncestor(Node* root, int n, int k, int node) {
    int ancestors[n + 1] = {0}; // Create array to store 1st ancestors
    generateArray(root, ancestors);

    int count = 0; // Track the number of ancestors visited
    while (node != -1) {
        node = ancestors[node];
        count++;
        if (count == k) break;
    }

    // Return Kth ancestor
    return node;
}

// Utility function to create a new tree node
Node* newNode(int data) {
    Node* temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

// Driver program to test above functions
int main() {
    // Let's create a binary tree (shown in the example diagram)
    Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    int k = 2; // Kth ancestor
    int node = 5; // Node for which we want to find the Kth ancestor

    // Print Kth ancestor of the given node
    cout << "Kth ancestor of node " << node << ": " << kthAncestor(root, 5, k, node) << endl;

    return 0;
}


