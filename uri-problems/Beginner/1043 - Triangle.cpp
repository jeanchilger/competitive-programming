#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

    float A, B, C;

    cin >> A >> B >> C;

    if (((A + B) > C) && ((A + C) > B) && ((B + C) > A)) {
        float p = A + B + C;
        printf("Perimetro = %.1lf\n", p);
    } else {
        float a = ((A + B) * C) / 2;
        printf("Area = %.1lf\n", a);
    }

    return 0;
}
