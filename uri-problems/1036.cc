#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main() {

    double A, B, C;

    cin >> A >> B >> C;

    double delta = (B * B) - (4 * A * C);

    if ((A == 0) || (delta < 0)){
        printf("Impossivel calcular\n");
    } else {
        double r1 = (- B + sqrt(delta)) / (2 * A);
        double r2 = (- B - sqrt(delta)) / (2 * A);

        printf("R1 = %.5lf\nR2 = %.5lf\n", r1, r2);
    }

    return 0;
}
