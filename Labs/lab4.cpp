#include <iostream>
#include <vector>
#include "graph.h"

typedef Graph<int> MyGraph;

void Floyd(MyGraph& graph, std::vector<std::vector<int>>& shortestPaths) {
    int vertexCount = graph.vertexCount();
    shortestPaths.resize(vertexCount, std::vector<int>(vertexCount, INT_MAX));
    for (int i = 0; i < vertexCount; ++i) {
        shortestPaths[i][i] = 0;
    }
    for (int i = 0; i < vertexCount; ++i) {
        for (int j = 0; j < vertexCount; ++j) {
            if (graph.hasEdge(i, j)) {
                shortestPaths[i][j] = graph.getEdgeData(i, j);
            }
        }
    }
    for (int k = 0; k < vertexCount; ++k) {
        for (int i = 0; i < vertexCount; ++i) {
            for (int j = 0; j < vertexCount; ++j) {
                if (shortestPaths[i][k] != INT_MAX && shortestPaths[k][j] != INT_MAX
                    && shortestPaths[i][k] + shortestPaths[k][j] < shortestPaths[i][j]) {
                    shortestPaths[i][j] = shortestPaths[i][k] + shortestPaths[k][j];
                }
            }
        }
    }
}

int main() {

    std::vector<std::vector<int>> shortestPaths;
    MyGraph graph(4);
    graph.addEdge(0, 1, 5);
    graph.addEdge(0, 3, 10);
    graph.addEdge(1, 2, 3);
    graph.addEdge(2, 3, 1);

    Floyd(graph, shortestPaths);
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            if (i == j or shortestPaths[i][j] == INT_MAX) {
                continue;
            } else 
                std::cout << "Shortest path from " << i << " to " << j << " is " << shortestPaths[i][j] << std::endl;
        }
    }
    return 0;
}
