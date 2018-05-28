#include <stdio.h>

int main() {

    int n, i, m2;
    int max1, max2;

    while (1) {
        scanf(" %d", &n);
        if (!n) break;
        int suspects[n];

        max1 = -99998;
        max2 = -99999;

        for (i = 0; i < n; i++) {
            scanf(" %d", &suspects[i]);
        }

        for (i = 0; i < n; i++) {
            if (suspects[i] > max1) {
                max1 = suspects[i];
            }

        }

        for (i = 0; i < n; i++) {
            if (suspects[i] > max2 && suspects[i] != max1) {
                max2 = suspects[i];
                m2 = i+1;
            }
        }

        printf("%d\n", m2);

    }

    return 0;
}
