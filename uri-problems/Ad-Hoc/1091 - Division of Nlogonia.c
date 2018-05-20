#include <stdio.h>

int main() {

    int k, n, m, x, y;
    int i;

    while (1) {
        scanf("%d", &k);
        if (!k) break;
        scanf("%d %d", &n, &m);
        for (i = 0; i < k; i++) {
            scanf("%d %d", &x, &y);
            if (x == n || y == m) {
                printf("divisa\n");
            } else if (x < n) {
                if (y > m) {
                    printf("NO\n");
                } else {
                    printf("SO\n");
                }
            } else if (x > n) {
                if (y > m) {
                    printf("NE\n");
                } else {
                    printf("SE\n");
                }
            }
        }
    }

    return 0;
}
