#include <stdio.h>
#include <stdlib.h>

int main() {

    int n, qt, s, i, j;
    int guessed, iGuessed, val;

    scanf(" %d", &n);
    for (i = 0; i < n; i++) {
        guessed = 999;
        scanf(" %d %d", &qt, &s);
        for (j = 0; j < qt; j++) {
            scanf(" %d", &val);
            if (abs(val - s) < guessed) {
                guessed = abs(val - s);
                iGuessed = j+1;
            }
        }

        printf("%d\n", iGuessed);

    }

    return 0;
}
