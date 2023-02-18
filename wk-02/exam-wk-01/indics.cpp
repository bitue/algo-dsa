#include <bits/stdc++.h>

using namespace std;

const int N = 1e6;
vector<int> adj[N];
int visited[N] = { 0 };


void dfs(int node) {
    visited[node] = 1;
    for (int x : adj[node]) {
        if (visited[x] == 0) {
            dfs(x);
        }
    }
}

int main() {
    int nodes, edges;
    cin >> nodes >> edges;

    for (int i = 0; i < edges; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int count = 0;
    for (int i = 0; i < nodes; i++) {
        if (visited[i] == 0) {

            dfs(i);
            count++;
        }
    }

    cout << "Number of connected components: " << count << endl;

    return 0;
}
