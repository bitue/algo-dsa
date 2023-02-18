#include<bits/stdc++.h>
using namespace std;



int main() {

    // n = number of nodes
    // m = number of edges
    int n, m;
    cin >> n >> m;
    int adj_mat[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            adj_mat[i][j] = 0;
        }

    }
    int visited[1000] = { 0 };

    for (int i = 0; i < m; i++) { // loop over the number of edges
        int u, v;
        cin >> u >> v; // There exists a directed edge from u to v
        adj_mat[u][v] = 1;
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            cout << adj_mat[i][j] << " ";
        }
        cout << endl;
    }
    int co =0 ;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            if (adj_mat[i][j] == 1 && adj_mat[j][i] == 1) {
                co++;
                adj_mat[j][i]=0 ;
               
               

            }
        }

    }

    cout<<co<<endl;
  




    return 0;
}
