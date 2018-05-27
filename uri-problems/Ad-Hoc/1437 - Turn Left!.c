#include <stdio.h>

int main() {

    int n, i, count;
    char order[1001];


    while (1) {
        scanf("%d", &n);
        if (!n) break;
        count = 1;

        scanf("%s", order);

        for (i = 0; i < n; i++) {

            if (order[i] == 'D') {
                count++;
            } else if (order[i] == 'E'){
                count--;
            }

            if (count == 5 || count == -3) count = 1;
        }

        if (count == 1) {
            printf("N\n");
        } else if (count == 2 || count == -2) {
            printf("L\n");
        } else if (count == 3 || count == -1) {
            printf("S\n");
        } else if (count == 4 || count == 0){
            printf("O\n");
        }
    }

    return 0;
}
