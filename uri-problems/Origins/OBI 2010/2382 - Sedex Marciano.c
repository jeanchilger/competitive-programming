#include <stdio.h>
#include <math.h>

int main() {

    int l, a, r, p;
    scanf("%d %d %d %d", &l, &a, &p, &r);

    double d = sqrt(pow(l, 2) + pow(a, 2) + pow(p, 2));
    
    if (d > r*2) {
        printf("N\n");

    } else {
        printf("S\n");
    }

    return 0;
}
