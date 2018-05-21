#include <stdio.h>

int main() {

    unsigned long long a, b;
    unsigned long long sum = 0;
    scanf("%llu %llu", &a, &b);

    while (a <= b) {
        sum += a;
        a++;
    }
    printf("%llu\n", sum);


    return 0;
}
