#include <iostream>
using namespace std;

#define V 7
#define INF 999999

int minKey(int key[], bool mstSet[])
{
    int min = INF, min_index;
    for (int v = 0; v < V; v++)
        if (!mstSet[v] && key[v] < min)
            min = key[v], min_index = v;
    return min_index;
}

void primMST(int graph[V][V])
{
    int parent[V];
    int key[V];
    bool mstSet[V];

    for (int i = 0; i < V; i++)
    {
        key[i] = INF;
        mstSet[i] = false;
    }

    key[0] = 0;
    parent[0] = -1;

    for (int count = 0; count < V - 1; count++)
    {
        int u = minKey(key, mstSet);
        mstSet[u] = true;

        for (int v = 0; v < V; v++)
            if (graph[u][v] && !mstSet[v] && graph[u][v] < key[v])
            {
                parent[v] = u;
                key[v] = graph[u][v];
            }
    }

    int total = 0;
    cout << "Edge   Weight\n";
    for (int i = 1; i < V; i++)
    {
        cout << parent[i] << " - " << i << "    " << graph[i][parent[i]] << endl;
        total += graph[i][parent[i]];
    }
    cout << "Total weight of MST = " << total << endl;
}

int main()
{
    int graph[V][V] =
    {
        {0, 2, 4, 0, 0, 0, 0},  // A
        {2, 0, 1, 7, 0, 0, 0},  // B
        {4, 1, 0, 0, 3, 0, 0},  // C
        {0, 7, 0, 0, 2, 3, 0},  // D
        {0, 0, 3, 2, 0, 5, 6},  // E
        {0, 0, 0, 3, 5, 0, 4},  // F
        {0, 0, 0, 0, 6, 4, 0}   // G
    };

    primMST(graph);

    return 0;
}
