#include <iostream>

using namespace std;

int main() {

    int t, pa, pb, years;

    double g1, g2;

    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> pa >> pb >> g1 >> g2;
        years = 0;
        while (pa <= pb) {
            pa += (int) (pa * g1 / 100);
            pb += (int) (pb * g2 / 100);
            years++;
        }
        if (years > 100) {
            cout << "Mais de 1 seculo.\n";
        } else {
            cout << years << " anos.\n";
        }
    }


    return 0;
}
