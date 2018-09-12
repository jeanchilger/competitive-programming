#include <cstdio>

using namespace std;

int main () {
    int j, r, val;
    scanf("%d %d", &j, &r);
    int p[j] = {};
    int win = -1;
    int s = -999;
    for (int a = 0; a < r; a++) {
        for (int b = 0; b < j; b++) {
            scanf(" %d", &val);
            p[b] += val;
            if (p[b] >= s) {
                s = p[b];
                win = b+1;
            }
        }
    }

    printf("%d\n", win);
    return 0;
}
