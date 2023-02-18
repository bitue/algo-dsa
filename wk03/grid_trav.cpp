#include<bits/stdc++.h>
using namespace std;
int co = 0;

int maze[10][10];
int visited[10][10];
int level[10][10];
int row, col;
int dx[] = { 0, 0 , -1 , 1 };
int dy[] = { 1, -1, 0, 0 };

pair<int, int> src, des;

bool isInside(int x, int y) {
    if ((x >= 0 && x < col) && (y >= 0 && y < row)) {
        //cout << "true isInside" << endl;
        return true;
    }
    else {
        // cout << "False inside" << endl;

        return false;
    }
}

bool isVisited(int x, int y) {
    if (visited[x][y] == 1) {
        return true;
    }
    else {

        return false;
    }
}

bool isSafe(int x, int y) {
    if (maze[x][y] == -1) {
        //cout << "Not safe" << endl;
        return false;
    }
    else {
        //cout << "true" << endl;
        return true;
    }
}

// inside the maze 
// visited false 
// maze [x][y] is_safe()

void bfs(pair<int, int> src) {
    queue<pair<int, int>> q;
    q.push(src);
    visited[src.first][src.second] = 1; // visited this src grid cell
    level[src.first][src.second] = 0; // declare lv it 0

    // cout << "Y" << endl;

    while (!q.empty()) {
        pair<int, int> curr = q.front();
        q.pop();
        cout << "Y" << endl;
        int x = curr.first;
        int y = curr.second;
        for (int i = 0; i < 4; i++) {
            int newX = x + dx[i];
            int newY = y + dy[i];
            // cout << newX << newY << endl;
            if (isInside(newX, newY) && isSafe(newX, newY) && !isVisited(newX, newY)) {
                pair<int, int> p = { newX, newY };
                q.push(p);
                cout << p.first << " " << p.second << " " << endl;
                level[newX][newY] = level[x][y] + 1;
                visited[newX][newY] = 1;
                co++;

            }
        }

    }

}

int main() {


    cin >> row >> col;

    for (int j = 0; j < row; j++) {
        for (int i = 0; i < col; i++) {
            char input;
            cin >> input;
            if (input == '#') {
                maze[j][i] = -1;
            }
            else if (input == 'A') {
                src = { j,i };
                maze[j][i] = 10;

            }
            else if (input == 'B') {
                des = { j,i };
                maze[j][i] = 20;
            }
            else {
                maze[j][i] = 1;
            }
        }
    }
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            visited[i][j] = 0;
            level[i][j] = -1;
        }
    }

    // for (int i = 0; i < row; i++) {
    //     for (int j = 0; j < col; j++) {
    //         cout << maze[i][j] << "\t";
    //     }
    //     cout << endl;
    // }
    cout << "src" << src.first << ", " << src.second << " " << endl;
    cout << "des" << des.first << ", " << des.second << " " << endl;
    bfs(src);
    cout << level[des.first][des.second] << endl;
    cout << level[3][6] << endl;
    cout << co << endl;
    cout << " level " << endl;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << level[i][j] << "\t";
        }
        cout << endl;
    }







}