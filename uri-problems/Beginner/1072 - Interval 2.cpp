#include <iostream>

using namespace std;

int main() {

    int N, X;
    int in = 0;
    int out = 0;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> X;
        if ((X >= 10) && (X <= 20)) {
            in ++;
        } else {
            out ++;
        }
    }

    printf("%d in\n%d out\n", in, out);

    return 0;
}
