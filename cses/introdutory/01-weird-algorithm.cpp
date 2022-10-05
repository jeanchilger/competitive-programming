#include <bits/stdc++.h>

typedef unsigned long int uli;


void solve(uli n) {
    while (n != 1) {
        printf("%ld ", n);

        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = n * 3 + 1;
        }
    }
};


int main(int argc, char **argv) {
    uli n;

    scanf("%ld", &n);

    solve(n);

    printf("1\n");

    return 0;
}
