#include <iostream>

using namespace std;

int main() {

    int N;

    cin >> N;

    int end = N - (N % 2);

    for (int i = 2; i <= end; i += 2) {
        printf("%d^2 = %d\n", i, (i*i));
    }

    return 0;
}
