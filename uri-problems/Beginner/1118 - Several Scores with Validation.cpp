#include <iostream>

using namespace std;

int main() {

    double score;
    double sum;
    int valid;
    int x = 1;

    while(x != 2) {
        sum = 0;
        valid = 0;
        while(valid < 2) {

            cin >> score;

            if (score < 0 || score > 10) {
                printf("nota invalida\n");
            } else {
                sum += score;
                valid++;
            }
        }
        printf("media = %.2lf\n", sum / 2.0);
        printf("novo calculo (1-sim 2-nao)\n");
        cin >> x;
        while(x < 1 || x > 2) {
            printf("novo calculo (1-sim 2-nao)\n");
            cin >> x;
        }

    }

    return 0;
}
