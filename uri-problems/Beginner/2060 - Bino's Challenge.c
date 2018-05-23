#include <stdio.h>

int main() {
    int n, l, i;
    int m2 = 0;
    int m3 = 0;
    int m4 = 0;
    int m5 = 0;

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        
        scanf(" %d", &l);
        if (l % 2 == 0) {
            m2++;
        }

        if (l % 3 == 0) {
            m3++;
        }

        if (l % 4 == 0) {
            m4++;
        }

        if (l % 5 == 0) {
            m5++;
        }
    }

    printf("%d Multiplo(s) de 2\n", m2);
    printf("%d Multiplo(s) de 3\n", m3);
    printf("%d Multiplo(s) de 4\n", m4);
    printf("%d Multiplo(s) de 5\n", m5);

 }
