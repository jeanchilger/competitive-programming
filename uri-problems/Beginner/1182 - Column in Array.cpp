#include <iostream>

using namespace std;

int main(){

    float m[12][12];
    float sum = 0;
    int c;
    char t;

    cin >> c;
    cin >> t;

    for (int i = 0; i < 12; i++) {

        for (int j = 0; j < 12; j++) {
            cin >> m[i][j];

            if (j == c) {
                sum += m[i][j];
            }
        }
    }

    if (t == 'M') {
        printf("%.1lf\n", (sum/12.0));
    } else {
        printf("%.1lf\n", sum);
    }

    return 0;
}
