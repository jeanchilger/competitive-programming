#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {

    ll n;

    cin >> n;

    if (((n + 1) * (n / 2)) % 2 != 0) {
        printf("NO\n");
    } else {
        printf("YES\n");

    }

    return 0;
}
