#include <stdio.h>

int main() {

    int n, m, i, j;
    int change, possibleChange, countBills;
    const int BILLS[6] = {2, 5, 10, 20, 50, 100};

    while (1) {
        scanf("%d %d", &n, &m);
        if (!n && !m) break;

        change = m - n;
        if (change > 200 || change < 4) {
            printf("impossible\n");
        } else {
            for (i = 0; i < 6; i++) {
                possibleChange = change - BILLS[i];
                for (j = 0; j < 6; j++) {
                    if (possibleChange - BILLS[j] == 0) {
                        printf("possible\n");
                        possibleChange -= BILLS[j];
                        i = 6;
                        break;
                    }
                }
            }

            if (possibleChange) {
                printf("impossible\n");
            }
        }
    }

    return 0;
}
