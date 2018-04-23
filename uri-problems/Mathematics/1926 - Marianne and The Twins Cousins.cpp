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

    vector<int> twinPrimes;

    twinPrimes.push_back(3);
    for (int n = 1; n < 166667; n++) {
        if (isPrime(6 * n - 1) && isPrime(6 * n + 1)) {
            twinPrimes.push_back(6 * n - 1);
            twinPrimes.push_back(6 * n + 1);
        }
    }
    
    int size = twinPrimes.size();
    int q, x, y, twinCount;

    cin >> q;

    for (int i=0; i < q; i++) {

        twinCount = 0;

        cin >> x >> y;
        for (int j=0; j <= size; j++) {
            if (twinPrimes[j] > y) break;
            if (twinPrimes[j] >= x) {
                    twinCount++;
            }
        }

        cout << twinCount << endl;
    }
    return 0;
}
