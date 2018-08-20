#include <stdio.h>

int main() {

    int n, x, y, i;
    int queries = 0;
    int lastY = -999;
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf(" %d %d", &x, &y);
        if (x >= lastY) {
            queries++;
            lastY = y;
        }
    }

    printf("%d\n", queries);

    return 0;
}
