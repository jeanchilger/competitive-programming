#include <iostream>

using namespace std;

int main() {

    int N, X, divider;

    cin >> N;

    for (int i=0; i < N; i++) {
        divider = 0;
        cin >> X;
        for (int j=1; j <= X; j++){
            if ((X % j) == 0) {
                divider++;
                if (divider > 2) {
                    rintf("%d nao eh primo\n", X);
                    break;
                }
            }
        }

        if (divider == 2) {
            printf("%d eh primo\n", X);
        }
    }

    return 0;
}
