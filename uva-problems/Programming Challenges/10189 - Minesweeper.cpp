#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, m, x=0;
    char c;

    while (scanf("%d %d", &n, &m), (n || m)) {
        vector<vector<int>> field(n, vector<int>(m, 0));
        vector<vector<char>> pfield(n, vector<char>(m, 0));
        x++;
        
        for (int i=0; i < n; i++) {
            for (int j=0; j < m; j++) {
                cin >> c;
                // Sums adjacent cells;
                if (c == '*') {
                    pfield[i][j] = '*';
                    if (i > 0) {
                        field[i-1][j] += 1;
                        if (j > 0) {
                            field[i-1][j-1] += 1;
                        }

                        if (j < m - 1) {
                            field[i-1][j+1] += 1;
                        }
                    }

                    if (i < n - 1) {
                        field[i+1][j] += 1;
                        if (j > 0) { 
                            field[i+1][j-1] += 1;
                        } 
 
                        if (j < m - 1) {
                            field[i+1][j+1] += 1;
                        }
                    }

                    if (j > 0) { 
                        field[i][j-1] += 1;
                    } 
 
                    if (j < m - 1) {
                        field[i][j+1] += 1;
                    }

                }
            }
        }

        printf("%cField #%d:\n", (x == 1) ? '\0' : '\n', x);
        for (int i=0; i < n; i++) {
            for (int j=0; j < m; j++) {
                if (pfield[i][j] == '*') {
                    printf("*");

                } else {
                    printf("%d", field[i][j]);   
                }
            }
            printf("\n");
        }
    }

    return 0;
}
