#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

string a, b;
int n, m;

vector<vector<int> > memo;
int prize[26];

int f(int i, int j) {

    if (i == n || j == m) return 0;
    if (memo[i][j] != -1) return memo[i][j];

    if (a[i] == b[j]) return memo[i][j] = prize[a[i] - 'a'] + f(i+1, j+1);
    
    else return memo[i][j] = max(f(i+1, j), f(i, j+1));

}

int main () {

    cin >> n >> m;
    memo.assign(n, vector<int>(m, -1));

    for (int i = 0; i < 26; i++) {
        cin >> prize[i];
    }
    
    cin >> a >> b;
    cout << f(0, 0) << endl;

    return 0;
}
