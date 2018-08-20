#include <iostream>

using namespace std;

int main() {

    int n;
    string pl, planet;
    int a, t, smaller;

    while (true) {
        cin >> n;
        if (!n) break;

        smaller = 9999;
        for (int i = 0; i < n; i++) {
            cin >> pl >> a >> t;

            if (smaller > (a - t)) {
                smaller = a - t;
                planet = pl;
            }
        }

        cout << planet << endl;
    }

    return 0;
}
