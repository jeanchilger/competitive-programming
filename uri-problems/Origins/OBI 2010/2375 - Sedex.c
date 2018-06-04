#include <stdio.h>

int main() {

    int n, a, l, p;
    scanf("%d", &n);
    scanf(" %d %d %d", &a, &l, &p);
    if (n > a || n > l || n > p) {
        printf("N\n");

    } else {
        printf("S\n");
    }

    return 0;
}
