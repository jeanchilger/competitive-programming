#include <iostream>
#include <vector>

using namespace std;

int sum = 0;
vector<vector<int> > mtrx;
vector<int> cache; // cache[i] = guarda a soma até aquela linha (não a soma da linha isolada)

void calculate(int i, int j, int qntd) {
	int aux = 0;
	for (; j < j + qntd; j++) {
		aux += mtrx[i][j];
	}

	if (cache[i] > aux) {
		cache[i] = aux;

	}
}

int main() {

	int n;
	cin >> n;

	mtrx.assign(n, vector<int>());
	cache.assign(n, 99999);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> mtrx[i][j];
		}
	}


	return 0;
}
