#include <stdio.h>
#include <vector>
#include <cmath>

using namespace std;

vector<int> cache;
vector<int> profits;
int n;

int solve (int i) {
    if (i == n) return 0;
    if (cache[i] != -1) return cache[i];

    int a = profits[i];
    int b = profits[i] + solve(i + 1);

    return cache[i] = max(a, b);
}

int main(){

    int perDayCost, revenue;

    while (scanf("%d", &n) != EOF) {
        
        cache.assign(n, -1);

        scanf("%d", &perDayCost);
        for (int i = 0; i < n; i++) {

            scanf("%d", &revenue);
            profits.push_back(revenue - perDayCost);
        }

        int r = -9999;
        for (int i = 0; i < n; i++) {
            r = max(r, solve(i));
        }

        if (r > 0) printf("%d\n", r);
        else printf("0\n");

        profits.clear();
        cache.clear();
    }

    return 0;
}
