#include <stdio.h>

int main() {

    int n, t, v, i;
    int distance = 0;

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf(" %d %d", &t, &v);
        distance += t*v;
    }
    printf("%d\n", distance);

    return 0;
}
