#include <iostream>

using namespace std;

int main() {

    float s = 1;

    for (float i = 2; i <= 100; i ++) {
        s += 1/i;
    }

    printf("%.2lf\n", s);

    return 0;
}
