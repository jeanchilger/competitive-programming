#include <cstdio>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {

    long long int i, j;

    while (scanf(" %lld %lld", &i, &j) != EOF) {

        long long int maxCount = -1;

        long long int i2 = min(i, j);
        long long int j2 = max(i, j);

        for (long long int x=i2; x <= j2; x++) {

            long long int count=1;
        
            long long int n = x;

            while (n > 1) {
                if (n % 2)
                    n = n * 3 + 1;
                else
                    n = n / 2;
 
                count++;
            }   

        
            maxCount = max(count, maxCount);        
        }

        printf("%lld %lld %lld\n", i, j, maxCount);
    }

    return 0;
}
