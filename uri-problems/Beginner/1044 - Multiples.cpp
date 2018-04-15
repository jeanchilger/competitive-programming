#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

    int a, b;

    cin >> a >> b;

    if ((a % b == 0) || (b % a == 0)) {
        printf("Sao Multiplos\n");
    } else {
        printf("Nao sao Multiplos\n");
    }

    return 0;
}
