#include <iostream>
#include <vector>
#include <limits>
using namespace std;

vector<vector<int>> caixas;
vector<bool> marked;
int N;

const int INF = 1e8;

vector<vector<int>> cache;

int solve(int l, int c) {
    if (cache[l][c] != -1) return cache[l][c];
    if(l >= N) {
        return 0;
    }
    //if(c < 0) return INF;
    //if(l+c >= N) return INF;


    int tot = 0;
    for(int i = 0; i < l; ++i) {
		cout << "LOOOOOOOPPPPE\n";
        tot += caixas[l][i+c];
    }

	int a, b;

	if (c < 1) {
		a = INF;
	} else {
		cout << "AAA = tot -> " << tot << " caixa[" << l << "][" << c-1 << "] -> " << caixas[l][c-1] << endl;
		a = tot + caixas[l][c-1] + solve(l+1, c-1);
	}

	if ((l+c) >= N) {
		b = INF;
	} else {
		cout << "BBB = tot -> " << tot << " caixa[" << l << "][" << l+c << "] -> " << caixas[l][l+c] << endl;
		b = tot + caixas[l][l+c] + solve(l+1, c);
	}

    //printf("> N=%d l=%d c=%d, a %d b %d\n", N, l, c, a, b);
    //printf("> tot = %d, \n", tot);

    int r = min(a, b);
    //printf("l=%d c=%d, r=%d\n", l, c, r);
    return cache[l][c] = r;
}

int main() {
    cin >> N;
    caixas.assign(N, vector<int>(N, 0));
    cache.assign(N+1, vector<int>(N, -1));
    marked.assign(N, false);
    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < N; ++j) {
            cin >> caixas[i][j];
        }
    }

    int r = INF;
    for(int c = 0; c < N; c++) {
        r = min(r, solve(0, c));
    }
    cout << r << '\n';


    //cout << "---------------------\n";
    //cout << solve(N-1, 0) << '\n';
}
