#include<bits/stdc++.h>
using namespace std;

vector<int> adj_list[1000];
int visited[1000];


// void bfs(int start) {
//     queue<int> q;
//     q.push(start);
//     visited[start] = true;
//     while (!q.empty()) {
//         int current = q.front();
//         q.pop();
//         cout << current << " ";
//         for (int i = 0; i < adj[current].size(); i++) {
//             int neighbor = adj[current][i];
//             if (!visited[neighbor]) {
//                 q.push(neighbor);
//                 visited[neighbor] = true;
//             }
//         }
//     }
// }


void bfs(int node) {
    queue<int > q;
    q.push(node);
    visited[node] = 1;


    while (!q.empty()) {
        int curr = q.front();
        cout << curr << endl; // print it pre-order 
        q.pop();


        for (int i : adj_list[curr]) {
            if (visited[i] == 0) { // push it to q because this node is not visited yet ! 
                q.push(i);
                visited[i] = 1;
            }
        }


    }




    return;
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

    bfs(0);
    return  0;



}