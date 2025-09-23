#include<bits/stdc++.h>
using namespace std;

const int MAX = 1000;
const int INF = INT_MAX;

struct Edge
{
    int u, v, w;
};

Edge edges[MAX];
int parent[MAX];
int edgeCount = 0;

void addEdge( int u, int v, int w )
{
    edges[edgeCount].u = u;
    edges[edgeCount].v = v;
    edges[edgeCount].w = w;
    edgeCount++;
}

void printPath ( int dest )
{
    if ( parent[dest] == -1 )
    {
        cout << dest << " ";
        return;
    }
    printPath( parent [dest] );
    cout << dest << " ";
}


void Bellman_Ford ( int n, int src )
{
    int dist[MAX];

    for ( int i=0; i<n; i++ )
    {
        dist[i] = INF;
        parent[i]= -1;
    }
    dist [src] = 0;

    for ( int i=1; i<=n; i++)
    {
        for ( int j=0; j<edgeCount; j++)
        {
            int u = edges[j].u;
            int v = edges[j].v;
            int w = edges[j].w;

            if ( dist[u] != INF && dist[u] + w<dist[v])
            {
                dist[v] = dist[u]+w;
                parent[v]=u;
            }
        }
    }

    for ( int j=0; j<edgeCount; j++)
    {
        int u = edges[j].u;
        int v = edges[j].v;
        int w = edges[j].w;

        if ( dist[u] != INF && dist[u]+w<dist[v])
        {
            cout << "Graph contains negative weight cycle!!!" << endl;
            return;
        }
    }

    cout << "Shortest distance from Source " << src << ":\n";
    for( int i=0; i<n; i++ )
    {
        cout << "From " << src << " To " << i << " = ";
        if (dist[i]==INF)
            cout << "INF";
        else
            cout << dist[i];
        cout << endl;
    }
}


int main()
{
    int n=5; //-Vertices

    addEdge ( 0, 1, 6 ) ;
    addEdge ( 0, 2, 7 ) ;
    addEdge ( 1, 2, 8 ) ;
    addEdge ( 1, 3, 5 ) ;
    addEdge ( 1, 4,-4 ) ;
    addEdge ( 2, 3, 3 ) ;
    addEdge ( 2, 4, 9 ) ;
    addEdge ( 3, 1,-2 ) ;
    addEdge ( 4, 3, 7 ) ;
    addEdge ( 4, 0, 2 ) ;

    int src = 1;

    Bellman_Ford ( n, src );

    int dest = 4;

    cout << "\nPath from " << src << "to" << dest << ": ";

    printPath ( dest );

    cout << endl;

    return 0;
}

