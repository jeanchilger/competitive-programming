#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

    int a, b, c, a1, b1, c1;

    cin >> a >> b >> c;

    // crescente
    if (a >= b) {
        if (b >= c) {
            a1 = a;
            b1 = b;
            c1 = c;

        } else if (c >= a) {
            a1 = c;
            b1 = a;
            c1 = b;

        } else if (b <= c) {
            a1 = a;
            b1 = c;
            c1 = b;
        }

    } else if (b >= a) {
        if (a >= c) {
            a1 = b;
            b1 = a;
            c1 = c;

        } else if (c >= b) {
            a1 = c;
            b1 = b;
            c1 = a;

        } else if (a <= c) {
            a1 = b;
            b1 = c;
            c1 = a;
        }
    }

    printf("%d\n%d\n%d\n\n", c1, b1, a1);
    printf("%d\n%d\n%d\n", a, b, c);
    
    return 0;
}
