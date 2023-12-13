﻿#include <iostream>
#include <vector>
#include <algorithm>
#include "graphmatr.h"
#include <climits>
using namespace std;

int V = 5;
vector<int> parent(V);



int find(int i)
{
    if (parent[i] != i)
        parent[i] = find(parent[i]);
    return parent[i];
}
void union1(int i, int j)
{
    int a = find(i);
    int b = find(j);
    parent[a] = b;
}

void KruskalMST(Graph<int>cost)
{
    int mincost = 0;


    for (int i = 0; i < V; i++)
        parent[i] = i;


    int edge_count = 0, a, b;
    while (edge_count < V - 1) {
        int min = INT_MAX;
        a = -1, b = -1;
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                if (find(i) != find(j) && cost.getEdgeWeight(i, j) < min && cost.getEdgeWeight(i, j) > 0) {
                    min = cost.getEdgeWeight(i, j);
                    a = i;
                    b = j;
                }
            }
        }

        union1(a, b);
        printf("Edge %d:(%d, %d) cost:%d \n", edge_count++, a, b, min);
        mincost += min;
    }
    printf("\n Minimum cost= %d \n", mincost);
}

int main() {
    Graph<int> graph(5);
    int a=0, b=0, c=0;
    while (a != -1)
    {
        cin >> a;
        if (a == -1)
            break;
        cin >> b;
        cin >> c;
        graph.addEdge(a, b, c);
    }

    graph.addEdge(0, 1, 10);
    graph.addEdge(0, 2, 20);
    graph.addEdge(1, 2, 30);
    graph.addEdge(1, 3, 40);
    graph.addEdge(2, 3, 50);
    graph.addEdge(2, 4, 60);
    graph.addEdge(3, 4, 70);


   // KruskalMST(graph);
    return 0;
};