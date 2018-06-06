#include <stdio.h>

int main() {

    int n, i;
    int start, last;
    scanf("%d", &n);
    int times[n];
    int timeOn = 0;

    for (i = 0; i < n; i++) {
        scanf(" %d", &times[i]);
    }

    start = times[0];
    last = start;

    for (i = 0; i < n; i++) {

        if (times[i] - last > 10) {
            timeOn += last+10 - start;
            start = times[i];
        }
        last = times[i];
    }

    timeOn += times[n - 1] + 10 - start;
    printf("%d\n", timeOn);

     return 0;
}
