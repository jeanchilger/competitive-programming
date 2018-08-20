#include <iostream>
#include <math.h>

using namespace std;

int main() {

    double a1, a2, a3, a4;

    cin >> a1 >> a2 >> a3 >> a4;

    double at = sqrt(a1) * sqrt(a2) * sqrt(a3) * sqrt(a4);
    double dif = round(at * 100000000) / 100000000.0;

    if (dif - (int)dif <= 0.001) {
        cout << "S\n";
    } else {
        cout << "N\n";
    }

    return 0;
}
