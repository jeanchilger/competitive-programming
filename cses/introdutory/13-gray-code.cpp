#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {

    int n;

    cin >> n;

    
    for (int i=0; i < pow(2, n); i++) {
        bitset<16> t(i);
        cout << t.to_string().substr(16 - n) << endl;
    }

    return 0;
}

