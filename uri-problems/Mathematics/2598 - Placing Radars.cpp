#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int c, n, m;
    cin >> c;

    for (int i = 0; i < c; i++) {
        cin >> n >> m;
        if (m >= n) cout << 1 << endl;
        else cout << ceil((double)n/m) << endl;
    }

    return 0;
}
