#include <stdio.h>

int main() {

    int n, i, j, index, ok;
    char alternatives[5] = {'A', 'B', 'C', 'D', 'E'};
    int marked[5];

    while (1) {
        scanf(" %d", &n);
        if (!n) break;
        for (i = 0; i < n; i++) {

            index = -1;
            for (j = 0; j < 5; j++) {
                scanf(" %d", &marked[j]);
            }

            for (j = 0; j < 5; j++) {
                if (marked[j] <= 127) {
                    if (index < 0) {
                        index = j;
                        ok = 1;
                    } else {
                        printf("*\n");
                        ok = 0;
                        break;
                    }
                }
            }

            if (index < 0) {
                printf("*\n");
            } else if (ok){
                printf("%c\n", alternatives[index]);
            }

        }


    }


    return 0;
}
