#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {

    int v, r;
    string hex;
    map<int, string> hexConv = {
        {10, "A"},
        {11, "B"},
        {12, "C"},
        {13, "D"},
        {14, "E"},
        {15, "F"}
    };

    cin >> v;

    while (1) {
        r = v % 16;
        if (r >= 10 && r <= 15) {
            hex += hexConv[r];
        } else {
            hex += to_string(r);
        }
        v /= 16;
        if (!v) break;

    }

    for (int i = hex.length()-1; i >= 0; i--) {
        cout << hex[i];
    }
    cout << endl;

    return 0;
}
