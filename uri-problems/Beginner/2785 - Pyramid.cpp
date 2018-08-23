#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<vector<int> > mtrx;
vector<vector<int> > cache;
int n;

int solve(int i, int j) {
	if (i < 0) {
		return 0;
	}

	if (cache[i][j] != -1) {
		return cache[i][j];
	}

	int aux = 0;

	for (int j1 = j; j1 <= j + i; j1++) {
		aux += mtrx[i][j1];
	}


	int a = aux + solve(i-1, j);
	int b = aux + solve(i-1, j+1);

	return cache[i][j] = min(a, b);
}

int main() {

	cin >> n;

	mtrx.assign(n, vector<int>(n));
	cache.assign(n, vector<int>(n, -1));
	cache[n-1][n-1] = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> mtrx[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		cache[n-1][n-1] += mtrx[n-1][i];
	}

	int res = min(solve(n-2, 1), solve(n-2, 0));

	cout << cache[n-1][n-1] + res << endl;


	return 0;
}
