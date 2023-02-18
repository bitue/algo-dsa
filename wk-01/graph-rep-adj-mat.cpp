#include<bits/stdc++.h>
using namespace std;
// graph rep adj matrix 

// 0--1 1--0 1--3 3--1 3--2 2--3 2--1 1--2 



int main() {

    int arr[4][4] = {};
    arr[0][1] = 1;
    arr[1][0] = 1;
    arr[1][3] = 1;
    arr[3][1] = 1;
    arr[3][2] = 1;
    arr[2][3] = 1;
    arr[2][1] = 1;
    arr[1][2] = 1;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

}