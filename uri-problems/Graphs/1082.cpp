#include <vector>
#include <cstdio>
#include <cstring>
#include <queue>
#include <algorithm>

using namespace std;

int visited[64];
vector<vector<int> > components;

void dfs(vector<vector<int> > graph, int vertex, int compId) {
    // printf("sas %d\n", vertex);
    visited[vertex] = 1;
    components[compId].push_back(vertex);
    for (int v = 0; v < graph[vertex].size(); v++) {
        if (!visited[graph[vertex][v]]) {
            dfs(graph, graph[vertex][v], compId);
        }
    }
}

int main() {

    int n;
    int v, e;
    char v0, v1;

    scanf("%d", &n);

    for (int cases = 1; cases <= n; cases++) {

        printf("Case #%d:\n", cases);

        scanf(" %d %d", &v, &e);

        vector<vector<int> > graph (v, vector<int>());
        components.clear();
        memset(visited, 0, sizeof(visited));

        for (int i = 0; i < e; i++) {
            scanf(" %c %c", &v0, &v1);
            v0 -= 'a';
            v1 -= 'a';

            graph[v0].push_back(v1);
            graph[v1].push_back(v0);

        }

        components.push_back(vector<int>());

        dfs(graph, 0, 0);

        int id = 1;
        for (int i = 0; i < v; i++) {

            if (!visited[i]) {
                components.push_back(vector<int>());
                dfs(graph, i, id);
                id++;
            }
        }

        for (int i = 0; i < id; i++) {
            for (int j = 0; j < components[i].size(); j++) {
                printf("%c,", components[i][j]+'a');
            }
            printf("\n");
        }

        printf("%d connected components\n\n", components.size());


    }
    return 0;
}
