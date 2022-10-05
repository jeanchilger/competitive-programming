#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;

int main() {

    ull n, moves = 0;

    cin >> n;

    ull array[n];

    for (ull i = 0; i < n; i++) {
        cin >> array[i];
    }


    for (ull i = 0; i < n; i++) {
        if (i > 0 && array[i] < array[i - 1]) {
            moves += array[i - 1] - array[i];
            array[i] = array[i - 1];
        }
    }

    cout << moves << "\n";


    return 0;
}
