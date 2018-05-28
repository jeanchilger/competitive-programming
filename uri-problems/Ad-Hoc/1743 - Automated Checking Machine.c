#include <stdio.h>

int main() {

    int x[5], y[5], i, ok;

    for (i = 0; i < 5; i++) {
        scanf(" %d", &x[i]);
    }

    for (i = 0; i < 5; i++) {
        scanf(" %d", &y[i]);
    }

    ok = 1;
    for (i = 0; i < 5; i++) {
        if (x[i] == y[i]) {
            printf("N\n");
            ok = 0;
            break;
        }
    }
    if (ok) {
        printf("Y\n");
    }

    return 0;
}
