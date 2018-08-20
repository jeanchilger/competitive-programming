#include <iostream>

using namespace std;

int main() {

    int n, x, factor;
    unsigned long long grains, weight;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;
        grains = 1;
        factor = 12;

        for (int j = 0; j < x; j++) {
            if (j == 63) {
                factor = 6;

            } else {
                grains *= 2;
            }
        }

        weight = grains / factor / 1000;

        cout << weight << " kg" << endl;
    }

    return 0;
}
