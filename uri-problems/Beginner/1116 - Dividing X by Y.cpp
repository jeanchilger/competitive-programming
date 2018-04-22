#include <iostream>

using namespace std;

int main() {

    int x, y, N;

    cin >> N;

    for (int i=0; i < N; i++) {

        cin >> x >> y;
        if (!y) {
            printf("divisao impossivel\n");
        } else {
            printf("%.1lf\n", ((float) x / y));
        }

    }

    return 0;
}
