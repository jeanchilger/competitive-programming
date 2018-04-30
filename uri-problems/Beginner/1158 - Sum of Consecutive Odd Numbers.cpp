#include <iostream>

using namespace std;

int main() {

    int n, x, y, sum, start;

    cin >> n;

    for (int i = 0; i < n; i++) {

        cin >> x >> y;

        start = x >= 0 ? ((x + 1) % 2) + x : (((x + 1) % 2)*-1) + x;
        sum = start;

        for (int j = 1; j < y; j++) {
            sum += start + j * 2;
        }

        cout << sum << endl;

    }

    return 0;
}
