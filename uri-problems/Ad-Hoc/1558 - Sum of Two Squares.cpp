#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<vector<int> > cache;
int n;

int s (int i, int j) {
    if (i < 0) return 0;
    if (j < 0) return s(i-1, i-1);
    if (cache[i][j] != -1) return cache[i][j];

    if ((i*i + j*j) == n) {
        cache[i][j] = 1;
        cache[j][i] = 1;
        return 1;

    }
    else return s(i, j-1);
}

int main() {

    int sq;

    while (cin >> n) {
        if (n < 0) cout << "NO\n";

        else {
            sq = sqrt(n) + 1;
            cache.assign(sq+1, vector<int>(sq+1, -1));
            if (s(sq, sq-1)) cout << "YES\n";
            else cout << "NO\n";


        }
    }

    return 0;
}
