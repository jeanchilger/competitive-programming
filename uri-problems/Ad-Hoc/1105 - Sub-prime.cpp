#include <iostream>

using namespace std;


int main() {
    int b, n, d, c, v;
    char res;

    while (true) {
        cin >> b >> n;
        if (!b && !n) break;

        int reserves[b];

        for (int i = 0; i < b; i++) {
            cin >> reserves[i];
        }

        for (int i = 0; i < n; i++) {
            cin >> d >> c >> v;
            reserves[d-1] -= v;
            reserves[c-1] += v;
        }
        res = 'S';
        for (int i = 0; i < b; i++) {
            if (reserves[i] < 0) {
                res = 'N';
                break;
            }
        }
        cout << res << endl;
    }

    return 0;

}
