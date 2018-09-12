#include <cstdio>
#include <cmath>
#include <vector>
#include <iostream>

using namespace std;

vector<int> cot;
vector<vector<int> > cache;

int c, n;

int f () {
    int mys = 0, temp;
    for (int i = 1; i <= n; i++) {
        for (int j = i+1; j <= n; j++) { // vai fazer cot[i] - cot[i] > 0 --> pode dar merda
            temp = cot[j-1] - (cot[i-1]+10);
            if (temp > cache[i][j-1] && temp > cache[i-1][j]) {
                cache[i][j] = temp;

            } else {
                cache[i][j] = cache[i][j-1];
            }

            if (temp <= 0) {
                mys += cache[i][j];
                
            }
        }
        mys += cache[i][n];
    }
 
    return mys;

}

int main () {

    int val;
    scanf("%d %d", &n, &c);
    cache.assign(n+1, vector<int>(n+1, 0));

    for (int i = 0; i < n; i++) {
        scanf(" %d", &val);
        cot.push_back(val);
    }
    
    printf("%d\n", f());

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <=n; j++) {
            printf("%3d ", cache[i][j]);
        }
        printf("\n");
    }

    return 0;
}
