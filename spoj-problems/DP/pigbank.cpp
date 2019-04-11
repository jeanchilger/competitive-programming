#include <iostream>
#include <cmath>

using namespace std;

#define INF 999999999
typedef long long int lli;

int main () {

    int t, n, e, f;
    scanf("%d", &t);

    for (int x = 0; x < t; x++) {
        
        scanf(" %d %d", &e, &f);
        int tw = f-e+1;
        lli pd[tw];

        scanf(" %d", &n);
        int w[n];
        int p[n];
        
        for (int m = 0; m < n; m++) {
            scanf(" %d %d", &p[m], &w[m]);
        }

        for (int i = 1; i < tw; i++) {
            pd[i] = INF;
        }

        pd[0] = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 1; j < tw; j++) {
                if (j >= w[i])
                    pd[j] = min(pd[j], p[i] + pd[j - w[i]]);
            }
        }

        if (pd[tw-1] < INF) {
            printf("The minimum amount of money in the piggy-bank is %lli.\n", pd[tw-1]);
 
        } else {
            printf("This is impossible\n");
        }

    }

    return 0;
}
