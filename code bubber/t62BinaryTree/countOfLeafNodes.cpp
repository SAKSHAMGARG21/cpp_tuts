#include <iostream>
using namespace std;

// Definition for a binary tree node
template <typename T>
class BinaryTreeNode {
public:
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

void inorder(BinaryTreeNode<int> *root, int &count) {
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

int noOfLeafNodes(BinaryTreeNode<int> *root) {
    int cnt = 0;
    inorder(root, cnt);
    return cnt;
}

int main() {
    // Example usage
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(10);
    root->left = new BinaryTreeNode<int>(5);
    root->right = new BinaryTreeNode<int>(15);
    root->left->left = new BinaryTreeNode<int>(3);
    root->left->right = new BinaryTreeNode<int>(7);
    root->right->right = new BinaryTreeNode<int>(20);

    int leafCount = noOfLeafNodes(root);
    cout << "Number of leaf nodes: " << leafCount << endl;

    // Clean up memory (not shown in this snippet)
    return 0; 
}
