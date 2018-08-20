#include <iostream>
#include <math.h>

using namespace std;

int countDivisors(int n) {
    int divisors = 0;

    for (int d = 1; d <= n; d++) {
        if (n % d == 0) {
            divisors += 1;
        }
    }


    return divisors;
}

int main() {

    int c, n, es;
    cin >> c;

    for (int i = 0; i < c; i++) {
        cin >> n;
        es = 0;
        for (int num = 2; num <= n; num++) {
            if (countDivisors(num) % 2 == 0) es++;
        }

        cout << es << endl;
    }

    return 0;
}
