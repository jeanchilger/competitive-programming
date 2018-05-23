#include <stdio.h>
#include <string.h>

int main(void) {

    char l[10000];
    int len, n, i;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%s", l);
        len = strlen(l);
        printf("%.2f\n", (0.01 * len));
    }

    return 0;
}
