#include <iostream>

using namespace std;

int main(){

    float a[100];
    float num;

    for (int i = 0; i < 100; i++) {
        cin >> num;
        a[i] = num;
    }

    for (int j = 0; j < 100; j++) {
        if (a[j] <= 10) {
            printf("A[%d] = %.1lf\n", j, a[j]);
        }
    }

    return 0;

}
