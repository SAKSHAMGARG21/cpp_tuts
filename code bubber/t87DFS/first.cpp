// #include <iostream>
// #include <vector>
// #include <list>
// #include <unordered_map>
// #include <queue>
// using namespace std;

// template <typename T>
// class graphmp
// {
// public:
//     unordered_map<T, list<T>> adj;

//     void print()
//     {
//         for (auto i : adj)
//         {
//             cout << i.first << "->";
//             for (auto j : i.second)
//             {
//                 cout << j << ",";
//             }
//             cout << endl;
//         }
//     }
// };
// void bfs(int n, unordered_map<int, list<int>> &adj, unordered_map<int, bool> &vis, vector<int> &com)
// {

//     com.push_back(n);
//     vis[n] = true;

//     for (auto i : adj[n])
//     {
//         if (!vis[i])
//         {
//             bfs(i, adj, vis, com);
//         }
//     }
// }

// vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
// {
//     // Write your code here
//     unordered_map<int, list<int>> adj;
//     for (int i = 0; i < edges.size(); i++)
//     {
//         int u = edges[i][0];
//         int v = edges[i][1];

//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }

//     vector<vector<int>> ans;
//     unordered_map<int, bool> vis;

//     for (int i = 0; i < V; i++)
//     {
//         if (!vis[i])
//         {
//             vector<int> com;
//             bfs(i, adj, vis, com);
//             ans.push_back(com);
//         }
//     }

//     return ans;
// }

// int main()
// {
//     int n, m;
//     cin >> n >> m;

//     graphmp<int> G;
//     int u, v;
//     vector<vector<int>> edges(m); // Initialize an empty vector of vectors
//     for (int i = 0; i < m; i++)
//     {
//         cin >> u >> v;
//         // edges[i][0] = u;
//         // edges[i][1] = v;

//         edges[i] = {u, v};
//     }

//     G.print();

//     vector<vector<int>> traversal = depthFirstSearch(n, m, edges);
//     cout << "DFS Traversal: ";
//     for (auto node : traversal)
//     {
//         for (auto j : node)
//         {
//             /* code */
//             cout << j << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }


#include <iostream>
#include <vector>
#include <list>
#include <unordered_map>
using namespace std;

template <typename T>
class graphmp
{
public:
    unordered_map<T, list<T>> adj;
};

void bfs(int n, unordered_map<int, list<int>> &adj, unordered_map<int, bool> &vis, vector<int> &com)
{
    com.push_back(n);
    vis[n] = true;

    for (auto i : adj[n])
    {
        if (!vis[i])
        {
            bfs(i, adj, vis, com);
        }
    }
}

vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    unordered_map<int, list<int>> adj;
    for (int i = 0; i < E; i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<vector<int>> ans;
    unordered_map<int, bool> vis;

    for (int i = 0; i < V; i++)
    {
        if (!vis[i])
        {
            vector<int> com;
            bfs(i, adj, vis, com);
            ans.push_back(com);
        }
    }

    return ans;
}

int main()
{
    int n, m;
    cin >> n >> m;

    graphmp<int> G;
    int u, v;
    vector<vector<int>> edges(m); // Initialize with 'm' elements
    for (int i = 0; i < m; i++)
    {
        cin >> u >> v;
        edges[i] = {u, v};
    }

    vector<vector<int>> traversal = depthFirstSearch(n, m, edges);
    cout << "DFS Traversal: "<<endl;
    for (auto node : traversal)
    {
        for (auto j : node)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
