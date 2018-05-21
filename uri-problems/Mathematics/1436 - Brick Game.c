#include <stdio.h>

int main() {

    int t, i, j;
    int n, age, captain;
    scanf("%d", &t);

    for (i = 0; i < t; i++) {
        scanf("%d", &n);
        
        for (j = 0; j < n; j++) {
            scanf("%d", &age);
            if (j == (n/2)) {
                captain = age;
            }
        }
        printf("Case %d: %d\n", (i+1), captain);

    }


    return 0;
}
