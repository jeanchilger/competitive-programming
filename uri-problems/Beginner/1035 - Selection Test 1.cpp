#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main() {

    int a, b, c, d;

    cin >> a >> b >> c >> d;

    if ((b > c) && (d > a)){
        if ((c + d) > (a + b)){
            if ((c > 0) && (d > 0)){
                if (a % 2 == 0){
                    printf("Valores aceitos\n");
                    return 0;
                }
            }
        }
    }
    printf("Valores nao aceitos\n");

    return 0;
}
