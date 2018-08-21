#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<vector<int> > mtrx;
vector<vector<int> > cache; // cache --> retorno de solve (não precisa significar algo lógico)
int n;

int solve(int i, int j) { // qntd = i

	if (cache[i][j] != -1) {
		return cache[i][j];
	}

	if (i == 0) {
		return 0;
	}

	int aux = 0; // soma da linha apartir do elemento atual

	for (int j1 = j; j1 < j + i; j1++) {
		aux += mtrx[i][j1];
	}

	if ()

	solve(i-1, j, qntd-1, max);
	solve(i-1, j+1, qntd-1, max);
}

int main() {

	cin >> n;

	mtrx.assign(n, vector<int>(n));
	cache.assign(n, vector<int>(n, -1));
	cache.at(n-1) = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> mtrx[i][j];
		}
	}

	for (int j = 0; j < n; j++) {
		cache[n-1] += mtrx[n-1][j];
	}

	int res = min(solve(n-2, 0), solve(n-2, 1));

	for (auto x : cache) {
		cout << x << endl;
	}


	return 0;
}
