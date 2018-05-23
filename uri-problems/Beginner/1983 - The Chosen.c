#include <stdio.h>

int main() {

    int n, m, i;
    int regBig = 0;

    float bigger = -1;
    float note;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf(" %d", &m);
        scanf(" %f", &note);
        if (note >= 8) {
            if (note > bigger) {
                bigger = note;
                regBig = m;
            }
        }
    }

    if (bigger < 0) {
        printf("Minimum note not reached\n");

    } else {
        printf("%d\n", regBig);
    }


    return 0;
}
