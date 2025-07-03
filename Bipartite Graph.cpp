#include <bits/stdc++.h>
using namespace std;

bool isBipartite(vector<vector<int>>& adj, int V)
{
    vector<int> color(V, -1);

    for (int start = 0; start < V; ++start)
    {
        if (color[start] == -1)
        {
            queue<int> q;
            q.push(start);
            color[start] = 0;

            while (!q.empty())
            {
                int u = q.front();
                q.pop();

                for (int v : adj[u])
                {
                    if (color[v] == -1)
                    {
                        color[v] = 1 - color[u];
                        q.push(v);
                    }
                    else if (color[v] == color[u])
                    {
                        return false;
                    }
                }
            }
        }
    }

    return true;
}

int main()
{
    int V, E;
    cout << "Enter number of vertices: ";
    cin >> V;
    cout << "Enter number of edges: ";
    cin >> E;

    vector<vector<int>> adj(V);

    cout << "Enter edges (u v):\n";
    for (int i = 0; i < E; ++i)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    if (isBipartite(adj, V))
        cout << "Graph is Bipartite: Yes\n";
    else
        cout << "Graph is Bipartite: No\n";

    return 0;
}



