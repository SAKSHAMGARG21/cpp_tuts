// -----------------------------------------------------------------------------------------------------------------
// c
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
template <typename T>
class creatingGrap
{
public:
    unordered_map<T, list<T>> adj;

    void addEdge(T u, T v, bool dic)
    {
        // dic = 0 ->undirected;
        // dic = 1 -> directed graph

        adj[u].push_back(v);
        if (dic == 0)
        {
            adj[v].push_back(u);
        }
    }

    void printAdjList()
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

int main()
{
    int n;
    // cout << "Enter the number of nodes" << endl;
    cin >> n;

    int m;
    // cout << "Enter the number of edges" << endl;
    cin >> m;

    creatingGrap<int> G;

    for (int i = 0; i < m; i++)
    {
        int u,v;
        cin>>u>>v;
        // creating an undirected graph
        G.addEdge(u,v,0);
    }

    // printing the graph
    G.printAdjList();
    return 0;
}