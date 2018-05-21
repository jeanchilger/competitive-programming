#include <stdio.h>

int main() {

    int c, n, i, j;
    int x, above;
    float average;
    scanf("%d", &c);

    for (i = 0; i < c; i++) {
        scanf("%d", &n);
        int grades[n];
        above = 0;
        average = 0;

        for (j = 0; j < n; j++) {
            scanf("%d", &x);
            grades[j] = x;
            average += x;
        }
        average /= n;
        for (j = 0; j < n; j++) {
            if (grades[j] > average) {
                above++;
            }
        }

        printf("%.3f%%\n", (float)(100.0*above/n));
    }

    return 0;
}
