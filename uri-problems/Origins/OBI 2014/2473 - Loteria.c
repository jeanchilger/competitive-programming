#include <stdio.h>

int main() {

    int bet[6];
    int sort[6];
    int i, j;
    int count = 0;

    for (i = 0; i < 6; i++) {
        scanf(" %d", &bet[i]);
    }
    for (i = 0; i < 6; i++) {
        scanf(" %d", &sort[i]);
    }

    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            if (bet[i] == sort[j]) {
                count++;
            }
        }
    }

    if (count < 3) {
        printf("azar\n");

    } else if (count == 3) {
        printf("terno\n");

    } else if (count == 4) {
        printf("quadra\n");

    } else if (count == 5) {
        printf("quina\n");

    } else {
        printf("sena\n");
    }

    return 0;
}
