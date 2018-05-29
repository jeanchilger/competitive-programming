#include <stdio.h>

int main() {

    int cards[5], i;
    int v = 1;

    for (i = 0; i < 5; i++) {
        scanf(" %d", &cards[i]);
    }

    if (cards[0] > cards[1]) {
        for (i = 0; i < 4; i++) {
            if (cards[i] < cards[i+1]) {
                printf("N\n");
                v = 0;
                break;
            }
        }
        if (v) {
            printf("D\n");
        }

    } else {
        for (i = 0; i < 4; i++) {
            if (cards[i] > cards[i+1]) {
                printf("N\n");
                v = 0;
                break;
            }
        }
        if (v) {
            printf("C\n");
        }
    }

    return 0;
}
