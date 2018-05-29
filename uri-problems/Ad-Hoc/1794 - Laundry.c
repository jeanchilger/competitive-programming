#include <stdio.h>

int main() {

    int n, la, lb, sa, sb;

    scanf("%d", &n);

    scanf(" %d %d", &la, &lb);
    scanf(" %d %d", &sa, &sb);

    if (n < la || n < sa) {
        printf("impossivel\n");

    } else if (n > lb || n > sb) {
        printf("impossivel\n");

    } else {
        printf("possivel\n");
    }

    return 0;
}
