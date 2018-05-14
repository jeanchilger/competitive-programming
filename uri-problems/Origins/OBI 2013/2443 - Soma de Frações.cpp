#include <iostream>

using namespace std;

int main() {

    int a, b, c, d;
    int e, f;

    cin >> a >> b >> c >> d;

    f = b * d;
    e = (a * f / b) + (c * f / d);
    int max = f;

    for (int i = 2; i <= max; i++) {
        if ((f % i == 0) && (e % i == 0)) {
            f /= i;
            e /= i;
            i--;
        }
    }

    cout << e << " " << f << endl;

    return 0;
}
