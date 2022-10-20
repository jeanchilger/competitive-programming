#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;

int main() {

    ull t, a, b, c;

    cin >> t;

    while (t--) {
        cin >> a >> b;

        if (b > a) {
            c = a;
            a = b;
            b = c;
        }

        if ((a + b) % 3 == 0 && b >= a - b) {
           printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}

