#include <iostream>

using namespace std;

int main() {

    float s = 1;
    int d = 1;

    for (float i = 2; i <= 38; i += 2) {
        d *= 2;
        s += (1 + i) / d;
    }

    printf("%.2lf\n", s);

    return 0;
}
