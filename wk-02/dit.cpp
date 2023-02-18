#include<bits/stdc++.h>
using namespace std;




int main() {

    int n;
    int k;
    cin >> n >> k;
    int co = 0;

    for (int i = 1; i <= n; i++) {
        if (i % k == 0) {
            co++;
            cout << i << k << endl;
        }

    }

    cout << co << endl;


    //cout << n / k - co << endl;


}