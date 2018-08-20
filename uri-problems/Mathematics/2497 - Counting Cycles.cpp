#include <iostream>

using namespace std;

int main() {

    int n;
    int ex = 0;
    while (true) {
        cin >> n;
        if (n == -1) break;
        ex++;
        cout << "Experiment " << ex << ": " << n / 2 << " full cycle(s)\n";

    }

    return 0;
}
