#include <iostream>

using namespace std;

int main() {

    int N, F1, F2, max, min, gcd;

    cin >> N;

    int output[N];

    for (int i=0; i < N; i++) {
        cin >> F1 >> F2;

        if (F1 == F2) {
            printf("%d\n", F1);
            continue;
        } else if (F1 < F2) {
            max = F2;
            min = F1;
        } else {
            max = F1;
            min = F2;
        }

        while (max % min != 0) {
            gcd = max % min;
            max = min;
            min = gcd;
        }
        output[i] = min;
    }

    for (int i=0; i < N; i++) {
        cout << output[i] << "\n";
    }

    return 0;
}
