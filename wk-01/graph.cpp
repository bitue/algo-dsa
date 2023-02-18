#include<bits/stdc++.h>
using namespace std;

int main() {

    // n = number of nodes
    // m = number of edges
    int n, m;
    cin >> n >> m;

    // TODO: Declare your favorite data structures here.
    vector<int> adj_list[n];

    // adj_list[0] = { 1 };
    // adj_list[1] = { 2, 3 };
    // adj_list[2] = { 1, 3 };
    // adj_list[3] = { 1, 2 };


    for (int i = 0; i < m; i++) { // loop over the number of edges
        int u, v;
        cin >> u >> v; // there exists an edge between node u and v
        adj_list[u].push_back(v);

        // TODO: Do stuffs with u and v
    }

    // TODO: Print your representation like shown in module - 2

    for (int i = 0; i < n; i++) {
        cout << i << "->";
        for (int i : adj_list[i]) {
            cout << i << " ";
        }
        cout << endl;
    }


    return 0;
}
