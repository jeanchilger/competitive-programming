#include <stdio.h>
#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

int main () {
        int n, val, s = 0;
            scanf("%d", &n);
                int arr[n];

                for (int i = 0; i < n; i++) {
                            scanf(" %d", &arr[i]);
                                
                }
                    vector<vector<int> > memo;

                        memo.assign(n, vector<int>(n+1, 0));
                            
                            int temp = 1;
                            for (int i = 0; i < n; i++) {
                                for (int j = i+1; j < n+1; j++) {
                                                temp = memo[i][j-1] + arr[j-1];
                                                            if (temp == 0) s++;
                                                                        memo[i][j] = temp;
                                                                                
                                }
                                    
                            }
                                
                                printf("%d\n", s);
                                    

                                    return 0;

}
