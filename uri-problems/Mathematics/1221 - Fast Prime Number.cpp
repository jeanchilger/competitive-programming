#include <iostream>
#include <math.h>

using namespace std;

int main() {

    int N, X, divider, square;

    cin >> N;

    for (int i=0; i < N; i++) {
        divider = 0;
        cin >> X;
        square = sqrt(X);

        for (int j=1; j <= square; j++){

            if ((X % j) == 0) {
                divider++;
                if (divider > 1) {
                    printf("Not Prime\n");
                    break;
                }
            }
        }

        if (divider < 2) {
            printf("Prime\n");
        }
    }

    return 0;
}
