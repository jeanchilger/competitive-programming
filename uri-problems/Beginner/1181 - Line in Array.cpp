#include <iostream>

using namespace std;

int main(){

    double m[12][12];
    int l;
    float sum = 0;
    char t;
    cin >> l;
    cin >> t;

    for (int i = 0; i < 12; i++) {

        for (int j = 0; j < 12; j++) {
            cin >> m[i][j];
            if (i == l) {
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