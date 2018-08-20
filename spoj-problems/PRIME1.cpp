#include <iostream>
#include <cmath>

using namespace std;

typedef long long ll;

bool isPrime(ll num) {
    long max = sqrt(num);

    for (int i = 2; i <= max; i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

int main () {

    int t;
    cin >> t;

    ll m, n;

    for (int q = 0; q < t; q++) {
        cin >> m >> n;
        for (int x = m; x <= n; x++) {
            if (isPrime(x) && x != 1) {
                cout << x << "\n";
            }
        }
    }


    return 0;
}
