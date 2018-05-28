#include <stdio.h>

int main() {

    int q, v, i;
    int areOk = 0;

    scanf("%d", &q);
    int half = q / 2 - (q % 2);

    for (i = 0; i < q; i++) {
        scanf(" %d", &v);
        if (!v) {
            areOk++;
        }
    }

    if (areOk > half) {
        printf("Y\n");

    } else {
        printf("N\n");
    }

    return 0;
}
