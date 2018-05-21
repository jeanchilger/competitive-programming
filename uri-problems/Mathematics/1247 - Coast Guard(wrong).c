#include <stdio.h>

int main() {

    int d, vf, vg;

    while (1) {
        scanf("%d %d %d", &d, &vf, &vg);

        if (vf >= vg) {
            printf("N\n");

        } else if ((float)(vf/d) >= (float)(vg/d)) {
            printf("N\n");

        } else {
            printf("S\n");

        }
    }


    return 0;
}
