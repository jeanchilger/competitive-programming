#include <iostream>

using namespace std;

int getSmaller(int arr[], int size) {
	int id = 0;
	int smaller = 999;
	for (int j = 0; j < size; j++) {
		if (arr[j] < smaller) {
			smaller = arr[j];
			id = j;
		}
	}

	return id;
}

int main() {

	int n;

	cin >> n;
	int mtrx[n][n];
	int sum[n] = {0};

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> mtrx[i][j];
			if (!sum[j]) sum[j] = 0;
			sum[j] += mtrx[i][j];
		}
	}

	int res = 0;
	int iSmaller;
	for (int i = 0; i < n; i++) {
		iSmaller = getSmaller(sum, n);
		cout << iSmaller << " ";
		res += sum[iSmaller];
		for (int j = 0; j < n; j++) {
			if (j != iSmaller) {
				sum[j] -= mtrx[i][j];
			}
		}
		sum[iSmaller] = 999;
	}
	cout << res << endl;
}

// falta verificar se a coluna está próxima da anterior
