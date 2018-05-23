#include <stdio.h>

int main(void) {

    int n, i;
    double denominator = 6;
    double num = 0;
    scanf("%d", &n);

    for (i = n; i > 0; i--) {
        denominator = 6 + num;
        num = 1 / denominator;

    }


    printf("%.10lf\n", (3+num));

    return 0;
}
