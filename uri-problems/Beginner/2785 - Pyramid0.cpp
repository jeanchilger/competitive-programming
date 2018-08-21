#include <iostream>
#include <vector>

using namespace std;

int sum = 0;
vector<vector<int> > mtrx;
vector<int> cache; // cache[i] = guarda a soma até aquela linha (não a soma da linha isolada)

void solve(int i, int j, int qntd, int max) {

	int aux = 0;
	// cout << "mtrx[" << i << "][" << j << "] = " << mtrx[i][j] << endl;
	for (int j1 = j; j1 < j + qntd; j1++) {
		aux += mtrx[i][j1];
	}

	if (cache[i] > aux) {
		cache[i] = aux;
	}

	if (i == 0) {
		return;
	}
	// cout << "SAS\n";
	solve(i-1, j, qntd-1, max);
	solve(i-1, j+1, qntd-1, max);
}

int main() {

	int n;
	cin >> n;

	mtrx.assign(n, vector<int>(n));
	cache.assign(n, 99999);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> mtrx[i][j];
		}
	}

	solve(n-1, 0, n, n);

	for (int x : cache) {
		sum += x;
	}

	cout << sum << "\n";

	return 0;
}
