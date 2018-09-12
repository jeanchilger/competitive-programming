#include <cstdio>
#include <vector>

using namespace std;

vector<int> cache;
vector<int> cot;
int n, c;

int f(int i) {
    if (i < 0) return 0;
    if (cache[i+1] != -1) return cache[i+1];

    if (cot[i] - cache[i] <= 0) return cache[i+1] = cache[i] + f(i-1);

    return cache[i+1] = cot[i] - f(i - 1);
}

int main () {
    int val;
    scanf("%d %d", &n, &c);

    for (int i = 0; i < n; i++) {
        scanf(" %d", &val);
        cot.push_back(val);
    }

    cache.assign(n+1, -1);
    cache[0] = 0;

    f(n-1);

    for (int i = 0; i < n; i++) {
        printf("%2d ", cache[i]);
    }

    printf("\n");
 
    return 0;
}
