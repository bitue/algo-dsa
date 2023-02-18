#include<bits/stdc++.h>
using namespace std;

int visited[1000] = { 0 };
vector<int> adj_list[1000];


void bfs(int node) {
    queue<int> q;

    q.push(node);
    visited[node] = 1;

    while (!q.empty()) {
        int curr = q.front();
        q.pop();
        cout << curr << " ";

        for (int i : adj_list[curr]) {
            if (visited[i] == 0) {
                q.push(i);
                visited[i] = 1;
            }
        }
    }
}

void bfs_m() {
    queue<int> q;

    q.push(1);
    visited[1] = 1;

    q.push(5);
    visited[5] = 1;


    while (!q.empty()) {
        int curr = q.front();
        q.pop();
        cout << curr << " ";

        for (int i : adj_list[curr]) {
            if (visited[i] == 0) {
                q.push(i);
                visited[i] = 1;
            }
        }
    }
}


void dfs(int node) {
    stack<int> st;
    st.push(node);
    visited[node] = 1;

    while (!st.empty()) {
        int curr = st.top();
        st.pop();
        cout << curr << " ";

        for (int i : adj_list[curr]) {
            if (visited[i] == 0) {
                st.push(i);
                visited[i] = 1;

            }


        }
    }

}

int main() {

    int nodes, edges;
    cin >> nodes >> edges;

    for (int i = 0; i < edges; i++) {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);

    }

    // bfs(1);
    bfs_m();



}