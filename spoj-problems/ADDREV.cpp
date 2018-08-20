#include <iostream>
#include <string.h>
#include <cmath>

using namespace std;

int reverse(string n) {
    int xn = 0;

    for (int x = n.length()-1; x >= 0; x--) {
        xn += (n[x] - '0') * pow(10, x);
    }

    return xn;
}

int main () {

    int n, xa, xb;
    string a, b;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        xa = reverse(a);
        xb = reverse(b);

        cout << reverse(to_string(xa+xb)) << "\n";

    }

    return 0;
}
