#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>

using namespace std;

int visited[64];
vector<vector<int> > graph;

void dfs(int vertex) {

    visited[vertex] = 1;
    for (int v = 0; v < graph[vertex].size(); v++) {
        if (!visited[graph[vertex][v]]) {
            dfs(graph[vertex][v]);
        }
    }
}

int main() {

    int t;
    int n, m; //vertices edges
    int a, b;

    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> n >> m; // v  e

        graph.assign(n, vector<int>());
        memset(visited, 0, sizeof(visited));

        for (int j = 0; j < m; j++) {
            cin >> a >> b;
            graph[a].push_back(b);
        }

        for (int e = 0; e < n; e++) {
            cout << visited[e] << "\n";
        }
    }

    return 0;
}
