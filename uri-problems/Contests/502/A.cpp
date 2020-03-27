#include <bits/stdc++.h>

using namespace std;

int main() {

    long double n;

    while (cin >> n) {
        long int mid = ceil(n / 100);
        if (mid == 0)
            cout << 1 << endl;
        else
            cout << mid << endl;
    }

    return 0;
}
