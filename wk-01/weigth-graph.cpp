#include<bits/stdc++.h>
using namespace std;
// graph rep adj matrix 

// 0--1 1--0 1--3 3--1 3--2 2--3 2--1 1--2 

int main() {
    int nodes = 4;
    vector<pair<int, int>> adj_list[nodes];

    adj_list[0].push_back(make_pair(1, 5));
    adj_list[1].push_back({ 3,2 });
    adj_list[1].push_back({ 2,6 });
    adj_list[3].push_back({ 2, 4 });







    for (int i = 0; i < nodes; i++) {
        cout << i << "->";
        for (auto j : adj_list[i]) {
            cout << "(" << j.first << " ," << j.second << " ) ";
        }
        cout << endl;
    }

}