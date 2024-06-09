// -----------------------------------------------------------------------------------------------------------------
// c
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *right;
    node *left;

    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

// node *buildtree(node *root)
// {
//     int n;
//     cin >> n;
//     if (n == -1)
//     {
//         return NULL;
//     }
//     root = new node(n);
//     root->left = buildtree(root->left);
//     root->right = buildtree(root->right);
//     return root;
// }

node *buildtree(node *root)
{
    queue<node *> q;
    int n;
    cin >> n;
    root = new node(n);
    q.push(root);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        int ldata;
        cin >> ldata;
        if (ldata != -1)
        {
            temp->left = new node(ldata);
            q.push(temp->left);
        }
        int rdata;
        cin >> rdata;
        if (rdata != -1)
        {
            temp->right = new node(rdata);
            q.push(temp->right);
        }
    }
    return root;
}

// node *buildleveltree(node *root, vector<int> &arr)
// {
//     if (root == NULL)
//     {
//         return root;
//     }
//     int i = 0;
//     queue<node *> q;
//     int size = arr.size();
//     root = new node(arr[i]);
//     q.push(root);
//     while (!q.empty())
//     {
//         node *temp = q.front();
//         q.pop();
//         if (temp != NULL)
//         {
//             i++;
//             if (i < size)
//             {
//                 temp->left = new node(arr[i]);
//                 q.push(temp->left);
//             }
//             i++;
//             if (i < size)
//             {
//                 temp->right = new node(arr[i]);
//                 q.push(temp->right);
//             }
//         }
//     }
//     return root;
// }

// node *buildtree(node *root, vector<int> &arr)
// {

//     int size = arr.size();

//     if (size == 0)
//         return NULL;

//     int idx = 0;
//     root = new node(arr[idx]);

//     queue<node *> q;
//     q.push(root);

//     while (!q.empty())
//     {

//         node *temp = q.front();
//         q.pop();

//         idx++;
//         if (idx < size && arr[idx] != -1)
//         {

//             temp->left = new node(arr[idx]);
//             q.push(temp->left);
//         }
//         idx++;
//         if (idx < size && arr[idx] != -1)
//         {
//             temp->right = new node(arr[idx]);
//             q.push(temp->right);
//         }
//     }
//     return root;
// }

void leveltrav(node *root)
{
    if (root == NULL)
    {
        return;
    }

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

void zigzagtarv(node *root)
{

    if (root == NULL)
    {
        return;
    }

    queue<node *> q;
    q.push(root);
    bool ltr = true;

    while (!q.empty())
    {

        int size = q.size();
        vector<int> ans(size);

        for (int i = 0; i < size; i++)
        {
            node *temp = q.front();
            q.pop();

            int idx = ltr ? i : size - i - 1;
            ans[idx] = temp->data;

            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
        }

        ltr = !ltr;

        for (auto i : ans)
            cout << i << " ";
        cout << endl;
    }
}

void countleafnodes(node *root, int &cnt)
{
    if (root == NULL)
    {
        return;
    }

    countleafnodes(root->left, cnt);
    if (root->left == NULL && root->right == NULL)
    {
        cnt++;
    }
    countleafnodes(root->right, cnt);
    // return cnt;
}

void preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void postorder(node *root)
{

    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int height(node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int left = height(root->left);
    int right = height(root->right);

    int ans = max(left, right) + 1;
    return ans;
}

int diameter(node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int op1 = diameter(root->left);
    int op2 = diameter(root->right);
    int op3 = height(root->left) + height(root->right) + 1;

    int ans = max(op1, max(op2, op3));
    return ans;
}

bool isBalanced(node *root)
{

    if (root == NULL)
    {
        return true;
    }

    bool left = isBalanced(root->left);
    bool right = isBalanced(root->right);

    bool ans = abs(height(root->left) - height(root->right)) <= 1;
    if (left && right && ans)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool identical(node *r1, node *r2)
{
    if (r1 == NULL && r2 == NULL)
    {
        return true;
    }

    if (r1 != NULL && r2 == NULL || r1 == NULL && r2 != NULL)
    {
        return false;
    }

    bool left = identical(r1->left, r2->left);
    bool right = identical(r1->right, r2->right);

    bool val = r1->data == r2->data;

    if (left && right && val)
    {
        return true;
    }
    else
    {
        return false;
    }
}

pair<bool, int> sumtree(node *root)
{
    if (root == NULL)
    {
        pair<bool, int> p = make_pair(true, 0);
        return p;
    }

    if (root->left == NULL && root->right == NULL)
    {
        pair<bool, int> p = make_pair(true, root->data);
        return p;
    }

    pair<bool, int> left = sumtree(root->left);
    pair<bool, int> right = sumtree(root->right);

    bool lft = left.first;
    bool rht = right.first;

    bool con = root->data == left.second + right.second;

    pair<bool, int> ans;
    if (lft && rht && con)
    {
        ans.first = true;
        ans.second = root->data + left.second + right.second;
    }
    else
    {
        ans.first = false;
    }

    return ans;
}

int sumofkthlevel(node *root, int lvl)
{
    if (root == NULL)
    {
        return 0;
    }

    queue<node *> q;
    q.push(root);
    q.push(NULL);
    int sum = 0, k = 0;
    while (!q.empty())
    {

        node *temp = q.front();
        q.pop();

        if (temp != NULL)
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
            k++;
        }
    }

    return sum;
}

void leftview(node *root, vector<int> &ans)
{

    if (root == NULL || root->left == NULL && root->right == NULL)
    {
        return;
    }

    ans.push_back(root->data);
    if (root->left)
        leftview(root->left, ans);
    else
        leftview(root->right, ans);
}
void rightview(node *root, vector<int> &ans)
{
    if (root == NULL || root->left == NULL && root->right == NULL)
    {
        return;
    }

    if (root->right)
        rightview(root->right, ans);
    else
        rightview(root->left, ans);

    ans.push_back(root->data);
}
void leafview(node *root, vector<int> &ans)
{
    if (root == NULL)
    {
        return;
    }

    if (root->left == NULL && root->right == NULL)
    {
        ans.push_back(root->data);
        return;
    }

    leafview(root->left, ans);
    leafview(root->right, ans);
}
void boundrytraversal(node *root)
{

    vector<int> ans;

    ans.push_back(root->data);

    leftview(root->left, ans);
    leafview(root, ans);
    rightview(root->right, ans);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}

void Rightview(node *root, vector<int> &ans, int lvl)
{

    if (root == NULL)
    {
        return;
    }

    if (lvl == ans.size())
        ans.push_back(root->data);

    Rightview(root->right, ans, lvl + 1);
    Rightview(root->left, ans, lvl + 1);
}
void Leftview(node *root, vector<int> &ans, int lvl)
{

    if (root == NULL)
    {
        return;
    }

    if (lvl == ans.size())
        ans.push_back(root->data);

    Leftview(root->left, ans, lvl + 1);
    Leftview(root->right, ans, lvl + 1);
}

void topview(node *root)
{

    if (root == NULL)
    {
        return;
    }

    map<int, int> topnode;
    queue<pair<node *, int>> q;

    q.push(make_pair(root, 0));

    while (!q.empty())
    {

        pair<node *, int> temp = q.front();
        q.pop();

        node *frontnode = temp.first;
        int hd = temp.second;

        if (topnode.find(hd) == topnode.end())
        {
            topnode[hd] = frontnode->data;
        }

        if (frontnode->left)
        {
            q.push(make_pair(frontnode->left, hd - 1));
        }
        if (frontnode->right)
        {
            q.push(make_pair(frontnode->right, hd + 1));
        }
    }

    cout << "Top View of the tree :";
    for (auto i : topnode)
    {
        cout << i.second << " ";
    }
    cout << endl;
}

void bottomview(node *root)
{

    if (root == NULL)
    {
        return;
    }

    map<int, int> topnode;
    queue<pair<node *, int>> q;

    q.push(make_pair(root, 0));

    while (!q.empty())
    {

        pair<node *, int> temp = q.front();
        q.pop();

        node *frontnode = temp.first;
        int hd = temp.second;

        topnode[hd] = frontnode->data;

        if (frontnode->left)
        {
            q.push(make_pair(frontnode->left, hd - 1));
        }
        if (frontnode->right)
        {
            q.push(make_pair(frontnode->right, hd + 1));
        }
    }

    cout << "Bottom View of the tree :";
    for (auto i : topnode)
    {
        cout << i.second << " ";
    }
    cout << endl;
}

int sumoftree(node *root, int sum)
{
    if (root == NULL)
    {
        return sum; // Return the accumulated sum
    }
    sum += root->data;
    sum = sumoftree(root->left, sum);  // Update the sum for the left subtree
    sum = sumoftree(root->right, sum); // Update the sum for the right subtree
    return sum;
}

int concatesum(node *root, int cont)
{

    if (root == NULL)
    {
        return 0;
    }

    cont = (cont * 10) + root->data;
    if (!root->left && !root->right)
    {
        return cont;
    }
    int l = concatesum(root->left, cont);
    int r = concatesum(root->right, cont);
    return l + r;
}

node *lca(node *root, int n1, int n2)
{
    // base case
    if (root == NULL)
    {
        return NULL;
    }

    if (root->data == n1 || root->data == n2)
    {
        return root;
    }

    node *leftAns = lca(root->left, n1, n2);
    node *rightAns = lca(root->right, n1, n2);

    if (leftAns != NULL && rightAns != NULL)
    {
        return root;
    }
    else if (leftAns != NULL && rightAns == NULL)
        return leftAns;
    else if (leftAns == NULL && rightAns != NULL)
        return rightAns;
    else
        return NULL;
}

int main()
{
    // simple
    // int n;
    // cin >> n;
    // vector<int> arr(n);
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }

    // node *root = buildleveltree(root, arr);
    // cout << "Level order traversal" << endl;
    // leveltrav(root);
    // cout << endl;

    // Input by String method
    // string s;
    // getline(cin, s);
    // stringstream str(s);
    // int a;
    // vector<int> arr;
    // while (str >> a)
    // {
    //     arr.push_back(a);
    // }
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout << arr[i]<<" ";
    // }

    // -> codes start here
    // cout<<"zigzag traveral :"<<endl;
    // zigzagtarv(root);

    // -> count the no of leaf nodes in a tree
    // int cnt = 0;
    // countleafnodes(root, cnt);
    // cout << "Leaf nodes are :" << cnt << endl;

    // -> pre ,in ,post order traversal
    // cout<<"Preorder traversal :";
    // preorder(root);
    // cout<<endl;
    // cout<<"Inorder traversal :";
    // inorder(root);
    // cout<<endl;
    // cout<<"Postorder traversal :";
    // postorder(root);

    // -> height of a tree
    // int hei=height(root);
    // cout<<"Height of the tree :"<<hei<<endl;
    // int dia=diameter(root);
    // cout<<"Diameter of the tree :"<<dia<<endl;

    // -> Check for Balanced tree
    // bool ans = isBalanced(root);
    // cout << (ans ? "Valid" : "Invalid") << endl;

    // -> Two trees are identical
    /* int n;
    cin >> n;
    vector<int> arr(n);
    vector<int> arr2(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }

    node *root1 = buildleveltree(root1, arr);
    node *root2 = buildleveltree(root2, arr2);
    cout << "Level order traversal first tree" << endl;
    leveltrav(root1);
    cout << "Level order traversal second tree" << endl;
    leveltrav(root2);
    cout << endl;

    bool ans=identical(root1,root2);
    cout<<(ans ? "True" : "False"); */

    // Tree are identical
    // pair<bool,int> p=sumtree(root);
    // cout<<p.first<<endl;

    // Sum of the kth level of the tree
    // int sum=sumofkthlevel(root,2);
    // cout<<sum<<endl;

    // boundry traversal of the tree
    // boundrytraversal(root);

    // -> right view,left view
    // vector<int> ans;
    // Rightview(root, ans, 0);
    // Leftview(root, ans, 0);
    // for (auto i : ans)
    //     cout << i << " ";

    // -> top view,bottom view
    // topview(root);
    // bottomview(root);

    // buildtree with -1

    node *root = buildtree(root);
    leveltrav(root);
    // bool ans = isBalanced(root);
    // cout << (ans ? "Valid" : "Invalid") << endl;

    // int sum=0;
    // int ans=sumoftree(root,sum);
    // cout<<ans<<endl;

    // sum of the tree concate

    // int cont=0;
    // int ans=concatesum(root,cont);
    // cout<<ans<<endl;

    // lca

    node *ans = lca(root, 4, 5);
    cout << ans->data << endl;
    return 0;
}