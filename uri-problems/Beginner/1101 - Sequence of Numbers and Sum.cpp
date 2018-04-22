#include <iostream>

using namespace std;

int main() {

    int m, n, sum;

    while(true) {

        cin >> m >> n;
        sum = 0;

        if (m > 0 && n > 0) {
            if (m > n) {
                int temp = m;
                m = n;
                n = temp;
            }

            for (int i=m; i <= n; i++) {
                cout << i << " ";
                sum += i;
            }

            cout << "Sum=" << sum << endl;
        } else break;
    }

    return 0;
}
