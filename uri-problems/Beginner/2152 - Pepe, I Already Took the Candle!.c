
#include <stdio.h>

int main(void) {

    int h, m, o;
    int n, i;

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d %d %d", &h, &m, &o);
        if (o) {
            printf("%02d:%02d - A porta abriu!\n", h, m);
        } else {
            printf("%02d:%02d - A porta fechou!\n", h, m);
        }

    }

    return 0;
}
