#include<bits/stdc++.h>
using namespace std;



vector<int> adj_list[1000];
int visited[1000] = { 0 };

void dfs(int node) {

    cout << node << endl; // print node 
    visited[node] = 1; // visited
    for (int adj_node : adj_list[node]) {
        if (visited[adj_node] == 0) {
            dfs(adj_node);
        }

    }
}

void dfs_s(int node) {
    stack<int> st;
    st.push(node);
    visited[node] = 1;

    while (!st.empty()) {
        int curr = st.top();
        st.pop();
        // output 
        cout << curr << endl;
        for (int i : adj_list[curr]) {
            if (visited[i] == 0) {
                st.push(i);
                visited[i] = 1;

            }
        }



    }
}

// void dfs_c(int start) {
//     stack<int> s;
//     s.push(start);
//     visited[start] = true;
//     while (!s.empty()) {
//         int current = s.top();
//         s.pop();
//         cout << current << " ";
//         for (int i = 0; i < adj[current].size(); i++) {
//             int neighbor = adj[current][i];
//             if (!visited[neighbor]) {
//                 s.push(neighbor);
//                 visited[neighbor] = true;
//             }
//         }
//     }
// }




int main() {

    int node;
    int edge;
    cin >> node >> edge;



    for (int i = 0; i < edge; i++) {
        int u;
        int v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);

    }

    int src = 0;
    //dfs(src);
    dfs_s(src);
    // dfs_c(src);
    return 0;


}