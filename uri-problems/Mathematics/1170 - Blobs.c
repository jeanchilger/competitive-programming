#include <stdio.h>

int main() {

    int n, i;
    int days;
    float x;

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%f", &x);
        days = 0;
        while (x > 1) {
            days++;
            x /= 2;
        }
        printf("%d dias\n", days);
    }

    return 0;
}
