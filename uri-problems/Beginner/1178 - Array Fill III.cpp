#include <iostream>

using namespace std;

int main(){

    double n[100];
    double x;

    cin >> x;
    n[0] = x;

    for (int i = 1; i < 100; i++) {
        n[i] = n[i-1] / 2.0;
    }

    for (int j = 0; j < 100; j++) {
        printf("N[%d] = %.4lf\n", j, n[j]);
    }

    return 0;

}
