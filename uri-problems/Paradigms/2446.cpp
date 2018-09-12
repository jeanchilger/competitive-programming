#include <stdio.h>
#include <vector>

using namespace std;

vector<vector<int> > cache;
vector<int> coins;

int coin(int v, int n) {
    for (int i = 1; i <= n; i++) {
        for (int vi = 1; vi <= v; vi++) {
            if (vi < coins[i]) {
                cache[i][vi-1] = cache[i-1][vi-1];
                                            
            } else {
                if (vi == coins[i]) {
                    cache[i][vi-1] = 1;
                                                        
                } else {
                    cache[i][vi-1] = cache[i-1][vi-(coins[i] + 1)];
                                                        
                }
                            
            }        
        }
        if (cache[i][v-1] == 1) return 1;            
    }

    return cache[n][v-1];
}

int main () {

    int value, n; // value to change / number of coins;
    int val;
    scanf("%d %d", &value, &n);
    cache.assign(n+1, vector<int> (value, -1));
    cache[0].assign(value, 0);
    for (int i = 0; i < n; i++) {
        scanf(" %d", &val);
        coins.push_back(val);
                                                
    }
                            
    if (coin(value, n)) printf("S\n");
    else printf("N\n");

    return 0;

}

