#include <iostream>

using namespace std;

int main() {

    int n;

    cin >> n;
    int v[n];

    double big2 = -9999;
    double big1 = -9999;
    double total = 0;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        total += v[i];

        if (v[i] >= big1) {
            big1 = v[i];
        } else if (v[i] >= big2) {
            big2 = v[i];
        }
    }

    double sub1 = big1 * 100 / total;

    if (sub1 >= 45.0) {
        cout << 1 << endl;

    } else if (sub1 >= 40.0 && ((big1 - big2) * 100 / total) >= 10.0) {
        cout << 1 << endl;

    } else {
        cout << 2 << endl;

    }

    return 0;
}
