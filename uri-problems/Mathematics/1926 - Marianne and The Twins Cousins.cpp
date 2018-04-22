#include <iostream>

using namespace std;

int main() {

    bool primes[1000000];
    primes[0] = true;
    for (int d = 2; d <= 1000; d++) {
        if (!primes[d-1]) {
            for (int n = d*d; n <= 1000000; n+=d) {
                primes[n-1] = true;
            }
        }
    }

    int Q, X, Y, twinPrimes, lastTwin;

    //cin >> Q;
    Q = 100000;

    for (int i=0; i < Q; i++) {

        twinPrimes = 0;
        lastTwin = 0;

        //cin >> X >> Y;
        X = 1;
        Y = 1000000;
        for (int j=X; j <= Y; j++) {

            if (!(primes[j-1]) && !(primes[j+1])) {
                if ((j-1 != lastTwin) && ((j+1) < Y)) {
                    twinPrimes++;
                    lastTwin = j+1;
                }

                j++;
                twinPrimes++;
            }
        }

        cout << twinPrimes << endl;
    }
    return 0;
}
