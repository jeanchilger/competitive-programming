#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> cache; /*?? 2 dimensões: cache[0][i] --> soma quando mks == l
                                     cache[1][i] --> soma quando l < mks <= h */
vector<int> elements;
vector<int> marked;

int n, l, h;
int mks;

int solve (int i) {
    if (i >= n || mks == h) return 0;
    if (cache[i] != -1) return cache[i];

    if (marked[i]) {
        mks++;
    }

    int b = elements[i] + solve(i+1);

    if (mks >= l) {
        return cache[i] = b;

    } else return cache[i] = -9999;
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
        mks = 0; // marked elements added to the sum
        r = max(r, solve(i));
    }

    cout << r << "\n";

    return 0;
}
