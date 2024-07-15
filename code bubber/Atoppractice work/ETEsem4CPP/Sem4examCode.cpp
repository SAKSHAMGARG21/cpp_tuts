// // -----------------------------------------------------------------------------------------------------------------
// // prefix Evaluate
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int prefix(string s)
// {
//     stack<int> st;

//     for (int i = s.length() - 1; i >= 0; i--)
//     {
//         if (s[i] >= '0' && s[i] <= '9')
//         {
//             st.push(s[i]-'0');
//         }
//         else
//         {

//             int oprnd1 = st.top();
//             st.pop();
//             int oprnd2 = st.top();
//             st.pop();
//             switch (s[i])
//             {
//             case '+':
//                 st.push(oprnd1 + oprnd2);
//                 break;
//             case '-':
//                 st.push(oprnd1 - oprnd2);
//                 break;
//             case '*':
//                 st.push(oprnd1 * oprnd2);
//                 break;
//             case '/':
//                 st.push(oprnd1 / oprnd2);
//                 break;
//             case '^':
//                 st.push(pow(oprnd1, oprnd2));
//                 break;

//             default:
//                 cout << "Invalid operator";
//                 break;
//             }
//         }
//     }

//     return st.top();
// }
// int main()
// {
//     cout << prefix("-+7*45+20");
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// postfix Evaluate
// #include <iostream>
// #include <stack>
// #include <cmath> // For pow function
// using namespace std;

// int postfix(string s) {
//     stack<int> st;

//     for (int i = 0; i < s.length(); i++) {
//         if (s[i] >= '0' && s[i] <= '9') {
//             st.push(s[i] - '0');
//         } else {
//             int oprnd2 = st.top();
//             st.pop();
//             int oprnd1 = st.top();
//             st.pop();
//             switch (s[i]) {
//                 case '+':
//                     st.push(oprnd1 + oprnd2);
//                     break;
//                 case '-':
//                     st.push(oprnd1 - oprnd2);
//                     break;
//                 case '*':
//                     st.push(oprnd1 * oprnd2);
//                     break;
//                 case '/':
//                     st.push(oprnd1 / oprnd2);
//                     break;
//                 case '^':
//                     st.push(pow(oprnd1, oprnd2));
//                     break;
//                 default:
//                     cout << "Invalid operator";
//                     break;
//             }
//         }
//     }

//     return st.top();
// }

// int main() {
//     cout << "Result: " << postfix("46+2/5*7+") << endl;
//     return 0;
// }

// #include <iostream>
// #include <cstdlib> // Include
// #include <bits/stdc++.h>
// using namespace std;
// bool randomBoolean()
// {
//     return rand() % 2 == 1; // 1 is converted to true, 0 to false
// }

// int main()
// {
//     srand(time(nullptr)); // Initialize the random seed

//     bool result = randomBoolean();
//     cout << (result ? "true" : "false") << endl;

//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {

//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int ans[n];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n ; j++)
//         {
//             if (arr[i] < arr[j])
//             {
//                 ans[i] = arr[j];
//                 break;
//             }
//             else
//             {
//                 ans[i] = -1;

//             }
//         }
//         if (arr[i] < arr[0] && i==n-1)
//         {
//             ans[i] = arr[0];
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << ans[i] << " ";
//     }
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *right;
//     node *left;

//     node(int data)
//     {
//         this->data = data;
//         this->right = NULL;
//         this->left = NULL;
//     }
// };

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

// void levelordertrav(node *root)
// {

//     if (root == NULL)
//         return;

//     queue<node *> q;
//     q.push(root);
//     q.push(NULL);

//     while (!q.empty())
//     {

//         node *temp = q.front();
//         q.pop();

//         if (temp == NULL)
//         {
//             cout << endl;
//             if (!q.empty())
//                 q.push(NULL);
//         }
//         else
//         {
//             cout << temp->data << " ";
//             if (temp->left)
//                 q.push(temp->left);
//             if (temp->right)
//                 q.push(temp->right);
//         }
//     }
// }

// void postorder(node *root, vector<int> &ans)
// {
//     if (root == NULL)
//         return;

//     postorder(root->left, ans);
//     postorder(root->right, ans);
//     ans.push_back(root->data);
// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int idx = 0;
//     node *root = buildtree(root, arr);
//     cout << "Level order traversal :" << endl;
//     levelordertrav(root);

//     vector<int> ans;

//     postorder(root, ans);
//     cout << "Post order traversal :" << endl;
//     for (auto i : ans)
//     {
//         cout << i << " ";
//     }
//     cout << endl;
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     cin >> s;
//     int n = s.size();
//     int i = 0;
//     vector<string> ans;
//     while (i < n)
//     {
//         int no = 0;
//         string temp = "";
//         if (isalpha(s[i]))
//         {
//             temp.push_back(s[i]);
//             ans.push_back(temp);
//         }
//         else
//         {
//             if (s[i] == '[')
//             {
//                 no = s[i - 1] - '0';
//                 int l = i + 1;
//                 while (s[l] != ']')
//                 {
//                     temp.push_back(s[l]);
//                     l++;
//                 }
//                 for (int j = 0; j < no; j++)
//                 {
//                     ans.push_back(temp);
//                 }
//                 i = l;
//             }
//         }
//         i++;
//     }

//     for (auto i : ans)
//     {
//         cout << i;
//     }

//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c
// // -----------------------------------------------------------------------------------------------------------------
// // prefix Evaluate
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int prefix(string s)
// {
//     stack<int> st;

//     for (int i = s.length() - 1; i >= 0; i--)
//     {
//         if (s[i] >= '0' && s[i] <= '9')
//         {
//             st.push(s[i]-'0');
//         }
//         else
//         {

//             int oprnd1 = st.top();
//             st.pop();
//             int oprnd2 = st.top();
//             st.pop();
//             switch (s[i])
//             {
//             case '+':
//                 st.push(oprnd1 + oprnd2);
//                 break;
//             case '-':
//                 st.push(oprnd1 - oprnd2);
//                 break;
//             case '*':
//                 st.push(oprnd1 * oprnd2);
//                 break;
//             case '/':
//                 st.push(oprnd1 / oprnd2);
//                 break;
//             case '^':
//                 st.push(pow(oprnd1, oprnd2));
//                 break;

//             default:
//                 cout << "Invalid operator";
//                 break;
//             }
//         }
//     }

//     return st.top();
// }
// int main()
// {
//     cout << prefix("-+7*45+20");
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// postfix Evaluate
// #include <iostream>
// #include <stack>
// #include <cmath> // For pow function
// using namespace std;

// int postfix(string s) {
//     stack<int> st;

//     for (int i = 0; i < s.length(); i++) {
//         if (s[i] >= '0' && s[i] <= '9') {
//             st.push(s[i] - '0');
//         } else {
//             int oprnd2 = st.top();
//             st.pop();
//             int oprnd1 = st.top();
//             st.pop();
//             switch (s[i]) {
//                 case '+':
//                     st.push(oprnd1 + oprnd2);
//                     break;
//                 case '-':
//                     st.push(oprnd1 - oprnd2);
//                     break;
//                 case '*':
//                     st.push(oprnd1 * oprnd2);
//                     break;
//                 case '/':
//                     st.push(oprnd1 / oprnd2);
//                     break;
//                 case '^':
//                     st.push(pow(oprnd1, oprnd2));
//                     break;
//                 default:
//                     cout << "Invalid operator";
//                     break;
//             }
//         }
//     }

//     return st.top();
// }

// int main() {
//     cout << "Result: " << postfix("46+2/5*7+") << endl;
//     return 0;
// }

// #include <iostream>
// #include <cstdlib> // Include
// #include <bits/stdc++.h>
// using namespace std;
// bool randomBoolean()
// {
//     return rand() % 2 == 1; // 1 is converted to true, 0 to false
// }

// int main()
// {
//     srand(time(nullptr)); // Initialize the random seed

//     bool result = randomBoolean();
//     cout << (result ? "true" : "false") << endl;

//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {

//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int ans[n];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n ; j++)
//         {
//             if (arr[i] < arr[j])
//             {
//                 ans[i] = arr[j];
//                 break;
//             }
//             else
//             {
//                 ans[i] = -1;

//             }
//         }
//         if (arr[i] < arr[0] && i==n-1)
//         {
//             ans[i] = arr[0];
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << ans[i] << " ";
//     }
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *right;
//     node *left;

//     node(int data)
//     {
//         this->data = data;
//         this->right = NULL;
//         this->left = NULL;
//     }
// };

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

// void levelordertrav(node *root)
// {

//     if (root == NULL)
//         return;

//     queue<node *> q;
//     q.push(root);
//     q.push(NULL);

//     while (!q.empty())
//     {

//         node *temp = q.front();
//         q.pop();

//         if (temp == NULL)
//         {
//             cout << endl;
//             if (!q.empty())
//                 q.push(NULL);
//         }
//         else
//         {
//             cout << temp->data << " ";
//             if (temp->left)
//                 q.push(temp->left);
//             if (temp->right)
//                 q.push(temp->right);
//         }
//     }
// }

// void postorder(node *root, vector<int> &ans)
// {
//     if (root == NULL)
//         return;

//     postorder(root->left, ans);
//     postorder(root->right, ans);
//     ans.push_back(root->data);
// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int idx = 0;
//     node *root = buildtree(root, arr);
//     cout << "Level order traversal :" << endl;
//     levelordertrav(root);

//     vector<int> ans;

//     postorder(root, ans);
//     cout << "Post order traversal :" << endl;
//     for (auto i : ans)
//     {
//         cout << i << " ";
//     }
//     cout << endl;
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.size();
    int i = 0;
    vector<string> ans;
    while (i < n)
    {
        int no = 0;
        string temp = "";
        if (isalpha(s[i]))
        {
            temp.push_back(s[i]);
            ans.push_back(temp);
        }
        else
        {
            if (s[i] == '[')
            {
                no = s[i - 1] - '0';
                int l = i + 1;
                while (s[l] != ']')
                {
                    temp.push_back(s[l]);
                    l++;
                }
                for (int j = 0; j < no; j++)
                {
                    ans.push_back(temp);
                }
                i = l;
            }
        }
        i++;
    }

    for (auto i : ans)
    {
        cout << i;
    }

    return 0;
}

// -----------------------------------------------------------------------------------------------------------------
// c
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *left;
//     node *right;

//     node()
//     {
//         this->data = data;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };

// node *buildtree(node *root)
// {
//     if (root == NULL)
//     {
//         return root;
//     }
// }
// int main()
// {
//     int x = 2;

//     while (x == 2)
//     {
//         cout << "true" << endl;
//         x = 3;
//     }
//     cout << "false";

//     return 0;
// }