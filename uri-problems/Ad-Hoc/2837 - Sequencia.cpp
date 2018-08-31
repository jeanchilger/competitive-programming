#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> cache;
vector<int> elements;
vector<int> marked;

int n, l, h;
int mks;
int sum = 0;

int solve () {

    
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

    mks = 0;
    cout << solve() << "\n";

    return 0;
}
