#include <cstdio>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int m, n;
vector<int> x, y;
vector<vector<int> > memo;

int pd(int i, int j) {
    if (i == m-1 || j == n-1) return 0;
    if (memo[i][j] != -1) return memo[i][j];

    int a = x[i] * (j+1) + pd(i+1, j);
    int b = y[j] * (i+1) + pd(i, j+1);

    return memo[i][j] = min(a, b);
}

int main () {

    int val;
    scanf("%d %d", &m, &n);
    for (int i = 0; i < m-1; i++) {
        scanf(" %d", &val);
        x.push_back(val);
    }

    for (int i = 0; i < n-1; i++) {
        scanf(" %d", &val);
        y.push_back(val);
    }

    sort(x.rbegin(), x.rend());
    sort(y.rbegin(), y.rend());
    
    memo.assign(m, vector<int>(n, -1));
    
    /*for (int i = 0; i < m-1; i++) {
        printf("%d ", x[i]);
    }
    printf("\n");

    for (int i = 0; i < n-1; i++) {
        printf("%d ", y[i]);
    }
    printf("\n");*/

    printf("%d\n", pd(0, 0));

    return 0;
}
