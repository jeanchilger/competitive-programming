#include <stdio.h>

int main(void) {

    int n, c, s, e, i;
    int count = 0;
    int exceeded = 0;
    scanf("%d %d", &n, &c);

    for (i = 0; i < n; i++) {
        scanf(" %d %d", &s, &e);
        count -= s;
        count += e;
        if (count > c) {
            exceeded = 1;
        }
    }

    if (exceeded == 1) {
        printf("S\n");

    } else {
        printf("N\n");
    }

}
