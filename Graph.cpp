#include<bits/stdc++.h>
using namespace std;

class Graph
{
private:
    bool directed;
    int V;
    int adj [100] [100];

public:
    Graph(int v, bool dir)
    {
        V = v;
        directed = dir;

        for ( int i=0; i<v; i++ )
        {
            for ( int j=0; j<V; j++)
            {
                adj [i][j] = 0;
            }
        }
    }

    void addEdge ( int u, int v )
    {
        adj [u][v] = 1;
        if ( !directed )
        {
            adj[v][u] = 1;
        }
    }

    void printGraph()
    {
        for ( int i=0; i<V; i++ )
        {
            for ( int j=0; j<V; j++)
            {
                cout << adj [i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Graph g(5, false);
    g.addEdge (0,1);
    g.addEdge (0,2);
    g.addEdge (0,3);
    g.addEdge (1,3);
    g.addEdge (2,3);
    g.addEdge (2,4);
    g.addEdge (3,4);

    g.printGraph();

    return 0;
}

