#include <bits/stdc++.h>

using namespace std;

typedef long long int lli;

int main() {

    int n, k;

    cin >> n >> k;

    deque<lli> s;
    lli w[n];


    for (int i=0; i<n; i++) {
        cin >> w[i];
        s.push_back(w[i]);
    }

    s.push_front(s.back());
    s.pop_back();


    lli x = 0;
    for (int j=1; j<k; j++) {
        for (int i=0; i<n; i++) {
            x = s.front();
            s.pop_front();
            w[i] += x;
            s.push_back(x);
        }
        s.push_front(s.back());
        s.pop_back();
    }

    for (int i=0; i<n-1; i++) {
        cout << w[i] << " ";
    }

    cout << w[n-1] << endl;

    

    return 0;
}
