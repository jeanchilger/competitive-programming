#include <bits/stdc++.h>

using namespace std;

long fact(long n) {
   if (n == 0 || n == 1 ) return 1;
   
   return n * fact(n-1);
}

int unique(string s) {
    int visited[26] = {0}, total = 0;

    for (char x: s) {
        if (visited[x - 97] == 0) {
            visited[x - 97] = 1;
            total += 1;
        }
    }

    return total;
    
}


int main() {

    string s;

    cin >> s;

    int pr = fact(s.size()) / fact(unique(s));

    cout << pr << endl;

    for (int i=0; i < pr; i++) {
        next_permutation(begin(s), end(s));

        cout << s << endl;
    }

    return 0;
}
