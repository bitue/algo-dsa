
#include<bits/stdc++.h>
using namespace std;

string int_to_binary(int decimal) {
    string binary = "";
    while (decimal > 0) {
        if (decimal % 2 == 0) {
            binary = '0' + binary;
        }
        else {
            binary = '1' + binary;
        }
        decimal /= 2;
    }
    return binary;
}


string bin = "";


string int_to_bin_recursive(int decimal) {

    if (decimal <= 0) {
        return bin;

    }

    if (decimal % 2 == 0) {
        bin = '0' + bin;
    }
    else {
        bin = '1' + bin;
    }
    decimal /= 2;

    return  int_to_bin_recursive(decimal);




}





int main() {

    string res = int_to_bin_recursive(5);
    cout << res << endl;
}


