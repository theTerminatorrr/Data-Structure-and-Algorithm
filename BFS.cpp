#include<bits/stdc++.h>
using namespace std;

class Graph
{
private:
    bool directed;
    int V;
    int adj [100] [100];
    bool visited[100];


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

    void init()
    {
        for ( int i=0; i<V; i++)
        {
            visited[i] = false;
        }
    }

    void BFS ( int start)
    {
        queue <int> q;
        q.push(start);
        visited[start] = true;

        cout << "Traversal using BFS : " ;

        while( !q.empty())
        {
            int u = q.front();
            q.pop();

            cout << u <<" ";

            for ( int v=0; v<V; v++)
            {
                if( adj[u][v] == 1 && !visited[v] )
                {
                    q.push(v);
                    visited[v] = true;
                }
            }
        }
        cout << endl;

    }
};

int main()
{
    Graph g(7, false);

    g.addEdge (0,1);
    g.addEdge (0,2);
    g.addEdge (1,3);
    g.addEdge (1,4);
    g.addEdge (2,5);
    g.addEdge (2,6);

    g.init();
    g.BFS(0);

    //g.printGraph();

    return 0;
}

