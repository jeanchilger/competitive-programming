#include <iostream>

using namespace std;

int main() {

    float score;
    float sum = 0;
    int valid = 0;

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

    return 0;
}
