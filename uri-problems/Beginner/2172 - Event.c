#include <stdio.h>

int main() {

    int x;
    unsigned long long int m;
    while (1) {
        scanf(" %d %llu", &x, &m);
        if (!x && !m) break;
        printf("%llu\n", x*m);
    }

    return 0;
}
