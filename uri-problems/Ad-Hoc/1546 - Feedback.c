#include <stdio.h>

int main() {

    int n, k, c;
    int i, j;

    scanf("%d", &n);
    for (i = 0; i < n; i++) {

        scanf(" %d", &k);
        for (j = 0; j < k; j++) {
            scanf(" %d", &c);
            if (c == 1) {
                printf("Rolien\n");

            } else if (c == 2) {
                printf("Naej\n");

            } else if (c == 3) {
                printf("Elehcim\n");

            } else {
                printf("Odranoel\n");
            }
        }

    }

    return 0;
}
