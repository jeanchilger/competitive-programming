#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

    int n, m, elem, size;
    cin >> n;

    int mi = 3;

    for (int test = 0; test < n; test++) {
        mi++;

        cin >> m;
        unsigned long long int mtrx[m][m];
        unsigned long long int bigger[m] = {0};
        int sizes[m];

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < m; j++) {
                cin >> elem;
                mtrx[i][j] = elem * elem;

                if (mtrx[i][j] > bigger[j]) {
                    bigger[j] = mtrx[i][j];
                }
            }
        }

        cout << "Quadrado da matriz #" << mi << endl;

        for (int j = 0; j < m; j++) {
            size = 0;
            while (bigger[j] > 0) {
                bigger[j] /= 10;
                size++;
            }
            sizes[j] = size;
        }

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < m; j++) {

                printf("%*llu", sizes[j], mtrx[i][j]);
                if (j < m-1) {
                    cout << " ";
                }
            }
            cout << endl;
        }

        if (test != n-1) {
            cout << endl;
        }

    }

    return 0;
}
