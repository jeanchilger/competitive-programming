#include <stdio.h>

int main() {

    int r, l, sum;

    while (1) {
        scanf("%d %d", &r, &l);

        sum = r + l;
        if (sum) printf("%d\n", sum);
        else break;
    }

    return 0;
}
