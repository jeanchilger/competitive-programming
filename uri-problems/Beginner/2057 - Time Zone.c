#include <stdio.h>

int main() {
    int s, t, f;
    scanf("%d %d %d", &s, &t, &f);

    int val = s + t + f;
    if (val > 23) {
        printf("%d\n", val % 24);
    } else if (val < 0){
        printf("%d\n", val + 24);
    } else {
        printf("%d\n", val);
    }
}
