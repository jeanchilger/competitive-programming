#include <stdio.h>

using namespace std;

int main () {

    int n, a;
    scanf("%d", &n);
    
    // a = n << 2;
    // a = n & (1 << i); i-th bit of n is on? (if true a != 0; else a = 0);
    // a = n | (1 << i); turn on the i-th bit of n;
    // a = n & ~(1 << i); turn of the i-th bit of n; 
    // a = n ^ (1 << i); turn on/off (toggle) i-th bit of n;

    printf("%d\n", a);

    return 0;
}
