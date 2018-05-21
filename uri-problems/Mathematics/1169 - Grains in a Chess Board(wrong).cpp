#include <iostream>

using namespace std;

int main() {

    int n, x, weight;
    long long int grains;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;
        grains = 1;

        for (int i = 1; i < x; i++) {
            grains *= 2;
        }

        weight = grains / 12 / 1000;

        cout << weight << " kg" << endl;
    }

    return 0;
}
