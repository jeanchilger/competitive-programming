#include <stdio.h>

int main() {

    int a, n, f, i;
    int observed = 0;
    scanf(" %d", &a);

    scanf(" %d", &n);
    for (i = 0; i < n; i++) {
        scanf(" %d", &f);
        if (a * f >= 40000000) {
            observed++;
        }
    }

    printf("%d\n", observed);    

    return 0;
}
