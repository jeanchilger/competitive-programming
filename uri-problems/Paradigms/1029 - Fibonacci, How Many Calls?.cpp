#include <iostream>
#include <vector>

using namespace std;

vector<int> cache;

int calls = 0;

int fib(int n) {

    calls++;
    if (n == 0 || n == 1) {
        return n;
    } else {
        return fib(n - 2) + fib(n - 1);
    }
}

int main () {

    int t, n, f;
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> n;
        calls = -1;
        f = fib(n);

        cout << "fib(" << n << ") = " << calls << " calls = " << f << endl;
    }

    return 0;
}
