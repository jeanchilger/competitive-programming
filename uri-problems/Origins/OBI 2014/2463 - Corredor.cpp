#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> cache;
vector<int> rooms;
int n;

int solve (int i) {
    if (i >= n) return 0;
    if (cache[i] != -1) return cache[i];

    int a = rooms[i];
    int b = rooms[i] + solve(i+1);

    return cache[i] = max(a, b);
}

int main () {

    int l;
    cin >> n;

    cache.assign(n, -1);
    for (int i = 0; i < n; i++) {
        cin >> l;
        rooms.push_back(l);
    }


    int r = -999;
    for (int i = 0; i < n; i++) {
        r = max(r, solve(i));
    }

    cout << r << "\n";

    return 0;
}
