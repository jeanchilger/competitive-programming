#include <stdio.h>

int main() {

    int n, p1, p2, a, b;
    int i;

    while (1) {
        scanf("%d", &n);
        if (!n) break;
        p1 = p2 = 0;
        for (i = 0; i < n; i++) {
            scanf("%d %d", &a, &b);
            if (a > b) {
                p1++;
            } else if (a < b) {
                p2++;
            }
        }
        printf("%d %d\n", p1, p2);
    }

    return 0;
}
