#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> cache(-1, 10000); // i) saves the square of the numbers??
                              // ii)

int solve (int x) { // começa na raiz de n e vai diminuindo
    if (x <= 0) return 0;
    if (cache[x] != -1) return cache[x];
    int a =

    return 0;
}

int main() {

    int n;

    while (cin >> n) {
        if (n < 0) cout << "NO\n";

        else {
            int r = solve(n);

        }
    }

    return 0;
}
