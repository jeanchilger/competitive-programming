#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

    double A, B, C, a, b, c;

    cin >> A >> B >> C;

    if (A >= B) {
        if (B >= C) {
            a = A;
            b = B;
            c = C;

        } else if (C >= A) {
            a = C;
            b = A;
            c = B;

        } else if (B <= C) {
            a = a;
            b = C;
            c = b;
        }

    } else if (B >= A) {
        if (A >= C) {
            a = B;
            b = A;
            c = C;

        } else if (C >= B) {
            a = C;
            b = B;
            c = A;

        } else if (A <= C) {
            a = B;
            b = C;
            c = A;
        }
    }

    A = a;
    B = b;
    C = c;

    if (A >= (B + C)) {
        printf("NAO FORMA TRIANGULO\n");
    } else {
        if ((A * A) == (B * B + C * C)) {
            printf("TRIANGULO RETANGULO\n");

        } else if ((A * A) > (B * B + C * C)) {
            printf("TRIANGULO OBTUSANGULO\n");

        } else if ((A * A) < (B * B + C * C)) {
            printf("TRIANGULO ACUTANGULO\n");
        }

        if (A == B and B == C) {
            printf("TRIANGULO EQUILATERO\n");
        } else if (A == B or B == C or C == A) {
            printf("TRIANGULO ISOSCELES\n");
        }
    }

    return 0;
}
