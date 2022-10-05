#include <bits/stdc++.h>

using namespace std;

typedef long long ll;


void solve(ll x, ll y) {
    ll temp = x;

    if (x < y) {
        temp = y;
    }

    ll diag = 1 + (temp * (temp - 1));
    ll diff = x - y;

    if (temp % 2 == 0) {
        diag += diff;
    } else {
        diag -= diff;
    }

    cout << diag << "\n";
}


int main() {
   ll t, x, y;

    cin >> t;

    for (ll i=0; i < t; i++) {
        cin >> x >> y;
        
        solve(x, y);
    }
    
    return 0;
}

