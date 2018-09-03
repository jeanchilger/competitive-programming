#include <iostream>
#include <cmath>

using namespace std;

int main () {

    int r1, x1, y1, r2, x2, y2;
    double dist;
    while (cin >> r1 >> x1 >> y1 >> r2 >> x2 >> y2) {
        dist = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
        if (((dist - r1) + r2) <= 0) {
            cout << "RICO\n";

        } else {
            cout << "MORTO\n";
        }
    }

    return 0;
}
