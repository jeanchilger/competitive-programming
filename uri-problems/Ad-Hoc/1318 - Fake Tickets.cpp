#include <iostream>

using namespace std;

int main() {

    int n, m, r, t;

    while (true) {
        cin >> n >> m;
        if (!n && !m) break;

        int tick[n] = {0};
        r = 0;

        for (int i = 0; i < m; i++) {
            cin >> t;

            if (tick[t-1] == 1) {
                r++;
                tick[t-1] = -1;
            } else if (tick[t-1] == 0){
                tick[t-1] = 1;
            }

        }

        cout << r << endl;

    }

    return 0;
}
