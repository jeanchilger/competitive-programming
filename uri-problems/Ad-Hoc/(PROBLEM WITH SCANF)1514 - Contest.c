#include <stdio.h>

int main() {

    int n, m, i, j;
    int caracteristics, c1, c2, c3, c4;

    while (1) {
        scanf(" %d %d", &n, &m);
        if (!n && !m) break;

        caracteristics = 4;

        c1 = c2 = c3 = c4 = 1;

        printf("--------------------------\n");
        int res[n][m];
        int person[n];
        int problem[m];

        for (i = 0; i < n; i++) {
            person[i] = 0;

            for (j = 0; j < m; j++) {
                scanf(" %d", &res[i][j]);

                if (i == 0) {
                    problem[j] = 0;
                }

                if (res[i][j]) {
                    person[i]+=1;
                    problem[j]+=1;
                }
            }
        }

        for (i = 0; i < n; i++) {
            // printf("per %d\n", person[i]);

            if (person[i] == 0 && c4) {
                caracteristics--;
                c4 = 0;

            } else if (person[i] == m && c1) {
                caracteristics--;
                c1 = 0;
            }

            if (!c1 && !c4) break;
        }


        for (j = 0; j < m; j++) {
            // printf("pro %d\n", problem[j]);
            if (problem[j] == 0 && c2) {
                caracteristics--;
                c2 = 0;

            } else if (problem[j] == n && c3) {
                caracteristics--;
                c3 = 0;
            }

            if (!c2 && !c3) break;

        }

        printf("%d\n", caracteristics);

    }

    return 0;
}
