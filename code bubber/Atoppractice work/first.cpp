// -----------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <vector>
#include <list>
#include <unordered_map>
#include <queue>
using namespace std;

template <typename T>
class graphmp
{
public:
    unordered_map<T, list<T>> adj;

    void edge(T u, T v, int dic)
    {
        adj[u].push_back(v);
        if (dic == 0)
        {
            adj[v].push_back(u);
        }
    }

    void print()
    {
        for (auto i : adj)
        {
            cout << i.first << "->";
            for (auto j : i.second)
            {
                cout << j << ",";
            }
            cout << endl;
        }
    }
};

void bfsfun(vector<vector<int>> &edges, vector<int> &visited, vector<int> &ans)
{
    queue<int> q;
    q.push(0);
    visited[0] = 1; // Using boolean value to represent visited status

    while (!q.empty())
    {
        int frontnode = q.front();
        q.pop();

        // store the ans
        ans.push_back(frontnode);

        // traverse all the neighbours of Nodes
        for (auto i : edges[frontnode])
        {
            if (!visited[i])
            {
                visited[i] = 1; // Mark the neighbor as visited
                q.push(i);
            }
        }
    }
}

vector<int> bfsTraversal(int n, vector<vector<int>> &edges)
{
    vector<int> ans;
    vector<int> visited(n, 0);

    bfsfun(edges, visited, ans);

    return ans;
}

int main()
{
    int n, m;
    cin >> n >> m;

    graphmp<int> G;
    int u, v;
    for (int i = 0; i < m; i++)
    {
        cin >> u >> v;
        G.edge(u, v, 0);
    }

    G.print();

    vector<vector<int>> edges(n); // Initialize an empty vector of vectors
    for (auto i : G.adj)
    {
        for (auto j : i.second)
        {
            edges[i.first].push_back(j);
        }
    }

    vector<int> traversal = bfsTraversal(n, edges);
    cout << "BFS Traversal: ";
    for (int node : traversal)
    {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}
