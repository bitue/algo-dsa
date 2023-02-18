#include<bits/stdc++.h>
using namespace std;


int gcd(int a, int b) {
    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

int gcd_recursive(int a, int b) {

    if (b == 0) {
        return a;
    }
    else {
        int remainder = a % b;
        a = b;
        b = remainder;
        return gcd_recursive(a, b);

    }


}


int main() {

    int res = gcd_recursive(1, 2);
    cout << res << endl;
}