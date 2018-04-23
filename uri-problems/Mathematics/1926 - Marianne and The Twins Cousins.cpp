#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

bool isPrime(int z) {
    int square = sqrt(z);
    for (int d = 2; d <= square; d++) {
        if (z % d == 0) {
            return false;
        }
    }
    return true;
}

int main() {

    vector<int> primes;

    for (int n=2; n < 1000000; n++) {
        if (isPrime(n)) {
            primes.push_back(n);
        }
    }

    int size = primes.size();

    int Q, X, Y, twinPrimes;

    cin >> Q;

    for (int i=0; i < Q; i++) {

        twinPrimes = 0;

        cin >> X >> Y;

        for (int j=1; j <= size; j++) {
            if (primes[j] > Y) break;
            if (primes[j] >= X) {
                if ((primes[j] - primes[j-1] == 2) || (primes[j] + 2 == primes[j+1])) {
                    twinPrimes++;
                }
            }
        }

        cout << twinPrimes << endl;
    }
    return 0;
}
