#include <stdio.h>

int main() {
    int p, q, n, i;
    float amount = 0;

    scanf("%d", &p);
    for (i = 0; i < p; i++) {
        scanf("%d %d", &n, &q);
        amount += ((n % 1000) + 0.50) * q;

    }

    printf("%.2f\n", amount);

    return 0;
}
