#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

    double A, B, C, a, b, c;

    cin >> a >> b >> c;
    if (a > b) {
        if (b > c) {
            A = a;
            B = b;
            C = c;
        } else if (c > a){
            A = c;
            B = a;
            C = b;
        } else {
            A = a;
            B = c;
            C = b;
        }
    } else if (b > a) {
        if (a > c) {
            A = b;
            B = a;
            C = c;
        } else if (c > b) {
            A = c;
            B = b;
            C = a;
        } else {
            A = b;
            B = c;
            C = a;
        }
    } else {
        if (c > b) {
            A = c;
            B = a;
            C = b;
        } else {
            A = a;
            B = b;
            C = c;
        }
    }

    if (A >= (B + C)) {
        printf("NAO FORMA TRIANGULO\n");
    } else {
        if (A * A == (B * B + C * C)) {
            printf("TRIANGULO RETANGULO\n");

        } else if ((A * A) > (B * B + C * C)) {
            printf("TRIANGULO OBTUSANGULO\n");

        } else if ((A * A) < (B * B + C * C)) {
            printf("TRIANGULO ACUTANGULO\n");
        }

        if ((A == B) && (B == C)) {
            printf("TRINAGULO EQUILATERO\n");
        } else if ((A == B) || (A == C) || (B == C)){
            printf("TRIANGULO ISOSCELES\n");
        }
    }

    return 0;
}
