#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;


/*
 * @param t current position
 * @param n chessboard size
 * */
void solve(int t) {
    if (t == 1) {
        printf("0\n");
        return;
    }

    if (t == 2) {
        printf("6\n");
        return;
    }

    ull total = 0;
    ull pos = t * t;

    // inner middle
    total += pow(t - 4, 2) * (pos - 9);

    // borders
    total += (((t * 2) + ((t - 2) * 2) - 12) * (pos - 5)) + (4 * (pos - 3) + 8 * (pos - 4));

    // outer middle
    total += 4 * (pos - 5) + (((t - 2) * 2 + (t - 4) * 2) - 4) * (pos - 7);
    
    printf("%llu\n", total / 2);

}

int main() {
    int t;

    cin >> t;

    for (int i=1; i <= t; i++) {
        solve(i);
    }
    
    return 0;
}

