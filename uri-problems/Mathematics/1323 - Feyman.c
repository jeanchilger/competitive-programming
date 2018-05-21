#include <stdio.h>

int main() {

    int n, squares;

    while (1) {
        scanf("%d", &n);
        squares = 0;

        if (!n) break;
        while (n > 0) {
            squares += n * n;
            n--;
        }
        printf("%d\n", squares);
    }

    return 0;
}
