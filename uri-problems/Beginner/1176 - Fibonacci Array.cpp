#include <iostream>

using namespace std;

int main() {

    uint64_t a = 0;
    uint64_t b = 1;
    uint64_t fib[60];
    uint64_t temp;

    fib[0] = 0;
    fib[1] = 1;

    int t, n;

    for (int i = 2; i <= 60; i++) {
        temp = b;
        b = b + a;
        a = temp;
        fib[i] = b;
    }

    cin >> t;

    for (int c=0; c < t; c++) {
        cin >> n;
        cout << "Fib(" << n << ") = " << fib[n] << endl;
    }


    return 0;
}
