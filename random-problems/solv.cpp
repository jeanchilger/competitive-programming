#include <iostream>

using namespace std;

int main () {

    int t, n, m, x, y;

    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n >> m >> x >> y;
        
        if ((n == 2 && m == 2) || (n == 1 && m == 1)) {
            cout << "Chefirnemo\n";

        } else if (n > x && m > y) {
            if ((n-1) % x == 0 && (m-1) % y == 0) {
                cout << "Chefirnemo\n";

            } else if ((n-2) % x == 0 && (m-2) % y == 0) {
                cout << "Chefirnemo\n";

            } else {
                cout << "Pofik\n";
            }

        } else {
            cout << "Pofik\n";
        }    
    }

    return 0;
}
