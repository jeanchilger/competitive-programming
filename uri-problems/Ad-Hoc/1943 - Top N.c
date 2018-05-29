#include <stdio.h>

int main() {

    int k, i;
    int pos[7] = {1, 3, 5, 10, 25, 50, 100};

    scanf("%d", &k);
    for (i = 0; i < 7; i++) {
        if (k <= pos[i]) {
            printf("Top %d\n", pos[i]);
            break;
        }
    }

    return 0;
}
