#include <bits/stdc++.h>

using namespace std;

typedef long long ull;

int main() {
    ull n, s;

    cin >> n;

    if (n % 2 == 0) {
        s = 1;
    } else {
        s = 2;
    }

    if (n == 1) {
        cout << "1\n";

        return 0;
    } else if (n == 4) {
        cout << "3 1 4 2\n";

        return 0;
    }

    if (n < 5) {
        cout << "NO SOLUTION\n";
        return 0;
    }

    while (s < n) {
        cout << s << " ";

        s += 2;
    }

    s -= 5;

    while (s > 0) {
        cout << s << " ";

        s -= 2;
    }

    cout << n;

//    if (n - 2 == 3) cout << "\n";
//    else cout << " " << n - 2 << "\n";
 
    cout << " " << n - 2 << "\n";


    return 0;
}
