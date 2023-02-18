#include<bits/stdc++.h>
using namespace std;


const int n = 1e5;
int visited[n] = { 0 };
int level[n] = { 0 };
vector<int> adj_list[n];

void bfs(int src) {
    queue<int> q;
    q.push(src);
    visited[src] = 1;
    level[src] = 0;
    while (!q.empty()) {
        int curr = q.front();
        cout << curr << " ";
        q.pop();
        // explore the curr 
        for (int i : adj_list[curr]) {
            if (visited[i] == 0) {
                q.push(i);
                visited[i] = 1;
                level[i] = level[curr] + 1;
            }
        }
    }

}


int main() {

    int nodes, edges, src;
    cin >> nodes >> edges >> src;
    for (int i = 0; i < edges; i++) {
        int u, v;
        cin >> u >> v;
        // update the adj list 
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);

    }
    bfs(src);
    cout << "node " << 0 << " => level : " << level[0] << " " << endl;

    for (int i = 0; i < 100, level[i] != 0; i++) {
        cout << "node " << i << " => level : " << level[i] << " " << endl;
    }


}