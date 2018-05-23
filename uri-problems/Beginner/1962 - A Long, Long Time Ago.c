#include <stdio.h>

int main(){

    int n, t, a, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf(" %d", &t);
        a = 2015 - t;

        if (a > 0) {
            printf("%d D.C.\n", a);

        } else if (a <= 0) {
            printf("%d A.C.\n", (a * -1) + 1);
        }
    }

    return 0;
}
