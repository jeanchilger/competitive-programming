#include <stdio.h>

int main() {

    int q, d, p, pages;
    while(1) {
        scanf(" %d", &q);
        if (!q) break;
        scanf(" %d", &d);
        scanf(" %d", &p);

        pages = q * p * d / (p - q);

        if (pages == 1) {
            printf("%d pagina\n", pages);

        } else {
            printf("%d paginas\n", pages);
        }

    }

    return 0;
}
