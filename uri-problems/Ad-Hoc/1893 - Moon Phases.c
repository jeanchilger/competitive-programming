#include <stdio.h>

int main(void) {

    int d1, d2;

    scanf(" %d %d", &d1, &d2);

    if (d2 >= 0 && d2 <= 2) {
        printf("nova\n");

    } else if ((d2 >= 3 && d2 <= 96) && d1 >= d2) {
        printf("minguante\n");

    } else if ((d2 >= 3 && d2 <= 96)) {
        printf("crescente\n");

    } else if (d2 >= 97 && d2 <= 100) {
        printf("cheia\n");
    }

    return 0;
}
