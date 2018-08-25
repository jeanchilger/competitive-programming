#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> cache;
vector<int> elements;
vector<int> marked;

int n, l, h;
int mks;

int solve (int i) {
    if (mks == h) return 0;

    if (i = n) {
        if (mks >= l && mks <= h) return 0;
        else return cache[i] = -9999;
    }

    if (cache[i] != -1) return cache[i];

    if (marked[i]) {
        mks++;
        if (mks == l) return elements[i];
    }

    int a = elements[i] + solve(i + 1);
    int b = a + solve(i + 1);

    return cache[i] = max(a, b);
}

int main () {

    int val;

    cin >> n >> l >> h;
    cache.assign(n, -1);

    for (int i = 0; i < n; i++) {
        cin >> val;
        elements.push_back(val);
    }

    for (int i = 0; i < n; i++) {
        cin >> val;
        marked.push_back(val);
    }

    int r = -9999;
    for (int i = 0; i < n; i++) {
        mks = 0; // marked elements that were summed
        r = max(r, solve(i));
    }

    cout << r << "\n";

    return 0;
}
