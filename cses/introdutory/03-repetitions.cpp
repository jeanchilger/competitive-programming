#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;


void solve(string& s) {
    ull longest = 0;
    ull current = 1;
    for (size_t i = 0; i <= s.size(); i++) {
        if (i > 0 && s[i] == s[i-1]) {
            current += 1;
        }

        if (current > longest) {
           longest = current;
        }

        if (i > 0 && s[i] != s[i-1]) {
            current = 1;
        }
    }

    printf("%llu\n", longest);
}


int main() {
    
    string s;

    getline(cin, s);

    solve(s);

    return 0;
}
