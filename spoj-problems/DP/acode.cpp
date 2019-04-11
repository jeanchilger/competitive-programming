#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

string s;
int m;

int main () {

    while (1) {
        cin >> s;
        if (s == "0") break;
        m = s.size();

        int memo[m+1] = {0};

        memo[0] = memo[1] = 1;
        
        for (int i = 0; i < m-1; i++) {
            if (s[i] == '1' || s[i] == '2') memo[i+2] = memo[i] + memo[i+1];
            else if (s[i] == '0') memo[i+2] = memo[i+1] - 1;
            else memo[i+2] = memo[i+1];
        }

        cout << memo[m] << endl;
    }

    return 0;
}
