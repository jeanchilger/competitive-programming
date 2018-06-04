#include <stdio.h>

int main() {

    int n, l, c, i;
    int count = 0;
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf(" %d %d", &l, &c);
        if (l > c) {
            count += c;
        }
    }
    printf("%d\n", count);

    return 0;
}
